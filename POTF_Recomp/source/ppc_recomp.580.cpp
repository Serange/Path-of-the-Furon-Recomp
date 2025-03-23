#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832CE95C"))) PPC_WEAK_FUNC(sub_832CE95C);
PPC_FUNC_IMPL(__imp__sub_832CE95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE960"))) PPC_WEAK_FUNC(sub_832CE960);
PPC_FUNC_IMPL(__imp__sub_832CE960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CE968;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,2904
	ctx.r29.s64 = ctx.r10.s64 + 2904;
	// bne cr6,0x832ce9b0
	if (!ctx.cr6.eq) goto loc_832CE9B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,105
	ctx.r7.s64 = 105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9B0;
	sub_8320CF10(ctx, base);
loc_832CE9B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832ce9d4
	if (!ctx.cr6.eq) goto loc_832CE9D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,106
	ctx.r7.s64 = 106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9D4;
	sub_8320CF10(ctx, base);
loc_832CE9D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832ce9f8
	if (!ctx.cr6.eq) goto loc_832CE9F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2884
	ctx.r5.s64 = ctx.r11.s64 + 2884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,107
	ctx.r7.s64 = 107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9F8;
	sub_8320CF10(ctx, base);
loc_832CE9F8:
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832CEA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832cea30
	if (!ctx.cr0.eq) goto loc_832CEA30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2880
	ctx.r5.s64 = ctx.r11.s64 + 2880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,113
	ctx.r7.s64 = 113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEA2C;
	sub_8320CF10(ctx, base);
	// b 0x832ceaa8
	goto loc_832CEAA8;
loc_832CEA30:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// stw r25,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r25.u32);
	// addi r30,r11,-6912
	ctx.r30.s64 = ctx.r11.s64 + -6912;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r29,12
	ctx.r29.s64 = 12;
loc_832CEA4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832CEA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x832cea4c
	if (!ctx.cr0.eq) goto loc_832CEA4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2848
	ctx.r4.s64 = ctx.r11.s64 + 2848;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832CEA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ceaa8
	if (!ctx.cr6.eq) goto loc_832CEAA8;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_832CEAA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CEAB4"))) PPC_WEAK_FUNC(sub_832CEAB4);
PPC_FUNC_IMPL(__imp__sub_832CEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEAB8"))) PPC_WEAK_FUNC(sub_832CEAB8);
PPC_FUNC_IMPL(__imp__sub_832CEAB8) {
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
	// bne cr6,0x832ceaf4
	if (!ctx.cr6.eq) goto loc_832CEAF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2904
	ctx.r6.s64 = ctx.r11.s64 + 2904;
	// addi r5,r10,2992
	ctx.r5.s64 = ctx.r10.s64 + 2992;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,174
	ctx.r7.s64 = 174;
	// bl 0x8320cf10
	ctx.lr = 0x832CEAF4;
	sub_8320CF10(ctx, base);
loc_832CEAF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CEB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_832CEB1C"))) PPC_WEAK_FUNC(sub_832CEB1C);
PPC_FUNC_IMPL(__imp__sub_832CEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEB20"))) PPC_WEAK_FUNC(sub_832CEB20);
PPC_FUNC_IMPL(__imp__sub_832CEB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832CEB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,2904
	ctx.r29.s64 = ctx.r10.s64 + 2904;
	// bne cr6,0x832ceb68
	if (!ctx.cr6.eq) goto loc_832CEB68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2992
	ctx.r5.s64 = ctx.r11.s64 + 2992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEB68;
	sub_8320CF10(ctx, base);
loc_832CEB68:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x832ceb8c
	if (ctx.cr6.lt) goto loc_832CEB8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2996
	ctx.r5.s64 = ctx.r11.s64 + 2996;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,183
	ctx.r7.s64 = 183;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEB8C;
	sub_8320CF10(ctx, base);
loc_832CEB8C:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CEBA0"))) PPC_WEAK_FUNC(sub_832CEBA0);
PPC_FUNC_IMPL(__imp__sub_832CEBA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x832cec10
	if (ctx.cr6.gt) goto loc_832CEC10;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,3032
	ctx.r12.s64 = ctx.r12.s64 + 3032;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31955
	ctx.r12.s64 = -2094202880;
	// addi r12,r12,-5164
	ctx.r12.s64 = ctx.r12.s64 + -5164;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_832CEBD4;
	case 1:
		goto loc_832CEBDC;
	case 2:
		goto loc_832CEBE4;
	case 3:
		goto loc_832CEBEC;
	case 4:
		goto loc_832CEBF4;
	case 5:
		goto loc_832CEBFC;
	case 6:
		goto loc_832CEC04;
	case 7:
		goto loc_832CEC0C;
	default:
		__builtin_unreachable();
	}
loc_832CEBD4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBDC:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBE4:
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBEC:
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBF4:
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBFC:
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEC04:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEC0C:
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_832CEC10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CEC18"))) PPC_WEAK_FUNC(sub_832CEC18);
PPC_FUNC_IMPL(__imp__sub_832CEC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CEC20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83217580
	ctx.lr = 0x832CEC30;
	sub_83217580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CEC3C;
	sub_83217580(ctx, base);
	// bl 0x83216a90
	ctx.lr = 0x832CEC40;
	sub_83216A90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a98
	ctx.lr = 0x832CEC4C;
	sub_83216A98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832d1f28
	ctx.lr = 0x832CEC54;
	sub_832D1F28(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,3056
	ctx.r27.s64 = ctx.r10.s64 + 3056;
	// bne cr6,0x832cec94
	if (!ctx.cr6.eq) goto loc_832CEC94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5860
	ctx.r5.s64 = ctx.r11.s64 + -5860;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEC94;
	sub_8320CF10(ctx, base);
loc_832CEC94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832cecb8
	if (!ctx.cr6.eq) goto loc_832CECB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3044
	ctx.r5.s64 = ctx.r11.s64 + 3044;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CECB8;
	sub_8320CF10(ctx, base);
loc_832CECB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832cecdc
	if (!ctx.cr6.eq) goto loc_832CECDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3040
	ctx.r5.s64 = ctx.r11.s64 + 3040;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CECDC;
	sub_8320CF10(ctx, base);
loc_832CECDC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83218b20
	ctx.lr = 0x832CECEC;
	sub_83218B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ced40
	if (!ctx.cr0.eq) goto loc_832CED40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832ced40
	if (ctx.cr6.eq) goto loc_832CED40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832d56b8
	ctx.lr = 0x832CED08;
	sub_832D56B8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d18c0
	ctx.lr = 0x832CED24;
	sub_832D18C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d2490
	ctx.lr = 0x832CED34;
	sub_832D2490(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d5ad0
	ctx.lr = 0x832CED40;
	sub_832D5AD0(ctx, base);
loc_832CED40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ced54
	if (ctx.cr6.eq) goto loc_832CED54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832eadf0
	ctx.lr = 0x832CED54;
	sub_832EADF0(ctx, base);
loc_832CED54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CED5C"))) PPC_WEAK_FUNC(sub_832CED5C);
PPC_FUNC_IMPL(__imp__sub_832CED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CED60"))) PPC_WEAK_FUNC(sub_832CED60);
PPC_FUNC_IMPL(__imp__sub_832CED60) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CED80;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831fde98
	ctx.lr = 0x832CED90;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x831fde98
	ctx.lr = 0x832CEDA0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,89
	ctx.r4.s64 = 89;
	// bl 0x831fde98
	ctx.lr = 0x832CEDB0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x831fde98
	ctx.lr = 0x832CEDC0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x831fde98
	ctx.lr = 0x832CEDD0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1003
	ctx.r4.s64 = 1003;
	// bl 0x831fde98
	ctx.lr = 0x832CEDE0;
	sub_831FDE98(ctx, base);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1004
	ctx.r4.s64 = 1004;
	// bl 0x831fde98
	ctx.lr = 0x832CEDF4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE08;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE1C;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE30;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,53
	ctx.r4.s64 = 53;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE44;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x831fde98
	ctx.lr = 0x832CEE54;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x831fde98
	ctx.lr = 0x832CEE64;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x831fde98
	ctx.lr = 0x832CEE74;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x831fde98
	ctx.lr = 0x832CEE84;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x831fde98
	ctx.lr = 0x832CEE94;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x831fde98
	ctx.lr = 0x832CEEA4;
	sub_831FDE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CEEB4;
	sub_831FDE98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831fde98
	ctx.lr = 0x832CEEC4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x831fde98
	ctx.lr = 0x832CEED4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x831fde98
	ctx.lr = 0x832CEEE4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x831fde98
	ctx.lr = 0x832CEEF4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x831fde98
	ctx.lr = 0x832CEF04;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x831fde98
	ctx.lr = 0x832CEF14;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x831fde98
	ctx.lr = 0x832CEF24;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x831fde98
	ctx.lr = 0x832CEF34;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,163
	ctx.r4.s64 = 163;
	// bl 0x831fde98
	ctx.lr = 0x832CEF44;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x831fde98
	ctx.lr = 0x832CEF54;
	sub_831FDE98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,669
	ctx.r4.s64 = 669;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CEF64;
	sub_831FDE98(ctx, base);
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

__attribute__((alias("__imp__sub_832CEF78"))) PPC_WEAK_FUNC(sub_832CEF78);
PPC_FUNC_IMPL(__imp__sub_832CEF78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CEFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832cefbc
	if (ctx.cr0.eq) goto loc_832CEFBC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832CEFBC;
	sub_82CB16F0(ctx, base);
loc_832CEFBC:
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

__attribute__((alias("__imp__sub_832CEFD8"))) PPC_WEAK_FUNC(sub_832CEFD8);
PPC_FUNC_IMPL(__imp__sub_832CEFD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832CEFEC"))) PPC_WEAK_FUNC(sub_832CEFEC);
PPC_FUNC_IMPL(__imp__sub_832CEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEFF0"))) PPC_WEAK_FUNC(sub_832CEFF0);
PPC_FUNC_IMPL(__imp__sub_832CEFF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF004"))) PPC_WEAK_FUNC(sub_832CF004);
PPC_FUNC_IMPL(__imp__sub_832CF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF008"))) PPC_WEAK_FUNC(sub_832CF008);
PPC_FUNC_IMPL(__imp__sub_832CF008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CF010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832cf090
	if (ctx.cr6.eq) goto loc_832CF090;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// orc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bge cr6,0x832cf078
	if (!ctx.cr6.lt) goto loc_832CF078;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832CF078;
	sub_82CB16F0(ctx, base);
loc_832CF078:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-2
	ctx.r10.s64 = -2;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// b 0x832cf0b4
	goto loc_832CF0B4;
loc_832CF090:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// li r9,-2
	ctx.r9.s64 = -2;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// orc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ~ctx.r10.u64;
loc_832CF0B4:
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF0C0"))) PPC_WEAK_FUNC(sub_832CF0C0);
PPC_FUNC_IMPL(__imp__sub_832CF0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CF0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832cf208
	if (ctx.cr6.eq) goto loc_832CF208;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x832eb058
	ctx.lr = 0x832CF0E0;
	sub_832EB058(ctx, base);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x832d28d0
	ctx.lr = 0x832CF0EC;
	sub_832D28D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x832d2948
	ctx.lr = 0x832CF0F8;
	sub_832D2948(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r30,6
	ctx.r30.s64 = 6;
loc_832CF1A0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x832cf1a0
	if (!ctx.cr0.eq) goto loc_832CF1A0;
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r29,5
	ctx.r29.s64 = 5;
loc_832CF1C8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cf1e8
	if (ctx.cr6.eq) goto loc_832CF1E8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CF1E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x832cf1c8
	if (!ctx.cr0.eq) goto loc_832CF1C8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CF208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF210"))) PPC_WEAK_FUNC(sub_832CF210);
PPC_FUNC_IMPL(__imp__sub_832CF210) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF218"))) PPC_WEAK_FUNC(sub_832CF218);
PPC_FUNC_IMPL(__imp__sub_832CF218) {
	PPC_FUNC_PROLOGUE();
	// divwu r11,r3,r5
	ctx.r11.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r5,0
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r3,r11,r5
	ctx.r3.u32 = ctx.r11.u32 / ctx.r5.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF240"))) PPC_WEAK_FUNC(sub_832CF240);
PPC_FUNC_IMPL(__imp__sub_832CF240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF24C"))) PPC_WEAK_FUNC(sub_832CF24C);
PPC_FUNC_IMPL(__imp__sub_832CF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF250"))) PPC_WEAK_FUNC(sub_832CF250);
PPC_FUNC_IMPL(__imp__sub_832CF250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832CF258;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r24,29
	ctx.r11.s64 = ctx.r24.s64 + 29;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r29,r9,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,3336
	ctx.r25.s64 = ctx.r10.s64 + 3336;
	// divwu r21,r30,r29
	ctx.r21.u32 = ctx.r30.u32 / ctx.r29.u32;
	// twllei r29,0
	// bne cr6,0x832cf2b8
	if (!ctx.cr6.eq) goto loc_832CF2B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF2B8;
	sub_8320CF10(ctx, base);
loc_832CF2B8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x832cf2e4
	if (ctx.cr6.eq) goto loc_832CF2E4;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// beq cr6,0x832cf2e4
	if (ctx.cr6.eq) goto loc_832CF2E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3268
	ctx.r5.s64 = ctx.r11.s64 + 3268;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF2E4;
	sub_8320CF10(ctx, base);
loc_832CF2E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf30c
	if (!ctx.cr6.eq) goto loc_832CF30C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF30C;
	sub_8320CF10(ctx, base);
loc_832CF30C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf334
	if (!ctx.cr6.eq) goto loc_832CF334;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3228
	ctx.r5.s64 = ctx.r11.s64 + 3228;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF334;
	sub_8320CF10(ctx, base);
loc_832CF334:
	// addi r11,r24,23
	ctx.r11.s64 = ctx.r24.s64 + 23;
	// add r28,r30,r22
	ctx.r28.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf368
	if (!ctx.cr6.gt) goto loc_832CF368;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,571
	ctx.r7.s64 = 571;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF368;
	sub_8320CF10(ctx, base);
loc_832CF368:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x832cf378
	if (!ctx.cr6.eq) goto loc_832CF378;
	// lwz r27,28(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x832cf37c
	goto loc_832CF37C;
loc_832CF378:
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_832CF37C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832cf3a0
	if (!ctx.cr6.eq) goto loc_832CF3A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,583
	ctx.r7.s64 = 583;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF3A0;
	sub_8320CF10(ctx, base);
loc_832CF3A0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832cf3f0
	if (!ctx.cr6.lt) goto loc_832CF3F0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_832CF3B8:
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r9,r23,4
	ctx.r9.s64 = ctx.r23.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r23,r9,8
	ctx.r23.s64 = ctx.r9.s64 + 8;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832cf3b8
	if (!ctx.cr0.eq) goto loc_832CF3B8;
loc_832CF3F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divwu r10,r30,r29
	ctx.r10.u32 = ctx.r30.u32 / ctx.r29.u32;
	// addi r9,r24,11
	ctx.r9.s64 = ctx.r24.s64 + 11;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// twllei r29,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r29,0
	// divwu r5,r11,r29
	ctx.r5.u32 = ctx.r11.u32 / ctx.r29.u32;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832CF434;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF43C"))) PPC_WEAK_FUNC(sub_832CF43C);
PPC_FUNC_IMPL(__imp__sub_832CF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF440"))) PPC_WEAK_FUNC(sub_832CF440);
PPC_FUNC_IMPL(__imp__sub_832CF440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CF448;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,3336
	ctx.r28.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf498
	if (!ctx.cr6.eq) goto loc_832CF498;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,641
	ctx.r7.s64 = 641;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF498;
	sub_8320CF10(ctx, base);
loc_832CF498:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x832cf4c4
	if (ctx.cr6.eq) goto loc_832CF4C4;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x832cf4c4
	if (ctx.cr6.eq) goto loc_832CF4C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3268
	ctx.r5.s64 = ctx.r11.s64 + 3268;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF4C4;
	sub_8320CF10(ctx, base);
loc_832CF4C4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf4ec
	if (!ctx.cr6.eq) goto loc_832CF4EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF4EC;
	sub_8320CF10(ctx, base);
loc_832CF4EC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf514
	if (!ctx.cr6.eq) goto loc_832CF514;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3228
	ctx.r5.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,644
	ctx.r7.s64 = 644;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF514;
	sub_8320CF10(ctx, base);
loc_832CF514:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x832cf524
	if (!ctx.cr6.eq) goto loc_832CF524;
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x832cf528
	goto loc_832CF528;
loc_832CF524:
	// lwz r26,32(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_832CF528:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832cf54c
	if (!ctx.cr6.eq) goto loc_832CF54C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,655
	ctx.r7.s64 = 655;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF54C;
	sub_8320CF10(ctx, base);
loc_832CF54C:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r31,r24
	ctx.r10.u64 = ctx.r31.u64 + ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf568
	if (!ctx.cr6.gt) goto loc_832CF568;
	// subf r24,r31,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_832CF568:
	// add r10,r31,r24
	ctx.r10.u64 = ctx.r31.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832cf5c4
	if (!ctx.cr6.lt) goto loc_832CF5C4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_832CF584:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r8,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x832cf584
	if (!ctx.cr0.eq) goto loc_832CF584;
loc_832CF5C4:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF5D0"))) PPC_WEAK_FUNC(sub_832CF5D0);
PPC_FUNC_IMPL(__imp__sub_832CF5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832CF5D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r24,29
	ctx.r11.s64 = ctx.r24.s64 + 29;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r28,r9,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,3336
	ctx.r26.s64 = ctx.r10.s64 + 3336;
	// divwu r21,r29,r28
	ctx.r21.u32 = ctx.r29.u32 / ctx.r28.u32;
	// twllei r28,0
	// bne cr6,0x832cf638
	if (!ctx.cr6.eq) goto loc_832CF638;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,712
	ctx.r7.s64 = 712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF638;
	sub_8320CF10(ctx, base);
loc_832CF638:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x832cf664
	if (ctx.cr6.eq) goto loc_832CF664;
	// cmpwi cr6,r24,5
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 5, ctx.xer);
	// beq cr6,0x832cf664
	if (ctx.cr6.eq) goto loc_832CF664;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3480
	ctx.r5.s64 = ctx.r11.s64 + 3480;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,713
	ctx.r7.s64 = 713;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF664;
	sub_8320CF10(ctx, base);
loc_832CF664:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf68c
	if (!ctx.cr6.eq) goto loc_832CF68C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3460
	ctx.r5.s64 = ctx.r11.s64 + 3460;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,714
	ctx.r7.s64 = 714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF68C;
	sub_8320CF10(ctx, base);
loc_832CF68C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf6b4
	if (!ctx.cr6.eq) goto loc_832CF6B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3440
	ctx.r5.s64 = ctx.r11.s64 + 3440;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,715
	ctx.r7.s64 = 715;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF6B4;
	sub_8320CF10(ctx, base);
loc_832CF6B4:
	// addi r11,r24,23
	ctx.r11.s64 = ctx.r24.s64 + 23;
	// add r25,r29,r22
	ctx.r25.u64 = ctx.r29.u64 + ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf6e8
	if (!ctx.cr6.gt) goto loc_832CF6E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,716
	ctx.r7.s64 = 716;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF6E8;
	sub_8320CF10(ctx, base);
loc_832CF6E8:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x832cf6f8
	if (!ctx.cr6.eq) goto loc_832CF6F8;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x832cf6fc
	goto loc_832CF6FC;
loc_832CF6F8:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_832CF6FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cf720
	if (!ctx.cr6.eq) goto loc_832CF720;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,728
	ctx.r7.s64 = 728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF720;
	sub_8320CF10(ctx, base);
loc_832CF720:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832cf778
	if (!ctx.cr6.lt) goto loc_832CF778;
loc_832CF72C:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x832cf760
	if (!ctx.cr6.eq) goto loc_832CF760;
	// li r7,0
	ctx.r7.s64 = 0;
loc_832CF760:
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832cf72c
	if (ctx.cr6.lt) goto loc_832CF72C;
loc_832CF778:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divwu r10,r29,r28
	ctx.r10.u32 = ctx.r29.u32 / ctx.r28.u32;
	// addi r9,r24,11
	ctx.r9.s64 = ctx.r24.s64 + 11;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// subf r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// twllei r28,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r28,0
	// divwu r5,r11,r28
	ctx.r5.u32 = ctx.r11.u32 / ctx.r28.u32;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832CF7BC;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF7C4"))) PPC_WEAK_FUNC(sub_832CF7C4);
PPC_FUNC_IMPL(__imp__sub_832CF7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF7C8"))) PPC_WEAK_FUNC(sub_832CF7C8);
PPC_FUNC_IMPL(__imp__sub_832CF7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CF7D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,3336
	ctx.r28.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf820
	if (!ctx.cr6.eq) goto loc_832CF820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF820;
	sub_8320CF10(ctx, base);
loc_832CF820:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x832cf84c
	if (ctx.cr6.eq) goto loc_832CF84C;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x832cf84c
	if (ctx.cr6.eq) goto loc_832CF84C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3480
	ctx.r5.s64 = ctx.r11.s64 + 3480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,787
	ctx.r7.s64 = 787;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF84C;
	sub_8320CF10(ctx, base);
loc_832CF84C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf874
	if (!ctx.cr6.eq) goto loc_832CF874;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3460
	ctx.r5.s64 = ctx.r11.s64 + 3460;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF874;
	sub_8320CF10(ctx, base);
loc_832CF874:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf89c
	if (!ctx.cr6.eq) goto loc_832CF89C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3440
	ctx.r5.s64 = ctx.r11.s64 + 3440;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,789
	ctx.r7.s64 = 789;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF89C;
	sub_8320CF10(ctx, base);
loc_832CF89C:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x832cf8ac
	if (!ctx.cr6.eq) goto loc_832CF8AC;
	// lwz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x832cf8b0
	goto loc_832CF8B0;
loc_832CF8AC:
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_832CF8B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832cf8d4
	if (!ctx.cr6.eq) goto loc_832CF8D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,801
	ctx.r7.s64 = 801;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF8D4;
	sub_8320CF10(ctx, base);
loc_832CF8D4:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf8f0
	if (!ctx.cr6.gt) goto loc_832CF8F0;
	// subf r26,r30,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_832CF8F0:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832cf938
	if (!ctx.cr6.lt) goto loc_832CF938;
loc_832CF900:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// blt cr6,0x832cf900
	if (ctx.cr6.lt) goto loc_832CF900;
loc_832CF938:
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF944"))) PPC_WEAK_FUNC(sub_832CF944);
PPC_FUNC_IMPL(__imp__sub_832CF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF948"))) PPC_WEAK_FUNC(sub_832CF948);
PPC_FUNC_IMPL(__imp__sub_832CF948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF94C"))) PPC_WEAK_FUNC(sub_832CF94C);
PPC_FUNC_IMPL(__imp__sub_832CF94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF950"))) PPC_WEAK_FUNC(sub_832CF950);
PPC_FUNC_IMPL(__imp__sub_832CF950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF954"))) PPC_WEAK_FUNC(sub_832CF954);
PPC_FUNC_IMPL(__imp__sub_832CF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF958"))) PPC_WEAK_FUNC(sub_832CF958);
PPC_FUNC_IMPL(__imp__sub_832CF958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832CF960;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF970;
	sub_83217580(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83216aa0
	ctx.lr = 0x832CF978;
	sub_83216AA0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217588
	ctx.lr = 0x832CF984;
	sub_83217588(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,3336
	ctx.r26.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf9bc
	if (!ctx.cr6.eq) goto loc_832CF9BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3580
	ctx.r5.s64 = ctx.r11.s64 + 3580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,84
	ctx.r7.s64 = 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF9BC;
	sub_8320CF10(ctx, base);
loc_832CF9BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832cf9e0
	if (!ctx.cr6.eq) goto loc_832CF9E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,85
	ctx.r7.s64 = 85;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF9E0;
	sub_8320CF10(ctx, base);
loc_832CF9E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF9E8;
	sub_83217580(ctx, base);
	// bl 0x83216a68
	ctx.lr = 0x832CF9EC;
	sub_83216A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF9F8;
	sub_83217580(ctx, base);
	// bl 0x83216a70
	ctx.lr = 0x832CF9FC;
	sub_83216A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CFA08;
	sub_83217580(ctx, base);
	// bl 0x83216a88
	ctx.lr = 0x832CFA0C;
	sub_83216A88(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832cfa34
	if (!ctx.cr6.eq) goto loc_832CFA34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3556
	ctx.r5.s64 = ctx.r11.s64 + 3556;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,90
	ctx.r7.s64 = 90;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA34;
	sub_8320CF10(ctx, base);
loc_832CFA34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cfa58
	if (!ctx.cr6.eq) goto loc_832CFA58;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3540
	ctx.r5.s64 = ctx.r11.s64 + 3540;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,91
	ctx.r7.s64 = 91;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA58;
	sub_8320CF10(ctx, base);
loc_832CFA58:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832cfa7c
	if (!ctx.cr6.eq) goto loc_832CFA7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,92
	ctx.r7.s64 = 92;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA7C;
	sub_8320CF10(ctx, base);
loc_832CFA7C:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r4,444
	ctx.r4.s64 = 444;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CFA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832cfe20
	if (ctx.cr0.eq) goto loc_832CFE20;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAB0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAC0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAD0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAE0;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFAF0;
	sub_832CEF78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB08;
	sub_832CEF78(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB1C;
	sub_832CEF78(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB30;
	sub_832CEF78(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB48;
	sub_832CEF78(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB60;
	sub_832CEF78(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB74;
	sub_832CEF78(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB88;
	sub_832CEF78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBA0;
	sub_832CEF78(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBB8;
	sub_832CEF78(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBD0;
	sub_832CEF78(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBE8;
	sub_832CEF78(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFC00;
	sub_832CEF78(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFC18;
	sub_832CEF78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x832CFCE4;
	sub_82CB16F0(ctx, base);
	// stw r22,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r22.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d2888
	ctx.lr = 0x832CFCF0;
	sub_832D2888(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832eaf80
	ctx.lr = 0x832CFCFC;
	sub_832EAF80(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83216ad0
	ctx.lr = 0x832CFD08;
	sub_83216AD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832cfd24
	if (ctx.cr0.eq) goto loc_832CFD24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cfd24
	if (ctx.cr0.eq) goto loc_832CFD24;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832CFD24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832cfdd8
	if (ctx.cr0.eq) goto loc_832CFDD8;
	// bl 0x83216ac8
	ctx.lr = 0x832CFD38;
	sub_83216AC8(ctx, base);
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// li r27,5
	ctx.r27.s64 = 5;
loc_832CFD44:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r28,-4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CFD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8330acd0
	ctx.lr = 0x832CFD7C;
	sub_8330ACD0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x832cfd44
	if (!ctx.cr0.eq) goto loc_832CFD44;
	// b 0x832cfe10
	goto loc_832CFE10;
loc_832CFDD8:
	// bl 0x83216ac8
	ctx.lr = 0x832CFDDC;
	sub_83216AC8(ctx, base);
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
loc_832CFDE8:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x832cfde8
	if (!ctx.cr0.eq) goto loc_832CFDE8;
loc_832CFE10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832cfe24
	goto loc_832CFE24;
loc_832CFE18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cf0c0
	ctx.lr = 0x832CFE20;
	sub_832CF0C0(ctx, base);
loc_832CFE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CFE24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CFE2C"))) PPC_WEAK_FUNC(sub_832CFE2C);
PPC_FUNC_IMPL(__imp__sub_832CFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CFE30"))) PPC_WEAK_FUNC(sub_832CFE30);
PPC_FUNC_IMPL(__imp__sub_832CFE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832CFE38;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,3336
	ctx.r23.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cfe78
	if (!ctx.cr6.eq) goto loc_832CFE78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,4016
	ctx.r5.s64 = ctx.r11.s64 + 4016;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,351
	ctx.r7.s64 = 351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFE78;
	sub_8320CF10(ctx, base);
loc_832CFE78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cfe9c
	if (!ctx.cr6.eq) goto loc_832CFE9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,4004
	ctx.r5.s64 = ctx.r11.s64 + 4004;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,352
	ctx.r7.s64 = 352;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFE9C;
	sub_8320CF10(ctx, base);
loc_832CFE9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cfec4
	if (!ctx.cr6.eq) goto loc_832CFEC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3976
	ctx.r5.s64 = ctx.r11.s64 + 3976;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,353
	ctx.r7.s64 = 353;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFEC4;
	sub_8320CF10(ctx, base);
loc_832CFEC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cfeec
	if (!ctx.cr0.eq) goto loc_832CFEEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3928
	ctx.r5.s64 = ctx.r11.s64 + 3928;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,354
	ctx.r7.s64 = 354;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFEEC;
	sub_8320CF10(ctx, base);
loc_832CFEEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cff14
	if (!ctx.cr0.eq) goto loc_832CFF14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3884
	ctx.r5.s64 = ctx.r11.s64 + 3884;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,355
	ctx.r7.s64 = 355;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF14;
	sub_8320CF10(ctx, base);
loc_832CFF14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d00b4
	if (ctx.cr0.eq) goto loc_832D00B4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832cff4c
	if (ctx.cr6.eq) goto loc_832CFF4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3816
	ctx.r5.s64 = ctx.r11.s64 + 3816;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,362
	ctx.r7.s64 = 362;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF4C;
	sub_8320CF10(ctx, base);
loc_832CFF4C:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832cff78
	if (ctx.cr6.eq) goto loc_832CFF78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3744
	ctx.r5.s64 = ctx.r11.s64 + 3744;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,364
	ctx.r7.s64 = 364;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF78;
	sub_8320CF10(ctx, base);
loc_832CFF78:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x832CFF8C;
	sub_82CB1160(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832CFFA4;
	sub_82CB1160(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r28,r31,140
	ctx.r28.s64 = ctx.r31.s64 + 140;
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
	// subf r22,r30,r31
	ctx.r22.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r27,6
	ctx.r27.s64 = 6;
	// addi r26,r11,3664
	ctx.r26.s64 = ctx.r11.s64 + 3664;
	// addi r25,r10,3592
	ctx.r25.s64 = ctx.r10.s64 + 3592;
loc_832CFFC4:
	// lwzx r11,r22,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832cffec
	if (ctx.cr6.eq) goto loc_832CFFEC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFFEC;
	sub_8320CF10(ctx, base);
loc_832CFFEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832d0014
	if (ctx.cr6.eq) goto loc_832D0014;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,378
	ctx.r7.s64 = 378;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0014;
	sub_8320CF10(ctx, base);
loc_832D0014:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,-96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -96);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,-48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -48);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D002C;
	sub_82CB1160(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832cffc4
	if (!ctx.cr0.eq) goto loc_832CFFC4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82cb1160
	ctx.lr = 0x832D0050;
	sub_82CB1160(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82cb1160
	ctx.lr = 0x832D0064;
	sub_82CB1160(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82cb1160
	ctx.lr = 0x832D0078;
	sub_82CB1160(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82cb1160
	ctx.lr = 0x832D008C;
	sub_82CB1160(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82cb1160
	ctx.lr = 0x832D00A0;
	sub_82CB1160(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82cb1160
	ctx.lr = 0x832D00B4;
	sub_82CB1160(ctx, base);
loc_832D00B4:
	// addic. r29,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r29.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d00d8
	if (!ctx.cr0.eq) goto loc_832D00D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,403
	ctx.r7.s64 = 403;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D00D8;
	sub_8320CF10(ctx, base);
loc_832D00D8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D00F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D00FC"))) PPC_WEAK_FUNC(sub_832D00FC);
PPC_FUNC_IMPL(__imp__sub_832D00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0100"))) PPC_WEAK_FUNC(sub_832D0100);
PPC_FUNC_IMPL(__imp__sub_832D0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D0108;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r27,29
	ctx.r11.s64 = ctx.r27.s64 + 29;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r29,r9,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,3336
	ctx.r24.s64 = ctx.r10.s64 + 3336;
	// divwu r22,r30,r29
	ctx.r22.u32 = ctx.r30.u32 / ctx.r29.u32;
	// twllei r29,0
	// bne cr6,0x832d0168
	if (!ctx.cr6.eq) goto loc_832D0168;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,442
	ctx.r7.s64 = 442;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0168;
	sub_8320CF10(ctx, base);
loc_832D0168:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x832d0194
	if (ctx.cr6.eq) goto loc_832D0194;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x832d0194
	if (ctx.cr6.eq) goto loc_832D0194;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4152
	ctx.r5.s64 = ctx.r11.s64 + 4152;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0194;
	sub_8320CF10(ctx, base);
loc_832D0194:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d01bc
	if (!ctx.cr6.eq) goto loc_832D01BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,444
	ctx.r7.s64 = 444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D01BC;
	sub_8320CF10(ctx, base);
loc_832D01BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d01e4
	if (!ctx.cr6.eq) goto loc_832D01E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4104
	ctx.r5.s64 = ctx.r11.s64 + 4104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,445
	ctx.r7.s64 = 445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D01E4;
	sub_8320CF10(ctx, base);
loc_832D01E4:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d0218
	if (!ctx.cr6.gt) goto loc_832D0218;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4032
	ctx.r5.s64 = ctx.r11.s64 + 4032;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0218;
	sub_8320CF10(ctx, base);
loc_832D0218:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x832d022c
	if (!ctx.cr6.eq) goto loc_832D022C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x832d0230
	goto loc_832D0230;
loc_832D022C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_832D0230:
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d0258
	if (!ctx.cr6.eq) goto loc_832D0258;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,458
	ctx.r7.s64 = 458;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0258;
	sub_8320CF10(ctx, base);
loc_832D0258:
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0268;
	sub_82CB1160(ctx, base);
	// divwu r11,r30,r29
	ctx.r11.u32 = ctx.r30.u32 / ctx.r29.u32;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,11
	ctx.r10.s64 = ctx.r27.s64 + 11;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// twllei r29,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r29,0
	// divwu r5,r11,r29
	ctx.r5.u32 = ctx.r11.u32 / ctx.r29.u32;
	// ori r11,r9,2
	ctx.r11.u64 = ctx.r9.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832D02AC;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D02B4"))) PPC_WEAK_FUNC(sub_832D02B4);
PPC_FUNC_IMPL(__imp__sub_832D02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D02B8"))) PPC_WEAK_FUNC(sub_832D02B8);
PPC_FUNC_IMPL(__imp__sub_832D02B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D02C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,3336
	ctx.r27.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832d0310
	if (!ctx.cr6.eq) goto loc_832D0310;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0310;
	sub_8320CF10(ctx, base);
loc_832D0310:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x832d033c
	if (ctx.cr6.eq) goto loc_832D033C;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x832d033c
	if (ctx.cr6.eq) goto loc_832D033C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4152
	ctx.r5.s64 = ctx.r11.s64 + 4152;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D033C;
	sub_8320CF10(ctx, base);
loc_832D033C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d0364
	if (!ctx.cr6.eq) goto loc_832D0364;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,507
	ctx.r7.s64 = 507;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0364;
	sub_8320CF10(ctx, base);
loc_832D0364:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d038c
	if (!ctx.cr6.eq) goto loc_832D038C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4104
	ctx.r5.s64 = ctx.r11.s64 + 4104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,508
	ctx.r7.s64 = 508;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D038C;
	sub_8320CF10(ctx, base);
loc_832D038C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x832d03a4
	if (!ctx.cr6.eq) goto loc_832D03A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832d03b0
	goto loc_832D03B0;
loc_832D03A4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832D03B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d03d4
	if (!ctx.cr6.eq) goto loc_832D03D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,519
	ctx.r7.s64 = 519;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D03D4;
	sub_8320CF10(ctx, base);
loc_832D03D4:
	// addi r11,r25,23
	ctx.r11.s64 = ctx.r25.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d03f0
	if (!ctx.cr6.gt) goto loc_832D03F0;
	// subf r26,r30,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_832D03F0:
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0400;
	sub_82CB1160(ctx, base);
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D040C"))) PPC_WEAK_FUNC(sub_832D040C);
PPC_FUNC_IMPL(__imp__sub_832D040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0410"))) PPC_WEAK_FUNC(sub_832D0410);
PPC_FUNC_IMPL(__imp__sub_832D0410) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0418"))) PPC_WEAK_FUNC(sub_832D0418);
PPC_FUNC_IMPL(__imp__sub_832D0418) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0420"))) PPC_WEAK_FUNC(sub_832D0420);
PPC_FUNC_IMPL(__imp__sub_832D0420) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,6
	ctx.r10.s64 = 6;
loc_832D042C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x832d042c
	if (!ctx.cr0.eq) goto loc_832D042C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0478"))) PPC_WEAK_FUNC(sub_832D0478);
PPC_FUNC_IMPL(__imp__sub_832D0478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r8,420(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r9,356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mulli r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 * 6;
	// lwz r6,324(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// divwu r8,r6,r7
	ctx.r8.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D04B8"))) PPC_WEAK_FUNC(sub_832D04B8);
PPC_FUNC_IMPL(__imp__sub_832D04B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r7,420(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r5,324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// lwz r9,356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// divwu r8,r5,r6
	ctx.r8.u32 = ctx.r5.u32 / ctx.r6.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0510"))) PPC_WEAK_FUNC(sub_832D0510);
PPC_FUNC_IMPL(__imp__sub_832D0510) {
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
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D0568;
	sub_82CB1160(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_832D0588"))) PPC_WEAK_FUNC(sub_832D0588);
PPC_FUNC_IMPL(__imp__sub_832D0588) {
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
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r11,11520
	ctx.r8.u64 = ctx.r11.u64 | 11520;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D05C8;
	sub_82CB1160(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
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

__attribute__((alias("__imp__sub_832D05E0"))) PPC_WEAK_FUNC(sub_832D05E0);
PPC_FUNC_IMPL(__imp__sub_832D05E0) {
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
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r4,3
	ctx.r10.u64 = ctx.r4.u64 | 196608;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwimi r9,r5,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0628;
	sub_82CB1160(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_832D0644"))) PPC_WEAK_FUNC(sub_832D0644);
PPC_FUNC_IMPL(__imp__sub_832D0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0648"))) PPC_WEAK_FUNC(sub_832D0648);
PPC_FUNC_IMPL(__imp__sub_832D0648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D0650;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r24,r31,27,5,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r25,r26,27,5,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d06a0
	if (!ctx.cr6.eq) goto loc_832D06A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5180
	ctx.r5.s64 = ctx.r11.s64 + 5180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,665
	ctx.r7.s64 = 665;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06A0;
	sub_8320CF10(ctx, base);
loc_832D06A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d06c4
	if (!ctx.cr6.eq) goto loc_832D06C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5172
	ctx.r5.s64 = ctx.r11.s64 + 5172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06C4;
	sub_8320CF10(ctx, base);
loc_832D06C4:
	// clrlwi. r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d06e8
	if (ctx.cr0.eq) goto loc_832D06E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5148
	ctx.r5.s64 = ctx.r11.s64 + 5148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,667
	ctx.r7.s64 = 667;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06E8;
	sub_8320CF10(ctx, base);
loc_832D06E8:
	// clrlwi. r11,r26,27
	ctx.r11.u64 = ctx.r26.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d070c
	if (ctx.cr0.eq) goto loc_832D070C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5128
	ctx.r5.s64 = ctx.r11.s64 + 5128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,668
	ctx.r7.s64 = 668;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D070C;
	sub_8320CF10(ctx, base);
loc_832D070C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r24,2
	ctx.r10.u64 = ctx.r24.u64 | 131072;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwimi r9,r25,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0740;
	sub_82CB1160(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D074C"))) PPC_WEAK_FUNC(sub_832D074C);
PPC_FUNC_IMPL(__imp__sub_832D074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0750"))) PPC_WEAK_FUNC(sub_832D0750);
PPC_FUNC_IMPL(__imp__sub_832D0750) {
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
	// lis r9,-16378
	ctx.r9.s64 = -1073348608;
	// mulli r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 * 6;
	// ori r9,r9,11520
	ctx.r9.u64 = ctx.r9.u64 | 11520;
	// oris r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 65536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0794;
	sub_82CB1160(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
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

__attribute__((alias("__imp__sub_832D07AC"))) PPC_WEAK_FUNC(sub_832D07AC);
PPC_FUNC_IMPL(__imp__sub_832D07AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D07B0"))) PPC_WEAK_FUNC(sub_832D07B0);
PPC_FUNC_IMPL(__imp__sub_832D07B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D07C4"))) PPC_WEAK_FUNC(sub_832D07C4);
PPC_FUNC_IMPL(__imp__sub_832D07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D07C8"))) PPC_WEAK_FUNC(sub_832D07C8);
PPC_FUNC_IMPL(__imp__sub_832D07C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D07D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8330b6f0
	ctx.lr = 0x832D07E8;
	sub_8330B6F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d0814
	if (!ctx.cr0.eq) goto loc_832D0814;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5288
	ctx.r5.s64 = ctx.r10.s64 + 5288;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,761
	ctx.r7.s64 = 761;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0814;
	sub_8320CF10(ctx, base);
loc_832D0814:
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
loc_832D081C:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d087c
	if (ctx.cr6.eq) goto loc_832D087C;
loc_832D084C:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r10,r27,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0878;
	sub_82CB1160(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
loc_832D087C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x832d081c
	if (!ctx.cr0.eq) goto loc_832D081C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D08A4"))) PPC_WEAK_FUNC(sub_832D08A4);
PPC_FUNC_IMPL(__imp__sub_832D08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D08A8"))) PPC_WEAK_FUNC(sub_832D08A8);
PPC_FUNC_IMPL(__imp__sub_832D08A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D08B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330b7e0
	ctx.lr = 0x832D08C4;
	sub_8330B7E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d08f0
	if (!ctx.cr0.eq) goto loc_832D08F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5288
	ctx.r5.s64 = ctx.r10.s64 + 5288;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,798
	ctx.r7.s64 = 798;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D08F0;
	sub_8320CF10(ctx, base);
loc_832D08F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
loc_832D08F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d091c
	if (ctx.cr6.eq) goto loc_832D091C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D0918;
	sub_832D0648(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832D091C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832d08f8
	if (!ctx.cr0.eq) goto loc_832D08F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0938"))) PPC_WEAK_FUNC(sub_832D0938);
PPC_FUNC_IMPL(__imp__sub_832D0938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D0940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330cd48
	ctx.lr = 0x832D0954;
	sub_8330CD48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0980
	if (!ctx.cr0.eq) goto loc_832D0980;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5304
	ctx.r5.s64 = ctx.r10.s64 + 5304;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1047
	ctx.r7.s64 = 1047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0980;
	sub_8320CF10(ctx, base);
loc_832D0980:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,32
	ctx.r28.s64 = 32;
loc_832D0988:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d09c4
	if (ctx.cr6.eq) goto loc_832D09C4;
	// lis r11,-16378
	ctx.r11.s64 = -1073348608;
	// oris r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 65536;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D09C0;
	sub_82CB1160(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_832D09C4:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x832d0988
	if (!ctx.cr0.eq) goto loc_832D0988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D09E0"))) PPC_WEAK_FUNC(sub_832D09E0);
PPC_FUNC_IMPL(__imp__sub_832D09E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D09E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,416(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 416);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330cf58
	ctx.lr = 0x832D0A00;
	sub_8330CF58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d0a2c
	if (!ctx.cr0.eq) goto loc_832D0A2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5316
	ctx.r5.s64 = ctx.r10.s64 + 5316;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1084
	ctx.r7.s64 = 1084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0A2C;
	sub_8320CF10(ctx, base);
loc_832D0A2C:
	// lis r11,-16363
	ctx.r11.s64 = -1072365568;
	// oris r10,r29,4
	ctx.r10.u64 = ctx.r29.u64 | 262144;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0A58;
	sub_82CB1160(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0A64"))) PPC_WEAK_FUNC(sub_832D0A64);
PPC_FUNC_IMPL(__imp__sub_832D0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0A68"))) PPC_WEAK_FUNC(sub_832D0A68);
PPC_FUNC_IMPL(__imp__sub_832D0A68) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0A8C;
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

__attribute__((alias("__imp__sub_832D0AA0"))) PPC_WEAK_FUNC(sub_832D0AA0);
PPC_FUNC_IMPL(__imp__sub_832D0AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,5192
	ctx.r29.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0aec
	if (!ctx.cr6.eq) goto loc_832D0AEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1263
	ctx.r7.s64 = 1263;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0AEC;
	sub_8320CF10(ctx, base);
loc_832D0AEC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d0b10
	if (!ctx.cr6.eq) goto loc_832D0B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1264
	ctx.r7.s64 = 1264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B10;
	sub_8320CF10(ctx, base);
loc_832D0B10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0b34
	if (!ctx.cr6.eq) goto loc_832D0B34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1265
	ctx.r7.s64 = 1265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B34;
	sub_8320CF10(ctx, base);
loc_832D0B34:
	// addic. r31,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r31.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d0b58
	if (!ctx.cr0.eq) goto loc_832D0B58;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1268
	ctx.r7.s64 = 1268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B58;
	sub_8320CF10(ctx, base);
loc_832D0B58:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832d6480
	ctx.lr = 0x832D0B68;
	sub_832D6480(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d0bac
	if (ctx.cr0.eq) goto loc_832D0BAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,15104
	ctx.r11.u64 = ctx.r11.u64 | 15104;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832D0BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0BB8"))) PPC_WEAK_FUNC(sub_832D0BB8);
PPC_FUNC_IMPL(__imp__sub_832D0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0BC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0c00
	if (!ctx.cr6.eq) goto loc_832D0C00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1337
	ctx.r7.s64 = 1337;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C00;
	sub_8320CF10(ctx, base);
loc_832D0C00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0c24
	if (!ctx.cr6.eq) goto loc_832D0C24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C24;
	sub_8320CF10(ctx, base);
loc_832D0C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d0c48
	if (!ctx.cr6.eq) goto loc_832D0C48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1339
	ctx.r7.s64 = 1339;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C48;
	sub_8320CF10(ctx, base);
loc_832D0C48:
	// addic. r29,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r29.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0c6c
	if (!ctx.cr0.eq) goto loc_832D0C6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1342
	ctx.r7.s64 = 1342;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C6C;
	sub_8320CF10(ctx, base);
loc_832D0C6C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-16373
	ctx.r10.s64 = -1073020928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,9472
	ctx.r10.u64 = ctx.r10.u64 | 9472;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832D0CCC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832d0ccc
	if (!ctx.cr0.eq) goto loc_832D0CCC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// ble cr6,0x832d0d60
	if (!ctx.cr6.gt) goto loc_832D0D60;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5372
	ctx.r5.s64 = ctx.r11.s64 + 5372;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0D60;
	sub_8320CF10(ctx, base);
loc_832D0D60:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D0D84;
	sub_832D6660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0D90"))) PPC_WEAK_FUNC(sub_832D0D90);
PPC_FUNC_IMPL(__imp__sub_832D0D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D0D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,29
	ctx.r11.s64 = ctx.r31.s64 + 29;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,2584
	ctx.r27.s64 = ctx.r10.s64 + 2584;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// divwu r29,r5,r11
	ctx.r29.u32 = ctx.r5.u32 / ctx.r11.u32;
	// twllei r11,0
	// blt cr6,0x832d0dec
	if (ctx.cr6.lt) goto loc_832D0DEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5504
	ctx.r5.s64 = ctx.r11.s64 + 5504;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0DEC;
	sub_8320CF10(ctx, base);
loc_832D0DEC:
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d0e1c
	if (!ctx.cr6.eq) goto loc_832D0E1C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5468
	ctx.r5.s64 = ctx.r11.s64 + 5468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0E1C;
	sub_8320CF10(ctx, base);
loc_832D0E1C:
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d0e4c
	if (ctx.cr6.lt) goto loc_832D0E4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5408
	ctx.r5.s64 = ctx.r11.s64 + 5408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0E4C;
	sub_8320CF10(ctx, base);
loc_832D0E4C:
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0E6C"))) PPC_WEAK_FUNC(sub_832D0E6C);
PPC_FUNC_IMPL(__imp__sub_832D0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0E70"))) PPC_WEAK_FUNC(sub_832D0E70);
PPC_FUNC_IMPL(__imp__sub_832D0E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0eb8
	if (!ctx.cr6.eq) goto loc_832D0EB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1450
	ctx.r7.s64 = 1450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0EB8;
	sub_8320CF10(ctx, base);
loc_832D0EB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0edc
	if (!ctx.cr6.eq) goto loc_832D0EDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1451
	ctx.r7.s64 = 1451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0EDC;
	sub_8320CF10(ctx, base);
loc_832D0EDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d0f00
	if (!ctx.cr6.eq) goto loc_832D0F00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1452
	ctx.r7.s64 = 1452;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0F00;
	sub_8320CF10(ctx, base);
loc_832D0F00:
	// addic. r29,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r29.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0f24
	if (!ctx.cr0.eq) goto loc_832D0F24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1455
	ctx.r7.s64 = 1455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0F24;
	sub_8320CF10(ctx, base);
loc_832D0F24:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-16373
	ctx.r10.s64 = -1073020928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,9472
	ctx.r10.u64 = ctx.r10.u64 | 9472;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832D0F84:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832d0f84
	if (!ctx.cr0.eq) goto loc_832D0F84;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// ori r9,r9,9984
	ctx.r9.u64 = ctx.r9.u64 | 9984;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x832d101c
	if (!ctx.cr6.gt) goto loc_832D101C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5372
	ctx.r5.s64 = ctx.r11.s64 + 5372;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D101C;
	sub_8320CF10(ctx, base);
loc_832D101C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D1040;
	sub_832D6660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D104C"))) PPC_WEAK_FUNC(sub_832D104C);
PPC_FUNC_IMPL(__imp__sub_832D104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1050"))) PPC_WEAK_FUNC(sub_832D1050);
PPC_FUNC_IMPL(__imp__sub_832D1050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D1058;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,29
	ctx.r11.s64 = ctx.r31.s64 + 29;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,2584
	ctx.r27.s64 = ctx.r10.s64 + 2584;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// divwu r29,r5,r11
	ctx.r29.u32 = ctx.r5.u32 / ctx.r11.u32;
	// twllei r11,0
	// blt cr6,0x832d10ac
	if (ctx.cr6.lt) goto loc_832D10AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5504
	ctx.r5.s64 = ctx.r11.s64 + 5504;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,347
	ctx.r7.s64 = 347;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D10AC;
	sub_8320CF10(ctx, base);
loc_832D10AC:
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d10dc
	if (!ctx.cr6.eq) goto loc_832D10DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5468
	ctx.r5.s64 = ctx.r11.s64 + 5468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,348
	ctx.r7.s64 = 348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D10DC;
	sub_8320CF10(ctx, base);
loc_832D10DC:
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d110c
	if (ctx.cr6.lt) goto loc_832D110C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5408
	ctx.r5.s64 = ctx.r11.s64 + 5408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D110C;
	sub_8320CF10(ctx, base);
loc_832D110C:
	// lwzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// rlwinm r11,r29,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1134"))) PPC_WEAK_FUNC(sub_832D1134);
PPC_FUNC_IMPL(__imp__sub_832D1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1138"))) PPC_WEAK_FUNC(sub_832D1138);
PPC_FUNC_IMPL(__imp__sub_832D1138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1140"))) PPC_WEAK_FUNC(sub_832D1140);
PPC_FUNC_IMPL(__imp__sub_832D1140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1148"))) PPC_WEAK_FUNC(sub_832D1148);
PPC_FUNC_IMPL(__imp__sub_832D1148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1150"))) PPC_WEAK_FUNC(sub_832D1150);
PPC_FUNC_IMPL(__imp__sub_832D1150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1158"))) PPC_WEAK_FUNC(sub_832D1158);
PPC_FUNC_IMPL(__imp__sub_832D1158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832D1160;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// addi r15,r11,-21168
	ctx.r15.s64 = ctx.r11.s64 + -21168;
	// addi r14,r10,5192
	ctx.r14.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d11a8
	if (!ctx.cr6.eq) goto loc_832D11A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1562
	ctx.r7.s64 = 1562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11A8;
	sub_8320CF10(ctx, base);
loc_832D11A8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x832d11cc
	if (!ctx.cr6.eq) goto loc_832D11CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1563
	ctx.r7.s64 = 1563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11CC;
	sub_8320CF10(ctx, base);
loc_832D11CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d11f0
	if (!ctx.cr6.eq) goto loc_832D11F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1564
	ctx.r7.s64 = 1564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11F0;
	sub_8320CF10(ctx, base);
loc_832D11F0:
	// addic. r17,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r17.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne 0x832d1214
	if (!ctx.cr0.eq) goto loc_832D1214;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1567
	ctx.r7.s64 = 1567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1214;
	sub_8320CF10(ctx, base);
loc_832D1214:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// bl 0x832ceb20
	ctx.lr = 0x832D1220;
	sub_832CEB20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d1230
	if (ctx.cr6.eq) goto loc_832D1230;
	// li r22,4092
	ctx.r22.s64 = 4092;
loc_832D1230:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83217580
	ctx.lr = 0x832D1238;
	sub_83217580(ctx, base);
	// bl 0x83216ad0
	ctx.lr = 0x832D123C;
	sub_83216AD0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832d0420
	ctx.lr = 0x832D1248;
	sub_832D0420(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D127C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16373
	ctx.r11.s64 = -1073020928;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r11,r11,9472
	ctx.r11.u64 = ctx.r11.u64 | 9472;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r26,16
	ctx.r26.s64 = 16;
	// addi r25,r11,4216
	ctx.r25.s64 = ctx.r11.s64 + 4216;
loc_832D12A4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x832ceba0
	ctx.lr = 0x832D12BC;
	sub_832CEBA0(ctx, base);
	// and. r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 & ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d1314
	if (ctx.cr0.eq) goto loc_832D1314;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832d130c
	if (ctx.cr6.eq) goto loc_832D130C;
	// mulli r10,r27,152
	ctx.r10.s64 = ctx.r27.s64 * 152;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_832D12DC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832d12fc
	if (ctx.cr6.eq) goto loc_832D12FC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
loc_832D12FC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x832d12dc
	if (!ctx.cr0.eq) goto loc_832D12DC;
loc_832D130C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x832d1328
	goto loc_832D1328;
loc_832D1314:
	// lwzx r11,r28,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832D1328:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d1344
	if (!ctx.cr6.eq) goto loc_832D1344;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_832D1344:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x832d12a4
	if (ctx.cr6.lt) goto loc_832D12A4;
	// lwz r10,32(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// beq 0x832d13bc
	if (ctx.cr0.eq) goto loc_832D13BC;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D13A0;
	sub_82CB1160(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x832d13e8
	goto loc_832D13E8;
loc_832D13BC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x832d13d0
	if (ctx.cr6.eq) goto loc_832D13D0;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// b 0x832d13e8
	goto loc_832D13E8;
loc_832D13D0:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_832D13E8:
	// lwz r9,28(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// beq 0x832d1458
	if (ctx.cr0.eq) goto loc_832D1458;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D143C;
	sub_82CB1160(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x832d14a8
	goto loc_832D14A8;
loc_832D1458:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x832d1494
	if (ctx.cr6.eq) goto loc_832D1494;
	// lis r8,-16383
	ctx.r8.s64 = -1073676288;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,9984
	ctx.r8.u64 = ctx.r8.u64 | 9984;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832d14a4
	goto loc_832D14A4;
loc_832D1494:
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832D14A4:
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
loc_832D14A8:
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D14C0;
	sub_82CB1160(ctx, base);
	// subf r11,r16,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r16.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x832d14f0
	if (!ctx.cr6.lt) goto loc_832D14F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5540
	ctx.r5.s64 = ctx.r11.s64 + 5540;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1702
	ctx.r7.s64 = 1702;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D14F0;
	sub_8320CF10(ctx, base);
loc_832D14F0:
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D1514;
	sub_832D6660(ctx, base);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1534"))) PPC_WEAK_FUNC(sub_832D1534);
PPC_FUNC_IMPL(__imp__sub_832D1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1538"))) PPC_WEAK_FUNC(sub_832D1538);
PPC_FUNC_IMPL(__imp__sub_832D1538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1540"))) PPC_WEAK_FUNC(sub_832D1540);
PPC_FUNC_IMPL(__imp__sub_832D1540) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1548"))) PPC_WEAK_FUNC(sub_832D1548);
PPC_FUNC_IMPL(__imp__sub_832D1548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832D1550;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,-21168
	ctx.r20.s64 = ctx.r11.s64 + -21168;
	// addi r19,r10,5192
	ctx.r19.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d1590
	if (!ctx.cr6.eq) goto loc_832D1590;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1751
	ctx.r7.s64 = 1751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1590;
	sub_8320CF10(ctx, base);
loc_832D1590:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d15b4
	if (!ctx.cr6.eq) goto loc_832D15B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1752
	ctx.r7.s64 = 1752;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15B4;
	sub_8320CF10(ctx, base);
loc_832D15B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d15d8
	if (!ctx.cr6.eq) goto loc_832D15D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1753
	ctx.r7.s64 = 1753;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15D8;
	sub_8320CF10(ctx, base);
loc_832D15D8:
	// addic. r21,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r21.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x832d15fc
	if (!ctx.cr0.eq) goto loc_832D15FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15FC;
	sub_8320CF10(ctx, base);
loc_832D15FC:
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D164C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8330b6f0
	ctx.lr = 0x832D1668;
	sub_8330B6F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r11,5288
	ctx.r25.s64 = ctx.r11.s64 + 5288;
	// bne 0x832d1690
	if (!ctx.cr0.eq) goto loc_832D1690;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,761
	ctx.r7.s64 = 761;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1690;
	sub_8320CF10(ctx, base);
loc_832D1690:
	// li r26,8
	ctx.r26.s64 = 8;
	// addi r27,r30,516
	ctx.r27.s64 = ctx.r30.s64 + 516;
loc_832D1698:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d16f8
	if (ctx.cr6.eq) goto loc_832D16F8;
loc_832D16C8:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r10,r28,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D16F4;
	sub_82CB1160(ctx, base);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
loc_832D16F8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x832d1698
	if (!ctx.cr0.eq) goto loc_832D1698;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8330b7e0
	ctx.lr = 0x832D1724;
	sub_8330B7E0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d1744
	if (!ctx.cr0.eq) goto loc_832D1744;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,798
	ctx.r7.s64 = 798;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1744;
	sub_8320CF10(ctx, base);
loc_832D1744:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
loc_832D174C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d1770
	if (ctx.cr6.eq) goto loc_832D1770;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D176C;
	sub_832D0648(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832D1770:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832d174c
	if (!ctx.cr0.eq) goto loc_832D174C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x8330cd48
	ctx.lr = 0x832D178C;
	sub_8330CD48(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d17b0
	if (!ctx.cr0.eq) goto loc_832D17B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5304
	ctx.r5.s64 = ctx.r11.s64 + 5304;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1047
	ctx.r7.s64 = 1047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D17B0;
	sub_8320CF10(ctx, base);
loc_832D17B0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,32
	ctx.r27.s64 = 32;
loc_832D17B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d17f4
	if (ctx.cr6.eq) goto loc_832D17F4;
	// lis r11,-16378
	ctx.r11.s64 = -1073348608;
	// oris r10,r29,1
	ctx.r10.u64 = ctx.r29.u64 | 65536;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D17F0;
	sub_82CB1160(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_832D17F4:
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x832d17b8
	if (!ctx.cr0.eq) goto loc_832D17B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,416(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x8330cf58
	ctx.lr = 0x832D1814;
	sub_8330CF58(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d1838
	if (!ctx.cr0.eq) goto loc_832D1838;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5316
	ctx.r5.s64 = ctx.r11.s64 + 5316;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1084
	ctx.r7.s64 = 1084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1838;
	sub_8320CF10(ctx, base);
loc_832D1838:
	// lis r11,-16363
	ctx.r11.s64 = -1072365568;
	// oris r10,r28,4
	ctx.r10.u64 = ctx.r28.u64 | 262144;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1864;
	sub_82CB1160(ctx, base);
	// subf r11,r23,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r23.s64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x832d1894
	if (!ctx.cr6.lt) goto loc_832D1894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1770
	ctx.r7.s64 = 1770;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1894;
	sub_8320CF10(ctx, base);
loc_832D1894:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D18AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330b1d0
	ctx.lr = 0x832D18B4;
	sub_8330B1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D18C0"))) PPC_WEAK_FUNC(sub_832D18C0);
PPC_FUNC_IMPL(__imp__sub_832D18C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D18C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,5192
	ctx.r25.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d1918
	if (!ctx.cr6.eq) goto loc_832D1918;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1837
	ctx.r7.s64 = 1837;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1918;
	sub_8320CF10(ctx, base);
loc_832D1918:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d193c
	if (!ctx.cr6.eq) goto loc_832D193C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1838
	ctx.r7.s64 = 1838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D193C;
	sub_8320CF10(ctx, base);
loc_832D193C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d1960
	if (!ctx.cr6.eq) goto loc_832D1960;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1839
	ctx.r7.s64 = 1839;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1960;
	sub_8320CF10(ctx, base);
loc_832D1960:
	// addic. r27,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r27.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d1984
	if (!ctx.cr0.eq) goto loc_832D1984;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1842
	ctx.r7.s64 = 1842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1984;
	sub_8320CF10(ctx, base);
loc_832D1984:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832d19ac
	if (ctx.cr6.eq) goto loc_832D19AC;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r24,24(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r23,20(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r10,r10,4440
	ctx.r10.s64 = ctx.r10.s64 + 4440;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
loc_832D19AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d0aa0
	ctx.lr = 0x832D19BC;
	sub_832D0AA0(ctx, base);
	// lwz r7,292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,6
	ctx.r10.s64 = 6;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// divwu r6,r6,r10
	ctx.r6.u32 = ctx.r6.u32 / ctx.r10.u32;
	// lwz r8,388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mulli r10,r7,6
	ctx.r10.s64 = ctx.r7.s64 * 6;
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D1A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d1548
	ctx.lr = 0x832D1A48;
	sub_832D1548(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832d1a58
	if (ctx.cr6.eq) goto loc_832D1A58;
	// stw r24,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r24.u32);
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
loc_832D1A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1A64"))) PPC_WEAK_FUNC(sub_832D1A64);
PPC_FUNC_IMPL(__imp__sub_832D1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1A68"))) PPC_WEAK_FUNC(sub_832D1A68);
PPC_FUNC_IMPL(__imp__sub_832D1A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D1A70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r26,r30,2
	ctx.r26.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d1ab4
	if (!ctx.cr6.eq) goto loc_832D1AB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5600
	ctx.r5.s64 = ctx.r10.s64 + 5600;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1990
	ctx.r7.s64 = 1990;
	// bl 0x8320cf10
	ctx.lr = 0x832D1AB4;
	sub_8320CF10(ctx, base);
loc_832D1AB4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// or r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwimi r9,r10,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1AE8;
	sub_82CB1160(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1AF8"))) PPC_WEAK_FUNC(sub_832D1AF8);
PPC_FUNC_IMPL(__imp__sub_832D1AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832D1B00;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r30,284
	ctx.r31.s64 = ctx.r30.s64 + 284;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r21,r11,-21168
	ctx.r21.s64 = ctx.r11.s64 + -21168;
	// addi r20,r10,5192
	ctx.r20.s64 = ctx.r10.s64 + 5192;
	// rlwinm r27,r9,28,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// bne cr6,0x832d1b48
	if (!ctx.cr6.eq) goto loc_832D1B48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2039
	ctx.r7.s64 = 2039;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1B48;
	sub_8320CF10(ctx, base);
loc_832D1B48:
	// addic. r22,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r22.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x832d1b6c
	if (!ctx.cr0.eq) goto loc_832D1B6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2043
	ctx.r7.s64 = 2043;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1B6C;
	sub_8320CF10(ctx, base);
loc_832D1B6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r24,20
	ctx.r24.s64 = 20;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d1bbc
	if (!ctx.cr0.eq) goto loc_832D1BBC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r24,r11,20
	ctx.r24.s64 = ctx.r11.s64 + 20;
loc_832D1BBC:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// rlwinm r8,r27,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
loc_832D1BE8:
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// ori r7,r7,11776
	ctx.r7.u64 = ctx.r7.u64 | 11776;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x832d1c30
	if (ctx.cr6.eq) goto loc_832D1C30;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832d1c34
	goto loc_832D1C34;
loc_832D1C30:
	// li r7,0
	ctx.r7.s64 = 0;
loc_832D1C34:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x832d1be8
	if (!ctx.cr0.eq) goto loc_832D1BE8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d1da0
	if (!ctx.cr6.eq) goto loc_832D1DA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b230
	ctx.lr = 0x832D1C58;
	sub_8330B230(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b280
	ctx.lr = 0x832D1C64;
	sub_8330B280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b258
	ctx.lr = 0x832D1C70;
	sub_8330B258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b2a8
	ctx.lr = 0x832D1C7C;
	sub_8330B2A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1a68
	ctx.lr = 0x832D1C98;
	sub_832D1A68(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1a68
	ctx.lr = 0x832D1CB0;
	sub_832D1A68(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x832d1a68
	ctx.lr = 0x832D1CC4;
	sub_832D1A68(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwimi r9,r10,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// oris r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 65536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_832D1CF4:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1D04;
	sub_82CB1160(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// bne 0x832d1cf4
	if (!ctx.cr0.eq) goto loc_832D1CF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,21
	ctx.r6.s64 = 21;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D2C;
	sub_832D1A68(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x832d1a68
	ctx.lr = 0x832D1D40;
	sub_832D1A68(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D58;
	sub_832D1A68(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D6C;
	sub_832D1A68(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D84;
	sub_832D1A68(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D9C;
	sub_832D1A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_832D1DA0:
	// subf r11,r23,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r23.s64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x832d1dcc
	if (!ctx.cr6.lt) goto loc_832D1DCC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2158
	ctx.r7.s64 = 2158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1DCC;
	sub_8320CF10(ctx, base);
loc_832D1DCC:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1DEC"))) PPC_WEAK_FUNC(sub_832D1DEC);
PPC_FUNC_IMPL(__imp__sub_832D1DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1DF0"))) PPC_WEAK_FUNC(sub_832D1DF0);
PPC_FUNC_IMPL(__imp__sub_832D1DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D1DF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,20
	ctx.r30.s64 = 20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,280(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d1e58
	if (!ctx.cr0.eq) goto loc_832D1E58;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// divwu r8,r6,r7
	ctx.r8.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_832D1E58:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r11,5192
	ctx.r28.s64 = ctx.r11.s64 + 5192;
	// bne cr6,0x832d1e8c
	if (!ctx.cr6.eq) goto loc_832D1E8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2195
	ctx.r7.s64 = 2195;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1E8C;
	sub_8320CF10(ctx, base);
loc_832D1E8C:
	// addic. r26,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r26.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x832d1eb0
	if (!ctx.cr0.eq) goto loc_832D1EB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2199
	ctx.r7.s64 = 2199;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1EB0;
	sub_8320CF10(ctx, base);
loc_832D1EB0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d1edc
	if (ctx.cr6.eq) goto loc_832D1EDC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d0aa0
	ctx.lr = 0x832D1EC8;
	sub_832D0AA0(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_832D1EDC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d1f14
	if (ctx.cr6.eq) goto loc_832D1F14;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832D1F14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d1af8
	ctx.lr = 0x832D1F20;
	sub_832D1AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1F28"))) PPC_WEAK_FUNC(sub_832D1F28);
PPC_FUNC_IMPL(__imp__sub_832D1F28) {
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
	// bne cr6,0x832d1f70
	if (!ctx.cr6.eq) goto loc_832D1F70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,-5784
	ctx.r5.s64 = ctx.r10.s64 + -5784;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2243
	ctx.r7.s64 = 2243;
	// bl 0x8320cf10
	ctx.lr = 0x832D1F5C;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D1F60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832D1F70:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x832d1f60
	goto loc_832D1F60;
}

__attribute__((alias("__imp__sub_832D1F78"))) PPC_WEAK_FUNC(sub_832D1F78);
PPC_FUNC_IMPL(__imp__sub_832D1F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D1F80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r30,r11,11520
	ctx.r30.u64 = ctx.r11.u64 | 11520;
	// lwz r25,92(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r24,104(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r27,20(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d2038
	if (ctx.cr6.eq) goto loc_832D2038;
	// li r28,1024
	ctx.r28.s64 = 1024;
loc_832D1FB0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D1FC0;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2024
	if (ctx.cr0.eq) goto loc_832D2024;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1FE8;
	sub_82CB1160(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r27,64
	ctx.r4.s64 = ctx.r27.s64 + 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x832D2010;
	sub_82CB1160(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bl 0x832d1050
	ctx.lr = 0x832D2024;
	sub_832D1050(ctx, base);
loc_832D2024:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d1fb0
	if (ctx.cr6.lt) goto loc_832D1FB0;
loc_832D2038:
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d20d4
	if (ctx.cr6.eq) goto loc_832D20D4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_832D204C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D205C;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d20c0
	if (ctx.cr0.eq) goto loc_832D20C0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D2084;
	sub_82CB1160(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r27,64
	ctx.r4.s64 = ctx.r27.s64 + 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x832D20AC;
	sub_82CB1160(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bl 0x832d1050
	ctx.lr = 0x832D20C0;
	sub_832D1050(ctx, base);
loc_832D20C0:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d204c
	if (ctx.cr6.lt) goto loc_832D204C;
loc_832D20D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D20E0"))) PPC_WEAK_FUNC(sub_832D20E0);
PPC_FUNC_IMPL(__imp__sub_832D20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D20E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r25,96(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r24,108(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r27,120(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// beq cr6,0x832d2180
	if (ctx.cr6.eq) goto loc_832D2180;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_832D2114:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D2124;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2170
	if (ctx.cr0.eq) goto loc_832D2170;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r29,3
	ctx.r10.u64 = ctx.r29.u64 | 196608;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r27,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D215C;
	sub_82CB1160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D2170;
	sub_832D1050(ctx, base);
loc_832D2170:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d2114
	if (ctx.cr6.lt) goto loc_832D2114;
loc_832D2180:
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d2208
	if (ctx.cr6.eq) goto loc_832D2208;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_832D2198:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D21A8;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d21f8
	if (ctx.cr0.eq) goto loc_832D21F8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// oris r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 196608;
	// rlwimi r9,r27,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D21E4;
	sub_82CB1160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D21F8;
	sub_832D1050(ctx, base);
loc_832D21F8:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d2198
	if (ctx.cr6.lt) goto loc_832D2198;
loc_832D2208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2214"))) PPC_WEAK_FUNC(sub_832D2214);
PPC_FUNC_IMPL(__imp__sub_832D2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2218"))) PPC_WEAK_FUNC(sub_832D2218);
PPC_FUNC_IMPL(__imp__sub_832D2218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D2220;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// lwz r24,112(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r25,100(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r26,124(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bne cr6,0x832d2270
	if (!ctx.cr6.eq) goto loc_832D2270;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5608
	ctx.r5.s64 = ctx.r11.s64 + 5608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,983
	ctx.r7.s64 = 983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2270;
	sub_8320CF10(ctx, base);
loc_832D2270:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d2294
	if (!ctx.cr6.eq) goto loc_832D2294;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5172
	ctx.r5.s64 = ctx.r11.s64 + 5172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,984
	ctx.r7.s64 = 984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2294;
	sub_8320CF10(ctx, base);
loc_832D2294:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d22f0
	if (ctx.cr6.eq) goto loc_832D22F0;
loc_832D22A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D22B0;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d22e4
	if (ctx.cr0.eq) goto loc_832D22E4;
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D22D0;
	sub_832D0648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D22E4;
	sub_832D1050(ctx, base);
loc_832D22E4:
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d22a0
	if (ctx.cr6.lt) goto loc_832D22A0;
loc_832D22F0:
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,136(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d2354
	if (ctx.cr6.eq) goto loc_832D2354;
loc_832D2304:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D2314;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2348
	if (ctx.cr0.eq) goto loc_832D2348;
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D2334;
	sub_832D0648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D2348;
	sub_832D1050(ctx, base);
loc_832D2348:
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d2304
	if (ctx.cr6.lt) goto loc_832D2304;
loc_832D2354:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2360"))) PPC_WEAK_FUNC(sub_832D2360);
PPC_FUNC_IMPL(__imp__sub_832D2360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D2368;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,5192
	ctx.r26.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d23b8
	if (!ctx.cr6.eq) goto loc_832D23B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D23B8;
	sub_8320CF10(ctx, base);
loc_832D23B8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d23dc
	if (!ctx.cr6.eq) goto loc_832D23DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D23DC;
	sub_8320CF10(ctx, base);
loc_832D23DC:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D23EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d2410
	if (!ctx.cr0.eq) goto loc_832D2410;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5620
	ctx.r5.s64 = ctx.r11.s64 + 5620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1159
	ctx.r7.s64 = 1159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2410;
	sub_8320CF10(ctx, base);
loc_832D2410:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// bl 0x832ceb20
	ctx.lr = 0x832D2430;
	sub_832CEB20(ctx, base);
	// rlwinm. r11,r3,0,20,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d244c
	if (ctx.cr0.eq) goto loc_832D244C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r10,r10,4440
	ctx.r10.s64 = ctx.r10.s64 + 4440;
	// b 0x832d2478
	goto loc_832D2478;
loc_832D244C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x832d2468
	if (!ctx.cr6.eq) goto loc_832D2468;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1048
	ctx.r11.s64 = ctx.r11.s64 + 1048;
	// addi r10,r10,3696
	ctx.r10.s64 = ctx.r10.s64 + 3696;
	// b 0x832d2478
	goto loc_832D2478;
loc_832D2468:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// addi r10,r10,3000
	ctx.r10.s64 = ctx.r10.s64 + 3000;
loc_832D2478:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D248C"))) PPC_WEAK_FUNC(sub_832D248C);
PPC_FUNC_IMPL(__imp__sub_832D248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2490"))) PPC_WEAK_FUNC(sub_832D2490);
PPC_FUNC_IMPL(__imp__sub_832D2490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D2498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,5192
	ctx.r26.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d24d8
	if (!ctx.cr6.eq) goto loc_832D24D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1930
	ctx.r7.s64 = 1930;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D24D8;
	sub_8320CF10(ctx, base);
loc_832D24D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d24fc
	if (!ctx.cr6.eq) goto loc_832D24FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1931
	ctx.r7.s64 = 1931;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D24FC;
	sub_8320CF10(ctx, base);
loc_832D24FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d2520
	if (!ctx.cr6.eq) goto loc_832D2520;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2520;
	sub_8320CF10(ctx, base);
loc_832D2520:
	// addic. r29,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r29.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d2544
	if (!ctx.cr0.eq) goto loc_832D2544;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1935
	ctx.r7.s64 = 1935;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2544;
	sub_8320CF10(ctx, base);
loc_832D2544:
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D2594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832d1f78
	ctx.lr = 0x832D25A0;
	sub_832D1F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832d20e0
	ctx.lr = 0x832D25A8;
	sub_832D20E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832d2218
	ctx.lr = 0x832D25B0;
	sub_832D2218(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832d25dc
	if (!ctx.cr6.lt) goto loc_832D25DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1951
	ctx.r7.s64 = 1951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D25DC;
	sub_8320CF10(ctx, base);
loc_832D25DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D25F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330b1d0
	ctx.lr = 0x832D25FC;
	sub_8330B1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2608"))) PPC_WEAK_FUNC(sub_832D2608);
PPC_FUNC_IMPL(__imp__sub_832D2608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D2610;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,5680
	ctx.r28.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2668
	if (!ctx.cr6.eq) goto loc_832D2668;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,127
	ctx.r7.s64 = 127;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2668;
	sub_8320CF10(ctx, base);
loc_832D2668:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d268c
	if (!ctx.cr6.eq) goto loc_832D268C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D268C;
	sub_8320CF10(ctx, base);
loc_832D268C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d26b0
	if (!ctx.cr6.eq) goto loc_832D26B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,129
	ctx.r7.s64 = 129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26B0;
	sub_8320CF10(ctx, base);
loc_832D26B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d26d4
	if (!ctx.cr6.eq) goto loc_832D26D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5660
	ctx.r5.s64 = ctx.r11.s64 + 5660;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,135
	ctx.r7.s64 = 135;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26D4;
	sub_8320CF10(ctx, base);
loc_832D26D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d26f8
	if (!ctx.cr6.eq) goto loc_832D26F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26F8;
	sub_8320CF10(ctx, base);
loc_832D26F8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x832d271c
	if (!ctx.cr6.eq) goto loc_832D271C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D271C;
	sub_8320CF10(ctx, base);
loc_832D271C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d2740
	if (!ctx.cr6.eq) goto loc_832D2740;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,138
	ctx.r7.s64 = 138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2740;
	sub_8320CF10(ctx, base);
loc_832D2740:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D2750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d2774
	if (!ctx.cr0.eq) goto loc_832D2774;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5636
	ctx.r5.s64 = ctx.r11.s64 + 5636;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2774;
	sub_8320CF10(ctx, base);
loc_832D2774:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// bl 0x832d85c8
	ctx.lr = 0x832D27A4;
	sub_832D85C8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D27B4"))) PPC_WEAK_FUNC(sub_832D27B4);
PPC_FUNC_IMPL(__imp__sub_832D27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D27B8"))) PPC_WEAK_FUNC(sub_832D27B8);
PPC_FUNC_IMPL(__imp__sub_832D27B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D27C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r11,5680
	ctx.r28.s64 = ctx.r11.s64 + 5680;
	// bne cr6,0x832d27fc
	if (!ctx.cr6.eq) goto loc_832D27FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,191
	ctx.r7.s64 = 191;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D27FC;
	sub_8320CF10(ctx, base);
loc_832D27FC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d8bd8
	ctx.lr = 0x832D2804;
	sub_832D8BD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d2850
	if (ctx.cr0.eq) goto loc_832D2850;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,5772
	ctx.r27.s64 = ctx.r11.s64 + 5772;
loc_832D2814:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d2834
	if (!ctx.cr6.eq) goto loc_832D2834;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,196
	ctx.r7.s64 = 196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2834;
	sub_8320CF10(ctx, base);
loc_832D2834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D2840;
	sub_832D5AD0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d8bd8
	ctx.lr = 0x832D2848;
	sub_832D8BD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2814
	if (!ctx.cr0.eq) goto loc_832D2814;
loc_832D2850:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d86d8
	ctx.lr = 0x832D2858;
	sub_832D86D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D286C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2878"))) PPC_WEAK_FUNC(sub_832D2878);
PPC_FUNC_IMPL(__imp__sub_832D2878) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2880"))) PPC_WEAK_FUNC(sub_832D2880);
PPC_FUNC_IMPL(__imp__sub_832D2880) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2888"))) PPC_WEAK_FUNC(sub_832D2888);
PPC_FUNC_IMPL(__imp__sub_832D2888) {
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
	// bne cr6,0x832d28bc
	if (!ctx.cr6.eq) goto loc_832D28BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5680
	ctx.r6.s64 = ctx.r11.s64 + 5680;
	// addi r5,r10,2428
	ctx.r5.s64 = ctx.r10.s64 + 2428;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,412
	ctx.r7.s64 = 412;
	// bl 0x8320cf10
	ctx.lr = 0x832D28BC;
	sub_8320CF10(ctx, base);
loc_832D28BC:
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

__attribute__((alias("__imp__sub_832D28D0"))) PPC_WEAK_FUNC(sub_832D28D0);
PPC_FUNC_IMPL(__imp__sub_832D28D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D28D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,5680
	ctx.r30.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2914
	if (!ctx.cr6.eq) goto loc_832D2914;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,447
	ctx.r7.s64 = 447;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2914;
	sub_8320CF10(ctx, base);
loc_832D2914:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832d2938
	if (ctx.cr6.eq) goto loc_832D2938;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,5784
	ctx.r5.s64 = ctx.r11.s64 + 5784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,448
	ctx.r7.s64 = 448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2938;
	sub_8320CF10(ctx, base);
loc_832D2938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2944"))) PPC_WEAK_FUNC(sub_832D2944);
PPC_FUNC_IMPL(__imp__sub_832D2944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2948"))) PPC_WEAK_FUNC(sub_832D2948);
PPC_FUNC_IMPL(__imp__sub_832D2948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D2950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,5680
	ctx.r30.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2990
	if (!ctx.cr6.eq) goto loc_832D2990;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2990;
	sub_8320CF10(ctx, base);
loc_832D2990:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d29b4
	if (!ctx.cr6.eq) goto loc_832D29B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,483
	ctx.r7.s64 = 483;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D29B4;
	sub_8320CF10(ctx, base);
loc_832D29B4:
	// lwz r4,280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d29c8
	if (ctx.cr6.eq) goto loc_832D29C8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D29C8;
	sub_832D5AD0(ctx, base);
loc_832D29C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D29D4"))) PPC_WEAK_FUNC(sub_832D29D4);
PPC_FUNC_IMPL(__imp__sub_832D29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D29D8"))) PPC_WEAK_FUNC(sub_832D29D8);
PPC_FUNC_IMPL(__imp__sub_832D29D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D29E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,2584
	ctx.r28.s64 = ctx.r10.s64 + 2584;
	// bne cr6,0x832d2a20
	if (!ctx.cr6.eq) goto loc_832D2A20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,239
	ctx.r7.s64 = 239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2A20;
	sub_8320CF10(ctx, base);
loc_832D2A20:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d2a48
	if (ctx.cr6.lt) goto loc_832D2A48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,2536
	ctx.r5.s64 = ctx.r11.s64 + 2536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2A48;
	sub_8320CF10(ctx, base);
loc_832D2A48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2A70"))) PPC_WEAK_FUNC(sub_832D2A70);
PPC_FUNC_IMPL(__imp__sub_832D2A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2A78"))) PPC_WEAK_FUNC(sub_832D2A78);
PPC_FUNC_IMPL(__imp__sub_832D2A78) {
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
	// bne cr6,0x832d2ab4
	if (!ctx.cr6.eq) goto loc_832D2AB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2584
	ctx.r6.s64 = ctx.r11.s64 + 2584;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,433
	ctx.r7.s64 = 433;
	// bl 0x8320cf10
	ctx.lr = 0x832D2AB4;
	sub_8320CF10(ctx, base);
loc_832D2AB4:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
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

__attribute__((alias("__imp__sub_832D2ACC"))) PPC_WEAK_FUNC(sub_832D2ACC);
PPC_FUNC_IMPL(__imp__sub_832D2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2AD0"))) PPC_WEAK_FUNC(sub_832D2AD0);
PPC_FUNC_IMPL(__imp__sub_832D2AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D2AD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5680
	ctx.r27.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2b24
	if (!ctx.cr6.eq) goto loc_832D2B24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B24;
	sub_8320CF10(ctx, base);
loc_832D2B24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2b4c
	if (!ctx.cr6.eq) goto loc_832D2B4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5876
	ctx.r5.s64 = ctx.r11.s64 + 5876;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,252
	ctx.r7.s64 = 252;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B4C;
	sub_8320CF10(ctx, base);
loc_832D2B4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d2a78
	ctx.lr = 0x832D2B54;
	sub_832D2A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2b78
	if (ctx.cr0.eq) goto loc_832D2B78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5828
	ctx.r5.s64 = ctx.r11.s64 + 5828;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,253
	ctx.r7.s64 = 253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B78;
	sub_8320CF10(ctx, base);
loc_832D2B78:
	// lwz r24,8(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d2ba0
	if (!ctx.cr6.eq) goto loc_832D2BA0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5812
	ctx.r5.s64 = ctx.r11.s64 + 5812;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,260
	ctx.r7.s64 = 260;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2BA0;
	sub_8320CF10(ctx, base);
loc_832D2BA0:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r25,r11,11084
	ctx.r25.s64 = ctx.r11.s64 + 11084;
	// lwz r26,11084(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x832d88f0
	ctx.lr = 0x832D2BBC;
	sub_832D88F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2c4c
	if (!ctx.cr0.eq) goto loc_832D2C4C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d2c10
	if (ctx.cr0.eq) goto loc_832D2C10;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832178f0
	ctx.lr = 0x832D2BD8;
	sub_832178F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2bfc
	if (!ctx.cr0.eq) goto loc_832D2BFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5796
	ctx.r5.s64 = ctx.r11.s64 + 5796;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,302
	ctx.r7.s64 = 302;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2BFC;
	sub_8320CF10(ctx, base);
loc_832D2BFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cfe30
	ctx.lr = 0x832D2C08;
	sub_832CFE30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x832d2c14
	goto loc_832D2C14;
loc_832D2C10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_832D2C14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83218b20
	ctx.lr = 0x832D2C20;
	sub_83218B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x832d2ca0
	if (!ctx.cr6.eq) goto loc_832D2CA0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d56b8
	ctx.lr = 0x832D2C34;
	sub_832D56B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d8778
	ctx.lr = 0x832D2C4C;
	sub_832D8778(ctx, base);
loc_832D2C4C:
	// lwz r4,280(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d2c60
	if (ctx.cr6.eq) goto loc_832D2C60;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D2C60;
	sub_832D5AD0(ctx, base);
loc_832D2C60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5c30
	ctx.lr = 0x832D2C6C;
	sub_832D5C30(ctx, base);
	// stw r3,280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 280, ctx.r3.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2c9c
	if (ctx.cr6.eq) goto loc_832D2C9C;
loc_832D2C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d29d8
	ctx.lr = 0x832D2C8C;
	sub_832D29D8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d2c80
	if (ctx.cr6.lt) goto loc_832D2C80;
loc_832D2C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D2CA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2CA8"))) PPC_WEAK_FUNC(sub_832D2CA8);
PPC_FUNC_IMPL(__imp__sub_832D2CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D2CB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r27,r11,0,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832D2CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832d2d5c
	if (ctx.cr0.eq) goto loc_832D2D5C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mullw r4,r11,r27
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832D2D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2d48
	if (ctx.cr0.eq) goto loc_832D2D48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// ble cr6,0x832d2d5c
	if (!ctx.cr6.gt) goto loc_832D2D5C;
loc_832D2D30:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne 0x832d2d30
	if (!ctx.cr0.eq) goto loc_832D2D30;
	// b 0x832d2d5c
	goto loc_832D2D5C;
loc_832D2D48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x832D2D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D2D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2D68"))) PPC_WEAK_FUNC(sub_832D2D68);
PPC_FUNC_IMPL(__imp__sub_832D2D68) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2dc0
	if (ctx.cr6.eq) goto loc_832D2DC0;
loc_832D2D88:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D2D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D2DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d2d88
	if (!ctx.cr6.eq) goto loc_832D2D88;
loc_832D2DC0:
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

__attribute__((alias("__imp__sub_832D2DD8"))) PPC_WEAK_FUNC(sub_832D2DD8);
PPC_FUNC_IMPL(__imp__sub_832D2DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D2DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r9,-5392
	ctx.r28.s64 = ctx.r9.s64 + -5392;
	// addi r27,r11,5896
	ctx.r27.s64 = ctx.r11.s64 + 5896;
	// bne cr6,0x832d2e2c
	if (!ctx.cr6.eq) goto loc_832D2E2C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2E24;
	sub_8320CF10(ctx, base);
loc_832D2E24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2eb4
	if (ctx.cr6.eq) goto loc_832D2EB4;
loc_832D2E2C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2e4c
	if (ctx.cr6.eq) goto loc_832D2E4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832d2e94
	goto loc_832D2E94;
loc_832D2E4C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2e68
	if (ctx.cr6.eq) goto loc_832D2E68;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d2e4c
	if (ctx.cr6.eq) goto loc_832D2E4C;
loc_832D2E68:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2e24
	if (!ctx.cr6.eq) goto loc_832D2E24;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832d2ca8
	ctx.lr = 0x832D2E8C;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832D2E94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d2e24
	if (ctx.cr6.eq) goto loc_832D2E24;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832D2EAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832D2EB4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2ECC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d2eac
	goto loc_832D2EAC;
}

__attribute__((alias("__imp__sub_832D2ED4"))) PPC_WEAK_FUNC(sub_832D2ED4);
PPC_FUNC_IMPL(__imp__sub_832D2ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2ED8"))) PPC_WEAK_FUNC(sub_832D2ED8);
PPC_FUNC_IMPL(__imp__sub_832D2ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2EE8"))) PPC_WEAK_FUNC(sub_832D2EE8);
PPC_FUNC_IMPL(__imp__sub_832D2EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D2EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r9,-5392
	ctx.r28.s64 = ctx.r9.s64 + -5392;
	// addi r27,r11,5896
	ctx.r27.s64 = ctx.r11.s64 + 5896;
	// bne cr6,0x832d2f34
	if (!ctx.cr6.eq) goto loc_832D2F34;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2F34;
	sub_8320CF10(ctx, base);
loc_832D2F34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2fc4
	if (ctx.cr6.eq) goto loc_832D2FC4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2f5c
	if (ctx.cr6.eq) goto loc_832D2F5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832d2fa4
	goto loc_832D2FA4;
loc_832D2F5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2f78
	if (ctx.cr6.eq) goto loc_832D2F78;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d2f5c
	if (ctx.cr6.eq) goto loc_832D2F5C;
loc_832D2F78:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2f34
	if (!ctx.cr6.eq) goto loc_832D2F34;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832d2ca8
	ctx.lr = 0x832D2F9C;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832D2FA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d2f34
	if (ctx.cr6.eq) goto loc_832D2F34;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832D2FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832D2FC4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2FDC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d2fbc
	goto loc_832D2FBC;
}

__attribute__((alias("__imp__sub_832D2FE4"))) PPC_WEAK_FUNC(sub_832D2FE4);
PPC_FUNC_IMPL(__imp__sub_832D2FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2FE8"))) PPC_WEAK_FUNC(sub_832D2FE8);
PPC_FUNC_IMPL(__imp__sub_832D2FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_832D2FF0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d3010
	if (ctx.cr6.lt) goto loc_832D3010;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832d301c
	if (!ctx.cr6.gt) goto loc_832D301C;
loc_832D3010:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2ff0
	if (!ctx.cr6.eq) goto loc_832D2FF0;
loc_832D301C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d3048
	if (ctx.cr6.eq) goto loc_832D3048;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_832D3048:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3050"))) PPC_WEAK_FUNC(sub_832D3050);
PPC_FUNC_IMPL(__imp__sub_832D3050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D3058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3094
	if (!ctx.cr6.eq) goto loc_832D3094;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,150
	ctx.r7.s64 = 150;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3094;
	sub_8320CF10(ctx, base);
loc_832D3094:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d30bc
	if (ctx.cr6.eq) goto loc_832D30BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5972
	ctx.r5.s64 = ctx.r11.s64 + 5972;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,151
	ctx.r7.s64 = 151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D30BC;
	sub_8320CF10(ctx, base);
loc_832D30BC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d30cc
	if (ctx.cr6.eq) goto loc_832D30CC;
	// bl 0x832d2d68
	ctx.lr = 0x832D30CC;
	sub_832D2D68(ctx, base);
loc_832D30CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d30dc
	if (ctx.cr6.eq) goto loc_832D30DC;
	// bl 0x832d2d68
	ctx.lr = 0x832D30DC;
	sub_832D2D68(ctx, base);
loc_832D30DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D30F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D30F8"))) PPC_WEAK_FUNC(sub_832D30F8);
PPC_FUNC_IMPL(__imp__sub_832D30F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d313c
	if (!ctx.cr6.eq) goto loc_832D313C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D313C;
	sub_8320CF10(ctx, base);
loc_832D313C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D3144;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d316c
	if (!ctx.cr0.eq) goto loc_832D316C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3168;
	sub_8320CF10(ctx, base);
	// b 0x832d3190
	goto loc_832D3190;
loc_832D316C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83211ba0
	ctx.lr = 0x832D3190;
	sub_83211BA0(ctx, base);
loc_832D3190:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D319C"))) PPC_WEAK_FUNC(sub_832D319C);
PPC_FUNC_IMPL(__imp__sub_832D319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D31A0"))) PPC_WEAK_FUNC(sub_832D31A0);
PPC_FUNC_IMPL(__imp__sub_832D31A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D31A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d31e8
	if (!ctx.cr6.eq) goto loc_832D31E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D31E8;
	sub_8320CF10(ctx, base);
loc_832D31E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d320c
	if (!ctx.cr6.eq) goto loc_832D320C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,225
	ctx.r7.s64 = 225;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D320C;
	sub_8320CF10(ctx, base);
loc_832D320C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d3234
	if (ctx.cr6.gt) goto loc_832D3234;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6124
	ctx.r5.s64 = ctx.r11.s64 + 6124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,229
	ctx.r7.s64 = 229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3234;
	sub_8320CF10(ctx, base);
loc_832D3234:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212318
	ctx.lr = 0x832D323C;
	sub_83212318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3260
	if (ctx.cr0.eq) goto loc_832D3260;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6092
	ctx.r5.s64 = ctx.r11.s64 + 6092;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3260;
	sub_8320CF10(ctx, base);
loc_832D3260:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83211ce8
	ctx.lr = 0x832D3268;
	sub_83211CE8(ctx, base);
	// bl 0x83212508
	ctx.lr = 0x832D326C;
	sub_83212508(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D327C;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D3288;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D329C"))) PPC_WEAK_FUNC(sub_832D329C);
PPC_FUNC_IMPL(__imp__sub_832D329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D32A0"))) PPC_WEAK_FUNC(sub_832D32A0);
PPC_FUNC_IMPL(__imp__sub_832D32A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D32A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d32e4
	if (!ctx.cr6.eq) goto loc_832D32E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D32E4;
	sub_8320CF10(ctx, base);
loc_832D32E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d330c
	if (ctx.cr6.eq) goto loc_832D330C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6152
	ctx.r5.s64 = ctx.r11.s64 + 6152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D330C;
	sub_8320CF10(ctx, base);
loc_832D330C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d331c
	if (ctx.cr6.eq) goto loc_832D331C;
	// bl 0x832d2d68
	ctx.lr = 0x832D331C;
	sub_832D2D68(ctx, base);
loc_832D331C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d332c
	if (ctx.cr6.eq) goto loc_832D332C;
	// bl 0x832d2d68
	ctx.lr = 0x832D332C;
	sub_832D2D68(ctx, base);
loc_832D332C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D3340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3348"))) PPC_WEAK_FUNC(sub_832D3348);
PPC_FUNC_IMPL(__imp__sub_832D3348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d338c
	if (!ctx.cr6.eq) goto loc_832D338C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D338C;
	sub_8320CF10(ctx, base);
loc_832D338C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D3394;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d33bc
	if (!ctx.cr0.eq) goto loc_832D33BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,417
	ctx.r7.s64 = 417;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D33B8;
	sub_8320CF10(ctx, base);
	// b 0x832d33d4
	goto loc_832D33D4;
loc_832D33BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83212a88
	ctx.lr = 0x832D33D4;
	sub_83212A88(ctx, base);
loc_832D33D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D33E0"))) PPC_WEAK_FUNC(sub_832D33E0);
PPC_FUNC_IMPL(__imp__sub_832D33E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D33E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3428
	if (!ctx.cr6.eq) goto loc_832D3428;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,445
	ctx.r7.s64 = 445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3428;
	sub_8320CF10(ctx, base);
loc_832D3428:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d344c
	if (!ctx.cr6.eq) goto loc_832D344C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5144
	ctx.r5.s64 = ctx.r11.s64 + -5144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D344C;
	sub_8320CF10(ctx, base);
loc_832D344C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d3474
	if (ctx.cr6.gt) goto loc_832D3474;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6216
	ctx.r5.s64 = ctx.r11.s64 + 6216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3474;
	sub_8320CF10(ctx, base);
loc_832D3474:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212cf8
	ctx.lr = 0x832D347C;
	sub_83212CF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d34a0
	if (ctx.cr0.eq) goto loc_832D34A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6180
	ctx.r5.s64 = ctx.r11.s64 + 6180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,451
	ctx.r7.s64 = 451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D34A0;
	sub_8320CF10(ctx, base);
loc_832D34A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212ba8
	ctx.lr = 0x832D34A8;
	sub_83212BA8(ctx, base);
	// bl 0x83213410
	ctx.lr = 0x832D34AC;
	sub_83213410(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D34BC;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D34C8;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D34DC"))) PPC_WEAK_FUNC(sub_832D34DC);
PPC_FUNC_IMPL(__imp__sub_832D34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D34E0"))) PPC_WEAK_FUNC(sub_832D34E0);
PPC_FUNC_IMPL(__imp__sub_832D34E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D34E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3524
	if (!ctx.cr6.eq) goto loc_832D3524;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,596
	ctx.r7.s64 = 596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3524;
	sub_8320CF10(ctx, base);
loc_832D3524:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d354c
	if (ctx.cr6.eq) goto loc_832D354C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5972
	ctx.r5.s64 = ctx.r11.s64 + 5972;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,597
	ctx.r7.s64 = 597;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D354C;
	sub_8320CF10(ctx, base);
loc_832D354C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d355c
	if (ctx.cr6.eq) goto loc_832D355C;
	// bl 0x832d2d68
	ctx.lr = 0x832D355C;
	sub_832D2D68(ctx, base);
loc_832D355C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d356c
	if (ctx.cr6.eq) goto loc_832D356C;
	// bl 0x832d2d68
	ctx.lr = 0x832D356C;
	sub_832D2D68(ctx, base);
loc_832D356C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D3580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3588"))) PPC_WEAK_FUNC(sub_832D3588);
PPC_FUNC_IMPL(__imp__sub_832D3588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d35cc
	if (!ctx.cr6.eq) goto loc_832D35CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,632
	ctx.r7.s64 = 632;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D35CC;
	sub_8320CF10(ctx, base);
loc_832D35CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D35D4;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d35fc
	if (!ctx.cr0.eq) goto loc_832D35FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D35F8;
	sub_8320CF10(ctx, base);
	// b 0x832d3614
	goto loc_832D3614;
loc_832D35FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83213418
	ctx.lr = 0x832D3614;
	sub_83213418(ctx, base);
loc_832D3614:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3620"))) PPC_WEAK_FUNC(sub_832D3620);
PPC_FUNC_IMPL(__imp__sub_832D3620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3668
	if (!ctx.cr6.eq) goto loc_832D3668;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3668;
	sub_8320CF10(ctx, base);
loc_832D3668:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d368c
	if (!ctx.cr6.eq) goto loc_832D368C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5044
	ctx.r5.s64 = ctx.r11.s64 + -5044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,667
	ctx.r7.s64 = 667;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D368C;
	sub_8320CF10(ctx, base);
loc_832D368C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d36b4
	if (ctx.cr6.gt) goto loc_832D36B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6124
	ctx.r5.s64 = ctx.r11.s64 + 6124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,671
	ctx.r7.s64 = 671;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D36B4;
	sub_8320CF10(ctx, base);
loc_832D36B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213648
	ctx.lr = 0x832D36BC;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d36e0
	if (ctx.cr0.eq) goto loc_832D36E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6244
	ctx.r5.s64 = ctx.r11.s64 + 6244;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D36E0;
	sub_8320CF10(ctx, base);
loc_832D36E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213538
	ctx.lr = 0x832D36E8;
	sub_83213538(ctx, base);
	// bl 0x83214268
	ctx.lr = 0x832D36EC;
	sub_83214268(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D36FC;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D3708;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D371C"))) PPC_WEAK_FUNC(sub_832D371C);
PPC_FUNC_IMPL(__imp__sub_832D371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D3720"))) PPC_WEAK_FUNC(sub_832D3720);
PPC_FUNC_IMPL(__imp__sub_832D3720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D3728;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3774
	if (!ctx.cr6.eq) goto loc_832D3774;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,86
	ctx.r7.s64 = 86;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3774;
	sub_8320CF10(ctx, base);
loc_832D3774:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3798
	if (!ctx.cr6.eq) goto loc_832D3798;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3798;
	sub_8320CF10(ctx, base);
loc_832D3798:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d37bc
	if (!ctx.cr6.eq) goto loc_832D37BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D37BC;
	sub_8320CF10(ctx, base);
loc_832D37BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d37e0
	if (!ctx.cr6.eq) goto loc_832D37E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,89
	ctx.r7.s64 = 89;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D37E0;
	sub_8320CF10(ctx, base);
loc_832D37E0:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D37F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3818
	if (!ctx.cr0.eq) goto loc_832D3818;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3814;
	sub_8320CF10(ctx, base);
	// b 0x832d38ac
	goto loc_832D38AC;
loc_832D3818:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83212428
	ctx.lr = 0x832D3840;
	sub_83212428(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83212498
	ctx.lr = 0x832D3858;
	sub_83212498(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3870
	if (ctx.cr0.eq) goto loc_832D3870;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d38ac
	if (!ctx.cr6.eq) goto loc_832D38AC;
loc_832D3870:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3884
	if (ctx.cr6.eq) goto loc_832D3884;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d38a0
	if (!ctx.cr6.eq) goto loc_832D38A0;
loc_832D3884:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,123
	ctx.r7.s64 = 123;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D38A0;
	sub_8320CF10(ctx, base);
loc_832D38A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3050
	ctx.lr = 0x832D38A8;
	sub_832D3050(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D38AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D38B8"))) PPC_WEAK_FUNC(sub_832D38B8);
PPC_FUNC_IMPL(__imp__sub_832D38B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D38C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d390c
	if (!ctx.cr6.eq) goto loc_832D390C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D390C;
	sub_8320CF10(ctx, base);
loc_832D390C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3930
	if (!ctx.cr6.eq) goto loc_832D3930;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3930;
	sub_8320CF10(ctx, base);
loc_832D3930:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3954
	if (!ctx.cr6.eq) goto loc_832D3954;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3954;
	sub_8320CF10(ctx, base);
loc_832D3954:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3978
	if (!ctx.cr6.eq) goto loc_832D3978;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,315
	ctx.r7.s64 = 315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3978;
	sub_8320CF10(ctx, base);
loc_832D3978:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d39b0
	if (!ctx.cr0.eq) goto loc_832D39B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,322
	ctx.r7.s64 = 322;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D39AC;
	sub_8320CF10(ctx, base);
	// b 0x832d3a44
	goto loc_832D3A44;
loc_832D39B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213330
	ctx.lr = 0x832D39D8;
	sub_83213330(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133a0
	ctx.lr = 0x832D39F0;
	sub_832133A0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3a08
	if (ctx.cr0.eq) goto loc_832D3A08;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3a44
	if (!ctx.cr6.eq) goto loc_832D3A44;
loc_832D3A08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3a1c
	if (ctx.cr6.eq) goto loc_832D3A1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3a38
	if (!ctx.cr6.eq) goto loc_832D3A38;
loc_832D3A1C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3A38;
	sub_8320CF10(ctx, base);
loc_832D3A38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d32a0
	ctx.lr = 0x832D3A40;
	sub_832D32A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D3A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3A50"))) PPC_WEAK_FUNC(sub_832D3A50);
PPC_FUNC_IMPL(__imp__sub_832D3A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D3A58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3aa4
	if (!ctx.cr6.eq) goto loc_832D3AA4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,533
	ctx.r7.s64 = 533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AA4;
	sub_8320CF10(ctx, base);
loc_832D3AA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3ac8
	if (!ctx.cr6.eq) goto loc_832D3AC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,534
	ctx.r7.s64 = 534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AC8;
	sub_8320CF10(ctx, base);
loc_832D3AC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3aec
	if (!ctx.cr6.eq) goto loc_832D3AEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,535
	ctx.r7.s64 = 535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AEC;
	sub_8320CF10(ctx, base);
loc_832D3AEC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3b10
	if (!ctx.cr6.eq) goto loc_832D3B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,536
	ctx.r7.s64 = 536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3B10;
	sub_8320CF10(ctx, base);
loc_832D3B10:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3b48
	if (!ctx.cr0.eq) goto loc_832D3B48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,543
	ctx.r7.s64 = 543;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3B44;
	sub_8320CF10(ctx, base);
	// b 0x832d3bdc
	goto loc_832D3BDC;
loc_832D3B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214188
	ctx.lr = 0x832D3B70;
	sub_83214188(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832141f8
	ctx.lr = 0x832D3B88;
	sub_832141F8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3ba0
	if (ctx.cr0.eq) goto loc_832D3BA0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3bdc
	if (!ctx.cr6.eq) goto loc_832D3BDC;
loc_832D3BA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3bb4
	if (ctx.cr6.eq) goto loc_832D3BB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3bd0
	if (!ctx.cr6.eq) goto loc_832D3BD0;
loc_832D3BB4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3BD0;
	sub_8320CF10(ctx, base);
loc_832D3BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d34e0
	ctx.lr = 0x832D3BD8;
	sub_832D34E0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D3BDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3BE8"))) PPC_WEAK_FUNC(sub_832D3BE8);
PPC_FUNC_IMPL(__imp__sub_832D3BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D3BF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,6424
	ctx.r23.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3c40
	if (!ctx.cr6.eq) goto loc_832D3C40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C40;
	sub_8320CF10(ctx, base);
loc_832D3C40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3c64
	if (!ctx.cr6.eq) goto loc_832D3C64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C64;
	sub_8320CF10(ctx, base);
loc_832D3C64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3c88
	if (!ctx.cr6.eq) goto loc_832D3C88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C88;
	sub_8320CF10(ctx, base);
loc_832D3C88:
	// li r4,1192
	ctx.r4.s64 = 1192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3cc4
	if (!ctx.cr0.eq) goto loc_832D3CC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3CBC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d3d30
	goto loc_832D3D30;
loc_832D3CC4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// bne cr6,0x832d3cf0
	if (!ctx.cr6.eq) goto loc_832D3CF0;
	// stw r28,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r28.u32);
	// b 0x832d3d1c
	goto loc_832D3D1C;
loc_832D3CF0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x832d3d14
	if (ctx.cr6.eq) goto loc_832D3D14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6388
	ctx.r5.s64 = ctx.r11.s64 + 6388;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3D14;
	sub_8320CF10(ctx, base);
loc_832D3D14:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_832D3D1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
loc_832D3D30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3D38"))) PPC_WEAK_FUNC(sub_832D3D38);
PPC_FUNC_IMPL(__imp__sub_832D3D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D3D40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6424
	ctx.r29.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3d84
	if (!ctx.cr6.eq) goto loc_832D3D84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6628
	ctx.r5.s64 = ctx.r11.s64 + 6628;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,234
	ctx.r7.s64 = 234;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3D84;
	sub_8320CF10(ctx, base);
loc_832D3D84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3da8
	if (!ctx.cr6.eq) goto loc_832D3DA8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6620
	ctx.r5.s64 = ctx.r11.s64 + 6620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,235
	ctx.r7.s64 = 235;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DA8;
	sub_8320CF10(ctx, base);
loc_832D3DA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d3dd0
	if (!ctx.cr6.eq) goto loc_832D3DD0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6588
	ctx.r5.s64 = ctx.r11.s64 + 6588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,238
	ctx.r7.s64 = 238;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DD0;
	sub_8320CF10(ctx, base);
loc_832D3DD0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d3df8
	if (!ctx.cr6.eq) goto loc_832D3DF8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6556
	ctx.r5.s64 = ctx.r11.s64 + 6556;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,239
	ctx.r7.s64 = 239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DF8;
	sub_8320CF10(ctx, base);
loc_832D3DF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832d3e24
	if (!ctx.cr6.eq) goto loc_832D3E24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6524
	ctx.r5.s64 = ctx.r11.s64 + 6524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3E24;
	sub_8320CF10(ctx, base);
loc_832D3E24:
	// lwz r10,1188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// lwz r11,1188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1188);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x832d3e40
	if (!ctx.cr6.gt) goto loc_832D3E40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d3f2c
	goto loc_832D3F2C;
loc_832D3E40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d3e58
	if (!ctx.cr6.eq) goto loc_832D3E58;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x832d3e60
	goto loc_832D3E60;
loc_832D3E58:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_832D3E60:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d3be8
	ctx.lr = 0x832D3E7C;
	sub_832D3BE8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d3e90
	if (!ctx.cr0.eq) goto loc_832D3E90;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832d3f2c
	goto loc_832D3F2C;
loc_832D3E90:
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832d3ed8
	if (!ctx.cr6.gt) goto loc_832D3ED8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
loc_832D3EA8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82cb1160
	ctx.lr = 0x832D3EC0;
	sub_82CB1160(ctx, base);
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832d3ea8
	if (ctx.cr6.lt) goto loc_832D3EA8;
loc_832D3ED8:
	// lwz r11,1188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// li r28,31
	ctx.r28.s64 = 31;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x832d3f28
	if (ctx.cr6.gt) goto loc_832D3F28;
	// li r31,1116
	ctx.r31.s64 = 1116;
	// addi r30,r29,1140
	ctx.r30.s64 = ctx.r29.s64 + 1140;
loc_832D3EF4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82cb1160
	ctx.lr = 0x832D3F0C;
	sub_82CB1160(ctx, base);
	// lwz r11,1188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832d3ef4
	if (!ctx.cr6.lt) goto loc_832D3EF4;
loc_832D3F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D3F2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3F34"))) PPC_WEAK_FUNC(sub_832D3F34);
PPC_FUNC_IMPL(__imp__sub_832D3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D3F38"))) PPC_WEAK_FUNC(sub_832D3F38);
PPC_FUNC_IMPL(__imp__sub_832D3F38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832D3F50"))) PPC_WEAK_FUNC(sub_832D3F50);
PPC_FUNC_IMPL(__imp__sub_832D3F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3F58"))) PPC_WEAK_FUNC(sub_832D3F58);
PPC_FUNC_IMPL(__imp__sub_832D3F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3F60"))) PPC_WEAK_FUNC(sub_832D3F60);
PPC_FUNC_IMPL(__imp__sub_832D3F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D3F68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,6424
	ctx.r30.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3fb4
	if (!ctx.cr6.eq) goto loc_832D3FB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,394
	ctx.r7.s64 = 394;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FB4;
	sub_8320CF10(ctx, base);
loc_832D3FB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3fd8
	if (!ctx.cr6.eq) goto loc_832D3FD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FD8;
	sub_8320CF10(ctx, base);
loc_832D3FD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d3ffc
	if (!ctx.cr6.eq) goto loc_832D3FFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,396
	ctx.r7.s64 = 396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FFC;
	sub_8320CF10(ctx, base);
loc_832D3FFC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d4024
	if (!ctx.cr6.eq) goto loc_832D4024;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6784
	ctx.r5.s64 = ctx.r11.s64 + 6784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,397
	ctx.r7.s64 = 397;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4024;
	sub_8320CF10(ctx, base);
loc_832D4024:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x832d4034
	if (ctx.cr6.eq) goto loc_832D4034;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x832d4050
	if (!ctx.cr6.eq) goto loc_832D4050;
loc_832D4034:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6704
	ctx.r5.s64 = ctx.r11.s64 + 6704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,400
	ctx.r7.s64 = 400;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4050;
	sub_8320CF10(ctx, base);
loc_832D4050:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d40a4
	if (!ctx.cr6.eq) goto loc_832D40A4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x832d4094
	if (!ctx.cr6.eq) goto loc_832D4094;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// blt cr6,0x832d4074
	if (ctx.cr6.lt) goto loc_832D4074;
loc_832D406C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d4104
	goto loc_832D4104;
loc_832D4074:
	// subfic r11,r27,95
	ctx.xer.ca = ctx.r27.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r27.s64;
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832d40fc
	goto loc_832D40FC;
loc_832D4094:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x832d40ec
	if (ctx.cr6.eq) goto loc_832D40EC;
	// li r7,419
	ctx.r7.s64 = 419;
	// b 0x832d40d4
	goto loc_832D40D4;
loc_832D40A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d40c8
	if (ctx.cr6.eq) goto loc_832D40C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,431
	ctx.r7.s64 = 431;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D40C8;
	sub_8320CF10(ctx, base);
loc_832D40C8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x832d40ec
	if (ctx.cr6.eq) goto loc_832D40EC;
	// li r7,432
	ctx.r7.s64 = 432;
loc_832D40D4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6636
	ctx.r5.s64 = ctx.r11.s64 + 6636;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D40EC;
	sub_8320CF10(ctx, base);
loc_832D40EC:
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x832d406c
	if (!ctx.cr6.lt) goto loc_832D406C;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832D40FC:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4104:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D410C"))) PPC_WEAK_FUNC(sub_832D410C);
PPC_FUNC_IMPL(__imp__sub_832D410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4110"))) PPC_WEAK_FUNC(sub_832D4110);
PPC_FUNC_IMPL(__imp__sub_832D4110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D4118;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r9,-21168
	ctx.r27.s64 = ctx.r9.s64 + -21168;
	// addi r26,r10,6424
	ctx.r26.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4158
	if (!ctx.cr6.eq) goto loc_832D4158;
	// lwz r29,1188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d4188
	goto loc_832D4188;
loc_832D4158:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d417c
	if (ctx.cr6.eq) goto loc_832D417C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D417C;
	sub_8320CF10(ctx, base);
loc_832D417C:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r29,32
	ctx.r29.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D4188:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832d4224
	if (!ctx.cr6.lt) goto loc_832D4224;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,6840
	ctx.r28.s64 = ctx.r11.s64 + 6840;
loc_832D41A8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d41cc
	if (ctx.cr6.eq) goto loc_832D41CC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D41CC;
	sub_8320CF10(ctx, base);
loc_832D41CC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d4214
	if (!ctx.cr6.eq) goto loc_832D4214;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832d4214
	if (ctx.cr6.eq) goto loc_832D4214;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_832D41EC:
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832d4204
	if (!ctx.cr6.eq) goto loc_832D4204;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x832d4230
	if (ctx.cr6.eq) goto loc_832D4230;
loc_832D4204:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832d41ec
	if (ctx.cr6.lt) goto loc_832D41EC;
loc_832D4214:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832d41a8
	if (ctx.cr6.lt) goto loc_832D41A8;
loc_832D4224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4228:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832D4230:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x832d4228
	goto loc_832D4228;
}

__attribute__((alias("__imp__sub_832D4240"))) PPC_WEAK_FUNC(sub_832D4240);
PPC_FUNC_IMPL(__imp__sub_832D4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D4248;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r9,-21168
	ctx.r27.s64 = ctx.r9.s64 + -21168;
	// addi r26,r10,6424
	ctx.r26.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4288
	if (!ctx.cr6.eq) goto loc_832D4288;
	// lwz r28,1188(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d42b8
	goto loc_832D42B8;
loc_832D4288:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d42ac
	if (ctx.cr6.eq) goto loc_832D42AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D42AC;
	sub_8320CF10(ctx, base);
loc_832D42AC:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r28,32
	ctx.r28.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D42B8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832d432c
	if (!ctx.cr6.lt) goto loc_832D432C;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,6840
	ctx.r29.s64 = ctx.r11.s64 + 6840;
loc_832D42D8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d42fc
	if (ctx.cr6.eq) goto loc_832D42FC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,748
	ctx.r7.s64 = 748;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D42FC;
	sub_8320CF10(ctx, base);
loc_832D42FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d431c
	if (ctx.cr6.eq) goto loc_832D431C;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832d431c
	if (!ctx.cr6.eq) goto loc_832D431C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x832d4338
	if (ctx.cr6.eq) goto loc_832D4338;
loc_832D431C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x832d42d8
	if (ctx.cr6.lt) goto loc_832D42D8;
loc_832D432C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4330:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832D4338:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x832d4330
	goto loc_832D4330;
}

__attribute__((alias("__imp__sub_832D434C"))) PPC_WEAK_FUNC(sub_832D434C);
PPC_FUNC_IMPL(__imp__sub_832D434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4350"))) PPC_WEAK_FUNC(sub_832D4350);
PPC_FUNC_IMPL(__imp__sub_832D4350) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D4360"))) PPC_WEAK_FUNC(sub_832D4360);
PPC_FUNC_IMPL(__imp__sub_832D4360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832D4368;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x832d43a4
	if (!ctx.cr6.eq) goto loc_832D43A4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83214f50
	ctx.lr = 0x832D43A0;
	sub_83214F50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_832D43A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r10,-21168
	ctx.r24.s64 = ctx.r10.s64 + -21168;
	// addi r23,r9,6424
	ctx.r23.s64 = ctx.r9.s64 + 6424;
	// bne cr6,0x832d43cc
	if (!ctx.cr6.eq) goto loc_832D43CC;
	// lwz r25,1188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d43fc
	goto loc_832D43FC;
loc_832D43CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d43f0
	if (ctx.cr6.eq) goto loc_832D43F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,571
	ctx.r7.s64 = 571;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D43F0;
	sub_8320CF10(ctx, base);
loc_832D43F0:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r25,32
	ctx.r25.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D43FC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832d44e4
	if (!ctx.cr6.lt) goto loc_832D44E4;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r10,6876
	ctx.r27.s64 = ctx.r10.s64 + 6876;
	// addi r26,r11,6840
	ctx.r26.s64 = ctx.r11.s64 + 6840;
loc_832D4424:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d4448
	if (ctx.cr6.eq) goto loc_832D4448;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,579
	ctx.r7.s64 = 579;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4448;
	sub_8320CF10(ctx, base);
loc_832D4448:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d44d4
	if (!ctx.cr6.eq) goto loc_832D44D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d44d4
	if (!ctx.cr6.gt) goto loc_832D44D4;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_832D4468:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x832d44c0
	if (!ctx.cr6.eq) goto loc_832D44C0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x832d4494
	if (!ctx.cr6.eq) goto loc_832D4494;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83214f50
	ctx.lr = 0x832D448C;
	sub_83214F50(ctx, base);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, ctx.xer);
	// b 0x832d44bc
	goto loc_832D44BC;
loc_832D4494:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// beq cr6,0x832d44b4
	if (ctx.cr6.eq) goto loc_832D44B4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,606
	ctx.r7.s64 = 606;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D44B4;
	sub_8320CF10(ctx, base);
loc_832D44B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
loc_832D44BC:
	// beq cr6,0x832d44f0
	if (ctx.cr6.eq) goto loc_832D44F0;
loc_832D44C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d4468
	if (ctx.cr6.lt) goto loc_832D4468;
loc_832D44D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d4424
	if (ctx.cr6.lt) goto loc_832D4424;
loc_832D44E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D44E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_832D44F0:
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// b 0x832d44e8
	goto loc_832D44E8;
}

__attribute__((alias("__imp__sub_832D4500"))) PPC_WEAK_FUNC(sub_832D4500);
PPC_FUNC_IMPL(__imp__sub_832D4500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D4508;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,6424
	ctx.r28.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4558
	if (!ctx.cr6.eq) goto loc_832D4558;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,811
	ctx.r7.s64 = 811;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4558;
	sub_8320CF10(ctx, base);
loc_832D4558:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d457c
	if (!ctx.cr6.eq) goto loc_832D457C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,812
	ctx.r7.s64 = 812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D457C;
	sub_8320CF10(ctx, base);
loc_832D457C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d45a0
	if (!ctx.cr6.eq) goto loc_832D45A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,813
	ctx.r7.s64 = 813;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D45A0;
	sub_8320CF10(ctx, base);
loc_832D45A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d45c4
	if (!ctx.cr6.eq) goto loc_832D45C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D45C4;
	sub_8320CF10(ctx, base);
loc_832D45C4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x832d461c
	if (ctx.cr6.eq) goto loc_832D461C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x832d461c
	if (ctx.cr6.eq) goto loc_832D461C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x832d4600
	if (ctx.cr6.eq) goto loc_832D4600;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832d4600
	if (ctx.cr6.eq) goto loc_832D4600;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6920
	ctx.r5.s64 = ctx.r11.s64 + 6920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,833
	ctx.r7.s64 = 833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4600;
	sub_8320CF10(ctx, base);
loc_832D4600:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d4240
	ctx.lr = 0x832D4618;
	sub_832D4240(ctx, base);
	// b 0x832d465c
	goto loc_832D465C;
loc_832D461C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d4648
	if (ctx.cr6.eq) goto loc_832D4648;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d4360
	ctx.lr = 0x832D4644;
	sub_832D4360(ctx, base);
	// b 0x832d465c
	goto loc_832D465C;
loc_832D4648:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d4110
	ctx.lr = 0x832D465C;
	sub_832D4110(ctx, base);
loc_832D465C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4664"))) PPC_WEAK_FUNC(sub_832D4664);
PPC_FUNC_IMPL(__imp__sub_832D4664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4668"))) PPC_WEAK_FUNC(sub_832D4668);
PPC_FUNC_IMPL(__imp__sub_832D4668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D4670;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6424
	ctx.r24.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d46c4
	if (!ctx.cr6.eq) goto loc_832D46C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,882
	ctx.r7.s64 = 882;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D46C4;
	sub_8320CF10(ctx, base);
loc_832D46C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d46e8
	if (!ctx.cr6.eq) goto loc_832D46E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,883
	ctx.r7.s64 = 883;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D46E8;
	sub_8320CF10(ctx, base);
loc_832D46E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d470c
	if (!ctx.cr6.eq) goto loc_832D470C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,884
	ctx.r7.s64 = 884;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D470C;
	sub_8320CF10(ctx, base);
loc_832D470C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d4730
	if (!ctx.cr6.eq) goto loc_832D4730;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,885
	ctx.r7.s64 = 885;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4730;
	sub_8320CF10(ctx, base);
loc_832D4730:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d4500
	ctx.lr = 0x832D474C;
	sub_832D4500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4790
	if (!ctx.cr0.eq) goto loc_832D4790;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f60
	ctx.lr = 0x832D476C;
	sub_832D3F60(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x832d4790
	if (ctx.cr0.eq) goto loc_832D4790;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6992
	ctx.r5.s64 = ctx.r11.s64 + 6992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,893
	ctx.r7.s64 = 893;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4790;
	sub_8320CF10(ctx, base);
loc_832D4790:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D479C"))) PPC_WEAK_FUNC(sub_832D479C);
PPC_FUNC_IMPL(__imp__sub_832D479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D47A0"))) PPC_WEAK_FUNC(sub_832D47A0);
PPC_FUNC_IMPL(__imp__sub_832D47A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D47A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,7056
	ctx.r29.s64 = ctx.r10.s64 + 7056;
	// bge cr6,0x832d47ec
	if (!ctx.cr6.lt) goto loc_832D47EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7040
	ctx.r5.s64 = ctx.r11.s64 + 7040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,248
	ctx.r7.s64 = 248;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D47EC;
	sub_8320CF10(ctx, base);
loc_832D47EC:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// blt cr6,0x832d4810
	if (ctx.cr6.lt) goto loc_832D4810;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7012
	ctx.r5.s64 = ctx.r11.s64 + 7012;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,249
	ctx.r7.s64 = 249;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4810;
	sub_8320CF10(ctx, base);
loc_832D4810:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D483C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4848"))) PPC_WEAK_FUNC(sub_832D4848);
PPC_FUNC_IMPL(__imp__sub_832D4848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D4850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,7056
	ctx.r29.s64 = ctx.r10.s64 + 7056;
	// bge cr6,0x832d4894
	if (!ctx.cr6.lt) goto loc_832D4894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7040
	ctx.r5.s64 = ctx.r11.s64 + 7040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,283
	ctx.r7.s64 = 283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4894;
	sub_8320CF10(ctx, base);
loc_832D4894:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// blt cr6,0x832d48b8
	if (ctx.cr6.lt) goto loc_832D48B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7156
	ctx.r5.s64 = ctx.r11.s64 + 7156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,284
	ctx.r7.s64 = 284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D48B8;
	sub_8320CF10(ctx, base);
loc_832D48B8:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D48E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D48EC"))) PPC_WEAK_FUNC(sub_832D48EC);
PPC_FUNC_IMPL(__imp__sub_832D48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D48F0"))) PPC_WEAK_FUNC(sub_832D48F0);
PPC_FUNC_IMPL(__imp__sub_832D48F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D48F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d4928
	if (!ctx.cr6.eq) goto loc_832D4928;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,7192
	ctx.r6.s64 = ctx.r11.s64 + 7192;
	// addi r5,r10,7184
	ctx.r5.s64 = ctx.r10.s64 + 7184;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,285
	ctx.r7.s64 = 285;
	// bl 0x8320cf10
	ctx.lr = 0x832D4928;
	sub_8320CF10(ctx, base);
loc_832D4928:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49b0
	if (ctx.cr6.eq) goto loc_832D49B0;
	// b 0x832d499c
	goto loc_832D499C;
loc_832D4938:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4940;
	sub_83214130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x832d4978
	goto loc_832D4978;
loc_832D4948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4950;
	sub_83214130(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832148b0
	ctx.lr = 0x832D495C;
	sub_832148B0(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x832148b0
	ctx.lr = 0x832D4964;
	sub_832148B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x832d2fe8
	ctx.lr = 0x832D4970;
	sub_832D2FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4978;
	sub_832140F8(ctx, base);
loc_832D4978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213db8
	ctx.lr = 0x832D4980;
	sub_83213DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d4948
	if (!ctx.cr0.eq) goto loc_832D4948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213538
	ctx.lr = 0x832D4990;
	sub_83213538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4998;
	sub_832140F8(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
loc_832D499C:
	// bl 0x83213db8
	ctx.lr = 0x832D49A0;
	sub_83213DB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d4938
	if (!ctx.cr0.eq) goto loc_832D4938;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x83213538
	ctx.lr = 0x832D49B0;
	sub_83213538(ctx, base);
loc_832D49B0:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49c0
	if (ctx.cr6.eq) goto loc_832D49C0;
	// bl 0x83312d70
	ctx.lr = 0x832D49C0;
	sub_83312D70(ctx, base);
loc_832D49C0:
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49d0
	if (ctx.cr6.eq) goto loc_832D49D0;
	// bl 0x832d2d68
	ctx.lr = 0x832D49D0;
	sub_832D2D68(ctx, base);
loc_832D49D0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D49E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D49F0"))) PPC_WEAK_FUNC(sub_832D49F0);
PPC_FUNC_IMPL(__imp__sub_832D49F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D49F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4a44
	if (!ctx.cr6.eq) goto loc_832D4A44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,371
	ctx.r7.s64 = 371;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A44;
	sub_8320CF10(ctx, base);
loc_832D4A44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d4a68
	if (!ctx.cr6.eq) goto loc_832D4A68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7392
	ctx.r5.s64 = ctx.r11.s64 + 7392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A68;
	sub_8320CF10(ctx, base);
loc_832D4A68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d4a8c
	if (!ctx.cr6.eq) goto loc_832D4A8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7384
	ctx.r5.s64 = ctx.r11.s64 + 7384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,373
	ctx.r7.s64 = 373;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A8C;
	sub_8320CF10(ctx, base);
loc_832D4A8C:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D4A98;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d4bec
	if (ctx.cr0.eq) goto loc_832D4BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D4AA8;
	sub_83214A80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D4AB0;
	sub_83214A80(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832d2ee8
	ctx.lr = 0x832D4AB8;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d4af4
	if (!ctx.cr0.eq) goto loc_832D4AF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7312
	ctx.r5.s64 = ctx.r11.s64 + 7312;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4ADC;
	sub_8320CF10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832148b0
	ctx.lr = 0x832D4AE4;
	sub_832148B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832148b0
	ctx.lr = 0x832D4AEC;
	sub_832148B0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832d4bf0
	goto loc_832D4BF0;
loc_832D4AF4:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x83214cc0
	ctx.lr = 0x832D4B04;
	sub_83214CC0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214cc0
	ctx.lr = 0x832D4B10;
	sub_83214CC0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x833125b0
	ctx.lr = 0x832D4B28;
	sub_833125B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d4b40
	if (ctx.cr0.eq) goto loc_832D4B40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83312670
	ctx.lr = 0x832D4B38;
	sub_83312670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832d4b98
	goto loc_832D4B98;
loc_832D4B40:
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832145c8
	ctx.lr = 0x832D4B54;
	sub_832145C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d4b78
	if (!ctx.cr0.eq) goto loc_832D4B78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7288
	ctx.r5.s64 = ctx.r11.s64 + 7288;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4B78;
	sub_8320CF10(ctx, base);
loc_832D4B78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832138c0
	ctx.lr = 0x832D4B84;
	sub_832138C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83312808
	ctx.lr = 0x832D4B98;
	sub_83312808(ctx, base);
loc_832D4B98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213768
	ctx.lr = 0x832D4BA4;
	sub_83213768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213648
	ctx.lr = 0x832D4BAC;
	sub_83213648(ctx, base);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// ble cr6,0x832d4bec
	if (!ctx.cr6.gt) goto loc_832D4BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213e90
	ctx.lr = 0x832D4BBC;
	sub_83213E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4BC4;
	sub_83214130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832148b0
	ctx.lr = 0x832D4BD0;
	sub_832148B0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832148b0
	ctx.lr = 0x832D4BD8;
	sub_832148B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832d2fe8
	ctx.lr = 0x832D4BE4;
	sub_832D2FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4BEC;
	sub_832140F8(ctx, base);
loc_832D4BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4BF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4BF8"))) PPC_WEAK_FUNC(sub_832D4BF8);
PPC_FUNC_IMPL(__imp__sub_832D4BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D4C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4c4c
	if (!ctx.cr6.eq) goto loc_832D4C4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,201
	ctx.r7.s64 = 201;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C4C;
	sub_8320CF10(ctx, base);
loc_832D4C4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d4c70
	if (!ctx.cr6.eq) goto loc_832D4C70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C70;
	sub_8320CF10(ctx, base);
loc_832D4C70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d4c94
	if (!ctx.cr6.eq) goto loc_832D4C94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2416
	ctx.r5.s64 = ctx.r11.s64 + -2416;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C94;
	sub_8320CF10(ctx, base);
loc_832D4C94:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d4cb8
	if (!ctx.cr6.eq) goto loc_832D4CB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4CB8;
	sub_8320CF10(ctx, base);
loc_832D4CB8:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D4CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d4cf4
	if (!ctx.cr0.eq) goto loc_832D4CF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7576
	ctx.r5.s64 = ctx.r11.s64 + 7576;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4CEC;
	sub_8320CF10(ctx, base);
loc_832D4CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d4db8
	goto loc_832D4DB8;
loc_832D4CF4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// bl 0x833126f8
	ctx.lr = 0x832D4D1C;
	sub_833126F8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4d50
	if (!ctx.cr0.eq) goto loc_832D4D50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,229
	ctx.r7.s64 = 229;
	// addi r5,r11,7520
	ctx.r5.s64 = ctx.r11.s64 + 7520;
loc_832D4D34:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4D44;
	sub_8320CF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d48f0
	ctx.lr = 0x832D4D4C;
	sub_832D48F0(ctx, base);
	// b 0x832d4cec
	goto loc_832D4CEC;
loc_832D4D50:
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832145c8
	ctx.lr = 0x832D4D64;
	sub_832145C8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4d80
	if (!ctx.cr0.eq) goto loc_832D4D80;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,242
	ctx.r7.s64 = 242;
	// addi r5,r11,7460
	ctx.r5.s64 = ctx.r11.s64 + 7460;
	// b 0x832d4d34
	goto loc_832D4D34;
loc_832D4D80:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x832d2ca8
	ctx.lr = 0x832D4D98;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4db4
	if (!ctx.cr0.eq) goto loc_832D4DB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r5,r11,7400
	ctx.r5.s64 = ctx.r11.s64 + 7400;
	// b 0x832d4d34
	goto loc_832D4D34;
loc_832D4DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832D4DB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4DC0"))) PPC_WEAK_FUNC(sub_832D4DC0);
PPC_FUNC_IMPL(__imp__sub_832D4DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832D4DC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,7192
	ctx.r28.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4e08
	if (!ctx.cr6.eq) goto loc_832D4E08;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7392
	ctx.r5.s64 = ctx.r11.s64 + 7392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,496
	ctx.r7.s64 = 496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E08;
	sub_8320CF10(ctx, base);
loc_832D4E08:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x832d4e2c
	if (!ctx.cr6.eq) goto loc_832D4E2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7384
	ctx.r5.s64 = ctx.r11.s64 + 7384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E2C;
	sub_8320CF10(ctx, base);
loc_832D4E2C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83215e08
	ctx.lr = 0x832D4E34;
	sub_83215E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83215e08
	ctx.lr = 0x832D4E40;
	sub_83215E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d4e68
	if (!ctx.cr6.eq) goto loc_832D4E68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7856
	ctx.r5.s64 = ctx.r11.s64 + 7856;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E68;
	sub_8320CF10(ctx, base);
loc_832D4E68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d4e8c
	if (!ctx.cr6.eq) goto loc_832D4E8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7848
	ctx.r5.s64 = ctx.r11.s64 + 7848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,517
	ctx.r7.s64 = 517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E8C;
	sub_8320CF10(ctx, base);
loc_832D4E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3f50
	ctx.lr = 0x832D4E94;
	sub_832D3F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f50
	ctx.lr = 0x832D4EA0;
	sub_832D3F50(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x832d4ec4
	if (!ctx.cr6.eq) goto loc_832D4EC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7804
	ctx.r5.s64 = ctx.r11.s64 + 7804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,518
	ctx.r7.s64 = 518;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4EC4;
	sub_8320CF10(ctx, base);
loc_832D4EC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3f58
	ctx.lr = 0x832D4ECC;
	sub_832D3F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f58
	ctx.lr = 0x832D4ED8;
	sub_832D3F58(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x832d5044
	if (!ctx.cr6.lt) goto loc_832D5044;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r10,7760
	ctx.r26.s64 = ctx.r10.s64 + 7760;
	// addi r25,r9,7716
	ctx.r25.s64 = ctx.r9.s64 + 7716;
	// addi r24,r8,7668
	ctx.r24.s64 = ctx.r8.s64 + 7668;
	// addi r27,r11,7620
	ctx.r27.s64 = ctx.r11.s64 + 7620;
loc_832D4F08:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83215270
	ctx.lr = 0x832D4F18;
	sub_83215270(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5030
	if (ctx.cr6.eq) goto loc_832D5030;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83215270
	ctx.lr = 0x832D4F34;
	sub_83215270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5044
	if (ctx.cr6.eq) goto loc_832D5044;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832d4f94
	if (ctx.cr6.eq) goto loc_832D4F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832d4f70
	if (ctx.cr6.lt) goto loc_832D4F70;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,554
	ctx.r7.s64 = 554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4F70;
	sub_8320CF10(ctx, base);
loc_832D4F70:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832d4f94
	if (ctx.cr6.lt) goto loc_832D4F94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4F94;
	sub_8320CF10(ctx, base);
loc_832D4F94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D4F98:
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832d4ff4
	if (ctx.cr6.eq) goto loc_832D4FF4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x832d4fd0
	if (ctx.cr6.lt) goto loc_832D4FD0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4FD0;
	sub_8320CF10(ctx, base);
loc_832D4FD0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x832d4ff4
	if (ctx.cr6.lt) goto loc_832D4FF4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4FF4;
	sub_8320CF10(ctx, base);
loc_832D4FF4:
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832d5044
	if (!ctx.cr6.eq) goto loc_832D5044;
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832d5044
	if (!ctx.cr6.eq) goto loc_832D5044;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x832d4f98
	if (ctx.cr6.lt) goto loc_832D4F98;
loc_832D5030:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x832d4f08
	if (ctx.cr6.lt) goto loc_832D4F08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d5048
	goto loc_832D5048;
loc_832D5044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D5048:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5050"))) PPC_WEAK_FUNC(sub_832D5050);
PPC_FUNC_IMPL(__imp__sub_832D5050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D5058;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D507C;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5158
	if (ctx.cr0.eq) goto loc_832D5158;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5090;
	sub_83214BF0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D50A0;
	sub_83214BF0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x833125b0
	ctx.lr = 0x832D50B8;
	sub_833125B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5158
	if (ctx.cr0.eq) goto loc_832D5158;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83312670
	ctx.lr = 0x832D50C8;
	sub_83312670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83213648
	ctx.lr = 0x832D50D0;
	sub_83213648(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne 0x832d5104
	if (!ctx.cr0.eq) goto loc_832D5104;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7928
	ctx.r5.s64 = ctx.r11.s64 + 7928;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,685
	ctx.r7.s64 = 685;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5104;
	sub_8320CF10(ctx, base);
loc_832D5104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D510C;
	sub_832139F8(ctx, base);
	// b 0x832d5150
	goto loc_832D5150;
loc_832D5110:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5118;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83215a08
	ctx.lr = 0x832D5128;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5144
	if (ctx.cr0.eq) goto loc_832D5144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83215a08
	ctx.lr = 0x832D513C;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5164
	if (!ctx.cr0.eq) goto loc_832D5164;
loc_832D5144:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214088
	ctx.lr = 0x832D5150;
	sub_83214088(ctx, base);
loc_832D5150:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d5110
	if (!ctx.cr0.eq) goto loc_832D5110;
loc_832D5158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D515C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_832D5164:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832d4dc0
	ctx.lr = 0x832D5170;
	sub_832D4DC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5190
	if (!ctx.cr0.eq) goto loc_832D5190;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7864
	ctx.r5.s64 = ctx.r11.s64 + 7864;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,699
	ctx.r7.s64 = 699;
	// bl 0x8320cf10
	ctx.lr = 0x832D5190;
	sub_8320CF10(ctx, base);
loc_832D5190:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83214a80
	ctx.lr = 0x832D5198;
	sub_83214A80(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83214a80
	ctx.lr = 0x832D51A0;
	sub_83214A80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832ebea8
	ctx.lr = 0x832D51B0;
	sub_832EBEA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832ebfb0
	ctx.lr = 0x832D51C0;
	sub_832EBFB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213f68
	ctx.lr = 0x832D51CC;
	sub_83213F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832136a0
	ctx.lr = 0x832D51D8;
	sub_832136A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d515c
	goto loc_832D515C;
}

__attribute__((alias("__imp__sub_832D51E0"))) PPC_WEAK_FUNC(sub_832D51E0);
PPC_FUNC_IMPL(__imp__sub_832D51E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x832D51E8;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r17,r11,-21168
	ctx.r17.s64 = ctx.r11.s64 + -21168;
	// addi r16,r10,7192
	ctx.r16.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d522c
	if (!ctx.cr6.eq) goto loc_832D522C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,792
	ctx.r7.s64 = 792;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D522C;
	sub_8320CF10(ctx, base);
loc_832D522C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x832d5250
	if (!ctx.cr6.eq) goto loc_832D5250;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,793
	ctx.r7.s64 = 793;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5250;
	sub_8320CF10(ctx, base);
loc_832D5250:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x832d5274
	if (!ctx.cr6.eq) goto loc_832D5274;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,794
	ctx.r7.s64 = 794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5274;
	sub_8320CF10(ctx, base);
loc_832D5274:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5280;
	sub_83214BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5290;
	sub_83214BF0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D52A0;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// std r28,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r28.u64);
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// std r28,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r28.u64);
	// bl 0x83218098
	ctx.lr = 0x832D52D0;
	sub_83218098(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83218098
	ctx.lr = 0x832D52E0;
	sub_83218098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x83213648
	ctx.lr = 0x832D52E8;
	sub_83213648(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83213648
	ctx.lr = 0x832D52F4;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d5444
	if (ctx.cr6.eq) goto loc_832D5444;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D530C;
	sub_832139F8(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r22,r10,7384
	ctx.r22.s64 = ctx.r10.s64 + 7384;
	// addi r21,r9,7972
	ctx.r21.s64 = ctx.r9.s64 + 7972;
	// addi r20,r11,7392
	ctx.r20.s64 = ctx.r11.s64 + 7392;
loc_832D532C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5334;
	sub_83214130(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x832d5354
	if (!ctx.cr0.eq) goto loc_832D5354;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,826
	ctx.r7.s64 = 826;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5354;
	sub_8320CF10(ctx, base);
loc_832D5354:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215a08
	ctx.lr = 0x832D5360;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5430
	if (ctx.cr0.eq) goto loc_832D5430;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D5370;
	sub_832139F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d5430
	if (ctx.cr6.eq) goto loc_832D5430;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_832D5384:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d53a4
	if (!ctx.cr6.eq) goto loc_832D53A4;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,840
	ctx.r7.s64 = 840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D53A4;
	sub_8320CF10(ctx, base);
loc_832D53A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83214130
	ctx.lr = 0x832D53AC;
	sub_83214130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d53cc
	if (!ctx.cr0.eq) goto loc_832D53CC;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,843
	ctx.r7.s64 = 843;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D53CC;
	sub_8320CF10(ctx, base);
loc_832D53CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d5400
	if (!ctx.cr6.eq) goto loc_832D5400;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215a08
	ctx.lr = 0x832D53E4;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d53f8
	if (ctx.cr0.eq) goto loc_832D53F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832d540c
	goto loc_832D540C;
loc_832D53F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832D5400:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d5420
	if (!ctx.cr6.eq) goto loc_832D5420;
loc_832D540C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d4dc0
	ctx.lr = 0x832D5418;
	sub_832D4DC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5450
	if (!ctx.cr0.eq) goto loc_832D5450;
loc_832D5420:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d5384
	if (ctx.cr6.lt) goto loc_832D5384;
loc_832D5430:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83214088
	ctx.lr = 0x832D543C;
	sub_83214088(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x832d532c
	if (!ctx.cr0.eq) goto loc_832D532C;
loc_832D5444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D5448:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_832D5450:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D5458;
	sub_83214A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D5460;
	sub_83214A80(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832ebea8
	ctx.lr = 0x832D5470;
	sub_832EBEA8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832ebfb0
	ctx.lr = 0x832D5480;
	sub_832EBFB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d5448
	goto loc_832D5448;
}

__attribute__((alias("__imp__sub_832D5488"))) PPC_WEAK_FUNC(sub_832D5488);
PPC_FUNC_IMPL(__imp__sub_832D5488) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x832ebbc0
	ctx.lr = 0x832D54C0;
	sub_832EBBC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D54D0"))) PPC_WEAK_FUNC(sub_832D54D0);
PPC_FUNC_IMPL(__imp__sub_832D54D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832eadf0
	sub_832EADF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D54D8"))) PPC_WEAK_FUNC(sub_832D54D8);
PPC_FUNC_IMPL(__imp__sub_832D54D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D54E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5524
	if (!ctx.cr6.eq) goto loc_832D5524;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,521
	ctx.r7.s64 = 521;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5524;
	sub_8320CF10(ctx, base);
loc_832D5524:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d5548
	if (!ctx.cr6.eq) goto loc_832D5548;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,522
	ctx.r7.s64 = 522;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5548;
	sub_8320CF10(ctx, base);
loc_832D5548:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d556c
	if (!ctx.cr6.eq) goto loc_832D556C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,523
	ctx.r7.s64 = 523;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D556C;
	sub_8320CF10(ctx, base);
loc_832D556C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5594
	if (!ctx.cr6.eq) goto loc_832D5594;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8040
	ctx.r5.s64 = ctx.r11.s64 + 8040;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,526
	ctx.r7.s64 = 526;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5594;
	sub_8320CF10(ctx, base);
loc_832D5594:
	// addic. r23,r26,8
	ctx.xer.ca = ctx.r26.u32 > 4294967287;
	ctx.r23.s64 = ctx.r26.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x832d55b8
	if (!ctx.cr0.eq) goto loc_832D55B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8024
	ctx.r5.s64 = ctx.r11.s64 + 8024;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,527
	ctx.r7.s64 = 527;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D55B8;
	sub_8320CF10(ctx, base);
loc_832D55B8:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832d88f0
	ctx.lr = 0x832D55CC;
	sub_832D88F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d56a0
	if (!ctx.cr0.eq) goto loc_832D56A0;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832D55F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d5614
	if (!ctx.cr0.eq) goto loc_832D5614;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8012
	ctx.r5.s64 = ctx.r11.s64 + 8012;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5614;
	sub_8320CF10(ctx, base);
loc_832D5614:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D5624;
	sub_82CB1160(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,36
	ctx.r4.s64 = 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d567c
	if (!ctx.cr0.eq) goto loc_832D567C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8000
	ctx.r5.s64 = ctx.r11.s64 + 8000;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D565C;
	sub_8320CF10(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,7988
	ctx.r5.s64 = ctx.r11.s64 + 7988;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,581
	ctx.r7.s64 = 581;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5678;
	sub_8320CF10(ctx, base);
	// b 0x832d56ac
	goto loc_832D56AC;
loc_832D567C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d8778
	ctx.lr = 0x832D569C;
	sub_832D8778(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_832D56A0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_832D56AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D56B8"))) PPC_WEAK_FUNC(sub_832D56B8);
PPC_FUNC_IMPL(__imp__sub_832D56B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D56C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5700
	if (!ctx.cr6.eq) goto loc_832D5700;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,637
	ctx.r7.s64 = 637;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5700;
	sub_8320CF10(ctx, base);
loc_832D5700:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d5724
	if (!ctx.cr6.eq) goto loc_832D5724;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5724;
	sub_8320CF10(ctx, base);
loc_832D5724:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eade8
	ctx.lr = 0x832D572C;
	sub_832EADE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d574c
	if (!ctx.cr0.eq) goto loc_832D574C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8232
	ctx.r5.s64 = ctx.r11.s64 + 8232;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,641
	ctx.r7.s64 = 641;
	// bl 0x8320cf10
	ctx.lr = 0x832D574C;
	sub_8320CF10(ctx, base);
loc_832D574C:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2ee8
	ctx.lr = 0x832D5754;
	sub_832D2EE8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d577c
	if (!ctx.cr0.eq) goto loc_832D577C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,5772
	ctx.r5.s64 = ctx.r11.s64 + 5772;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,647
	ctx.r7.s64 = 647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5778;
	sub_8320CF10(ctx, base);
	// b 0x832d5834
	goto loc_832D5834;
loc_832D577C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
loc_832D5788:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb2f0
	ctx.lr = 0x832D5794;
	sub_832EB2F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d54d8
	ctx.lr = 0x832D57A4;
	sub_832D54D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x832d5788
	if (ctx.cr6.lt) goto loc_832D5788;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb118
	ctx.lr = 0x832D57C4;
	sub_832EB118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832d54d8
	ctx.lr = 0x832D57D4;
	sub_832D54D8(ctx, base);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb1a8
	ctx.lr = 0x832D57E0;
	sub_832EB1A8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x832d5818
	if (!ctx.cr0.eq) goto loc_832D5818;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eaf78
	ctx.lr = 0x832D57F0;
	sub_832EAF78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832d5828
	if (ctx.cr6.eq) goto loc_832D5828;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8180
	ctx.r5.s64 = ctx.r11.s64 + 8180;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,671
	ctx.r7.s64 = 671;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5814;
	sub_8320CF10(ctx, base);
	// b 0x832d5828
	goto loc_832D5828;
loc_832D5818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x832d54d8
	ctx.lr = 0x832D5824;
	sub_832D54D8(ctx, base);
	// stw r3,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r3.u32);
loc_832D5828:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb0c0
	ctx.lr = 0x832D5830;
	sub_832EB0C0(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_832D5834:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5840"))) PPC_WEAK_FUNC(sub_832D5840);
PPC_FUNC_IMPL(__imp__sub_832D5840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D5848;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,8088
	ctx.r28.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5894
	if (!ctx.cr6.eq) goto loc_832D5894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,733
	ctx.r7.s64 = 733;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5894;
	sub_8320CF10(ctx, base);
loc_832D5894:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d58b8
	if (!ctx.cr6.eq) goto loc_832D58B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,734
	ctx.r7.s64 = 734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D58B8;
	sub_8320CF10(ctx, base);
loc_832D58B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d58dc
	if (!ctx.cr6.eq) goto loc_832D58DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8504
	ctx.r5.s64 = ctx.r11.s64 + 8504;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,735
	ctx.r7.s64 = 735;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D58DC;
	sub_8320CF10(ctx, base);
loc_832D58DC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5908
	if (!ctx.cr6.eq) goto loc_832D5908;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8464
	ctx.r5.s64 = ctx.r11.s64 + 8464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,738
	ctx.r7.s64 = 738;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5908;
	sub_8320CF10(ctx, base);
loc_832D5908:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d5930
	if (!ctx.cr0.eq) goto loc_832D5930;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8436
	ctx.r5.s64 = ctx.r11.s64 + 8436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5930;
	sub_8320CF10(ctx, base);
loc_832D5930:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d5958
	if (!ctx.cr6.eq) goto loc_832D5958;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8408
	ctx.r5.s64 = ctx.r11.s64 + 8408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5958;
	sub_8320CF10(ctx, base);
loc_832D5958:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x832d5ac0
	if (!ctx.cr0.eq) goto loc_832D5AC0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832d89e8
	ctx.lr = 0x832D597C;
	sub_832D89E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x832d59a4
	if (ctx.cr6.eq) goto loc_832D59A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8376
	ctx.r5.s64 = ctx.r11.s64 + 8376;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,754
	ctx.r7.s64 = 754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D59A4;
	sub_8320CF10(ctx, base);
loc_832D59A4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5a50
	if (ctx.cr6.eq) goto loc_832D5A50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x832d59c0
	if (ctx.cr6.lt) goto loc_832D59C0;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// ble cr6,0x832d59dc
	if (!ctx.cr6.gt) goto loc_832D59DC;
loc_832D59C0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8312
	ctx.r5.s64 = ctx.r11.s64 + 8312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,762
	ctx.r7.s64 = 762;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D59DC;
	sub_8320CF10(ctx, base);
loc_832D59DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5a04
	if (!ctx.cr6.eq) goto loc_832D5A04;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8276
	ctx.r5.s64 = ctx.r11.s64 + 8276;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,766
	ctx.r7.s64 = 766;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5A04;
	sub_8320CF10(ctx, base);
loc_832D5A04:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r25,71
	ctx.r11.s64 = ctx.r25.s64 + 71;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,15
	ctx.r11.s64 = ctx.r25.s64 + 15;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x83213f68
	ctx.lr = 0x832D5A4C;
	sub_83213F68(ctx, base);
	// bl 0x832140f8
	ctx.lr = 0x832D5A50;
	sub_832140F8(ctx, base);
loc_832D5A50:
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,8256
	ctx.r30.s64 = ctx.r11.s64 + 8256;
	// beq 0x832d5a8c
	if (ctx.cr0.eq) goto loc_832D5A8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5A8C;
	sub_8320CF10(ctx, base);
loc_832D5A8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x832d5ac0
	if (ctx.cr0.eq) goto loc_832D5AC0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,795
	ctx.r7.s64 = 795;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5AC0;
	sub_8320CF10(ctx, base);
loc_832D5AC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5ACC"))) PPC_WEAK_FUNC(sub_832D5ACC);
PPC_FUNC_IMPL(__imp__sub_832D5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D5AD0"))) PPC_WEAK_FUNC(sub_832D5AD0);
PPC_FUNC_IMPL(__imp__sub_832D5AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D5AD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5b18
	if (!ctx.cr6.eq) goto loc_832D5B18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,833
	ctx.r7.s64 = 833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B18;
	sub_8320CF10(ctx, base);
loc_832D5B18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d5b3c
	if (!ctx.cr6.eq) goto loc_832D5B3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8520
	ctx.r5.s64 = ctx.r11.s64 + 8520;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,834
	ctx.r7.s64 = 834;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B3C;
	sub_8320CF10(ctx, base);
loc_832D5B3C:
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// addi r26,r11,8256
	ctx.r26.s64 = ctx.r11.s64 + 8256;
loc_832D5B54:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x832d5840
	ctx.lr = 0x832D5B68;
	sub_832D5840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d5b88
	if (ctx.cr0.eq) goto loc_832D5B88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,845
	ctx.r7.s64 = 845;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B88;
	sub_8320CF10(ctx, base);
loc_832D5B88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x832d5b54
	if (ctx.cr6.lt) goto loc_832D5B54;
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x832d5840
	ctx.lr = 0x832D5BB4;
	sub_832D5840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d5bd4
	if (ctx.cr0.eq) goto loc_832D5BD4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,855
	ctx.r7.s64 = 855;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5BD4;
	sub_8320CF10(ctx, base);
loc_832D5BD4:
	// stw r23,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r23.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x832d5840
	ctx.lr = 0x832D5BEC;
	sub_832D5840(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d5c0c
	if (ctx.cr0.eq) goto loc_832D5C0C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,864
	ctx.r7.s64 = 864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C0C;
	sub_8320CF10(ctx, base);
loc_832D5C0C:
	// stw r23,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r23.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832eadf0
	ctx.lr = 0x832D5C18;
	sub_832EADF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2fe8
	ctx.lr = 0x832D5C24;
	sub_832D2FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5C30"))) PPC_WEAK_FUNC(sub_832D5C30);
PPC_FUNC_IMPL(__imp__sub_832D5C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D5C38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5c78
	if (!ctx.cr6.eq) goto loc_832D5C78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,942
	ctx.r7.s64 = 942;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C78;
	sub_8320CF10(ctx, base);
loc_832D5C78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d5c9c
	if (!ctx.cr6.eq) goto loc_832D5C9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,943
	ctx.r7.s64 = 943;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C9C;
	sub_8320CF10(ctx, base);
loc_832D5C9C:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2ee8
	ctx.lr = 0x832D5CA4;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5cc8
	if (!ctx.cr0.eq) goto loc_832D5CC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8568
	ctx.r5.s64 = ctx.r11.s64 + 8568;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,949
	ctx.r7.s64 = 949;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5CC8;
	sub_8320CF10(ctx, base);
loc_832D5CC8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// subf r27,r29,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r26,r11,8552
	ctx.r26.s64 = ctx.r11.s64 + 8552;
loc_832D5CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d00
	if (!ctx.cr6.eq) goto loc_832D5D00;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,955
	ctx.r7.s64 = 955;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D00;
	sub_8320CF10(ctx, base);
loc_832D5D00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r10,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne 0x832d5cdc
	if (!ctx.cr0.eq) goto loc_832D5CDC;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d48
	if (!ctx.cr6.eq) goto loc_832D5D48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8540
	ctx.r5.s64 = ctx.r11.s64 + 8540;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,961
	ctx.r7.s64 = 961;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D48;
	sub_8320CF10(ctx, base);
loc_832D5D48:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d84
	if (!ctx.cr6.eq) goto loc_832D5D84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8528
	ctx.r5.s64 = ctx.r11.s64 + 8528;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D84;
	sub_8320CF10(ctx, base);
loc_832D5D84:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x832eaf18
	ctx.lr = 0x832D5DA4;
	sub_832EAF18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5DB0"))) PPC_WEAK_FUNC(sub_832D5DB0);
PPC_FUNC_IMPL(__imp__sub_832D5DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D5DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5e68
	if (!ctx.cr0.eq) goto loc_832D5E68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,8088
	ctx.r29.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5e20
	if (!ctx.cr6.eq) goto loc_832D5E20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8608
	ctx.r5.s64 = ctx.r11.s64 + 8608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1040
	ctx.r7.s64 = 1040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5E20;
	sub_8320CF10(ctx, base);
loc_832D5E20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5e48
	if (!ctx.cr6.eq) goto loc_832D5E48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8584
	ctx.r5.s64 = ctx.r11.s64 + 8584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1041
	ctx.r7.s64 = 1041;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5E48;
	sub_8320CF10(ctx, base);
loc_832D5E48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832D5E68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5E74"))) PPC_WEAK_FUNC(sub_832D5E74);
PPC_FUNC_IMPL(__imp__sub_832D5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D5E78"))) PPC_WEAK_FUNC(sub_832D5E78);
PPC_FUNC_IMPL(__imp__sub_832D5E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D5E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,63
	ctx.r11.s64 = ctx.r29.s64 + 63;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d5ecc
	if (ctx.cr6.eq) goto loc_832D5ECC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,8088
	ctx.r6.s64 = ctx.r11.s64 + 8088;
	// addi r5,r10,8616
	ctx.r5.s64 = ctx.r10.s64 + 8616;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1082
	ctx.r7.s64 = 1082;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5ECC;
	sub_8320CF10(ctx, base);
loc_832D5ECC:
	// mulli r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 * 20;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r9,r10,92
	ctx.r9.s64 = ctx.r10.s64 + 92;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832D5EE4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832d5ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832D5EE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83213768
	ctx.lr = 0x832D5F04;
	sub_83213768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5F18"))) PPC_WEAK_FUNC(sub_832D5F18);
PPC_FUNC_IMPL(__imp__sub_832D5F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D5F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x83213648
	ctx.lr = 0x832D5F38;
	sub_83213648(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,8088
	ctx.r26.s64 = ctx.r10.s64 + 8088;
	// bne 0x832d5f6c
	if (!ctx.cr0.eq) goto loc_832D5F6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,8684
	ctx.r5.s64 = ctx.r11.s64 + 8684;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5F6C;
	sub_8320CF10(ctx, base);
loc_832D5F6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213a98
	ctx.lr = 0x832D5F74;
	sub_83213A98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5F7C;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832d5ff0
	if (!ctx.cr6.lt) goto loc_832D5FF0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r25,r11,8672
	ctx.r25.s64 = ctx.r11.s64 + 8672;
loc_832D5FA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214018
	ctx.lr = 0x832D5FAC;
	sub_83214018(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5fcc
	if (!ctx.cr0.eq) goto loc_832D5FCC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5FCC;
	sub_8320CF10(ctx, base);
loc_832D5FCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5FD4;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d5fa0
	if (ctx.cr6.lt) goto loc_832D5FA0;
loc_832D5FF0:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5ff0
	if (ctx.cr0.eq) goto loc_832D5FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213e90
	ctx.lr = 0x832D6018;
	sub_83213E90(ctx, base);
	// bl 0x832140f8
	ctx.lr = 0x832D601C;
	sub_832140F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832D6030:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832d6030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832D6030;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x83213768
	ctx.lr = 0x832D606C;
	sub_83213768(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6078"))) PPC_WEAK_FUNC(sub_832D6078);
PPC_FUNC_IMPL(__imp__sub_832D6078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D6080;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r27,r9,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,8088
	ctx.r25.s64 = ctx.r10.s64 + 8088;
	// blt cr6,0x832d60c0
	if (ctx.cr6.lt) goto loc_832D60C0;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// ble cr6,0x832d60dc
	if (!ctx.cr6.gt) goto loc_832D60DC;
loc_832D60C0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,8752
	ctx.r5.s64 = ctx.r11.s64 + 8752;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1233
	ctx.r7.s64 = 1233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D60DC;
	sub_8320CF10(ctx, base);
loc_832D60DC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832ceb20
	ctx.lr = 0x832D60E8;
	sub_832CEB20(ctx, base);
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x832d6198
	if (!ctx.cr6.lt) goto loc_832D6198;
	// addi r11,r30,63
	ctx.r11.s64 = ctx.r30.s64 + 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d6128
	if (ctx.cr6.eq) goto loc_832D6128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832d5e78
	ctx.lr = 0x832D6124;
	sub_832D5E78(ctx, base);
	// b 0x832d61a8
	goto loc_832D61A8;
loc_832D6128:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D6148;
	sub_832D5DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d6174
	if (!ctx.cr0.eq) goto loc_832D6174;
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x83213768
	ctx.lr = 0x832D616C;
	sub_83213768(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x832d61a8
	goto loc_832D61A8;
loc_832D6174:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x832d6198
	if (ctx.cr6.eq) goto loc_832D6198;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,8720
	ctx.r5.s64 = ctx.r11.s64 + 8720;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1277
	ctx.r7.s64 = 1277;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6198;
	sub_8320CF10(ctx, base);
loc_832D6198:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d5f18
	ctx.lr = 0x832D61A8;
	sub_832D5F18(ctx, base);
loc_832D61A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D61B0"))) PPC_WEAK_FUNC(sub_832D61B0);
PPC_FUNC_IMPL(__imp__sub_832D61B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x832D61B8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r30,32(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r17,r9,r31
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r19,r11,-21168
	ctx.r19.s64 = ctx.r11.s64 + -21168;
	// addi r18,r10,8088
	ctx.r18.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d6210
	if (!ctx.cr6.eq) goto loc_832D6210;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,8964
	ctx.r5.s64 = ctx.r11.s64 + 8964;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1337
	ctx.r7.s64 = 1337;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6210;
	sub_8320CF10(ctx, base);
loc_832D6210:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x832d623c
	if (ctx.cr6.eq) goto loc_832D623C;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// beq cr6,0x832d623c
	if (ctx.cr6.eq) goto loc_832D623C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,8900
	ctx.r5.s64 = ctx.r11.s64 + 8900;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1340
	ctx.r7.s64 = 1340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D623C;
	sub_8320CF10(ctx, base);
loc_832D623C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d6270
	if (ctx.cr0.eq) goto loc_832D6270;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,8852
	ctx.r5.s64 = ctx.r11.s64 + 8852;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1343
	ctx.r7.s64 = 1343;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6270;
	sub_8320CF10(ctx, base);
loc_832D6270:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x832d6280
	if (!ctx.cr6.eq) goto loc_832D6280;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x832d62a8
	goto loc_832D62A8;
loc_832D6280:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// beq cr6,0x832d62a4
	if (ctx.cr6.eq) goto loc_832D62A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,8820
	ctx.r5.s64 = ctx.r11.s64 + 8820;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1354
	ctx.r7.s64 = 1354;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D62A4;
	sub_8320CF10(ctx, base);
loc_832D62A4:
	// li r4,4
	ctx.r4.s64 = 4;
loc_832D62A8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832ceb20
	ctx.lr = 0x832D62B0;
	sub_832CEB20(ctx, base);
	// addi r11,r29,71
	ctx.r11.s64 = ctx.r29.s64 + 71;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// add r28,r23,r11
	ctx.r28.u64 = ctx.r23.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x832d63b0
	if (!ctx.cr6.gt) goto loc_832D63B0;
	// addi r11,r29,63
	ctx.r11.s64 = ctx.r29.s64 + 63;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r22,r11,8684
	ctx.r22.s64 = ctx.r11.s64 + 8684;
loc_832D62E8:
	// lwzx r11,r20,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d63b0
	if (ctx.cr6.eq) goto loc_832D63B0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83213648
	ctx.lr = 0x832D62FC;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d6318
	if (!ctx.cr0.eq) goto loc_832D6318;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1375
	ctx.r7.s64 = 1375;
	// bl 0x8320cf10
	ctx.lr = 0x832D6318;
	sub_8320CF10(ctx, base);
loc_832D6318:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83213e90
	ctx.lr = 0x832D6320;
	sub_83213E90(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x83214130
	ctx.lr = 0x832D6328;
	sub_83214130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D6334;
	sub_832140F8(ctx, base);
	// mulli r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 * 20;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832d6358
	if (!ctx.cr6.eq) goto loc_832D6358;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r20,r31
	PPC_STORE_U32(ctx.r20.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x832d6390
	goto loc_832D6390;
loc_832D6358:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D636C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stwx r10,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
loc_832D6390:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// bgt cr6,0x832d62e8
	if (ctx.cr6.gt) goto loc_832D62E8;
loc_832D63B0:
	// addi r11,r29,63
	ctx.r11.s64 = ctx.r29.s64 + 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d63dc
	if (ctx.cr6.eq) goto loc_832D63DC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x832d5e78
	ctx.lr = 0x832D63D8;
	sub_832D5E78(ctx, base);
	// b 0x832d6444
	goto loc_832D6444;
loc_832D63DC:
	// addi r5,r21,4
	ctx.r5.s64 = ctx.r21.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D63E8;
	sub_832D5DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d6410
	if (!ctx.cr0.eq) goto loc_832D6410;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x83213768
	ctx.lr = 0x832D6408;
	sub_83213768(ctx, base);
	// stw r3,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r3.u32);
	// b 0x832d6444
	goto loc_832D6444;
loc_832D6410:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x832d6434
	if (ctx.cr6.eq) goto loc_832D6434;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,8720
	ctx.r5.s64 = ctx.r11.s64 + 8720;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1447
	ctx.r7.s64 = 1447;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6434;
	sub_8320CF10(ctx, base);
loc_832D6434:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832d5f18
	ctx.lr = 0x832D6444;
	sub_832D5F18(ctx, base);
loc_832D6444:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D644C"))) PPC_WEAK_FUNC(sub_832D644C);
PPC_FUNC_IMPL(__imp__sub_832D644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6450"))) PPC_WEAK_FUNC(sub_832D6450);
PPC_FUNC_IMPL(__imp__sub_832D6450) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D6464"))) PPC_WEAK_FUNC(sub_832D6464);
PPC_FUNC_IMPL(__imp__sub_832D6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6468"))) PPC_WEAK_FUNC(sub_832D6468);
PPC_FUNC_IMPL(__imp__sub_832D6468) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D647C"))) PPC_WEAK_FUNC(sub_832D647C);
PPC_FUNC_IMPL(__imp__sub_832D647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6480"))) PPC_WEAK_FUNC(sub_832D6480);
PPC_FUNC_IMPL(__imp__sub_832D6480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x832D6488;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r21,r11,-21168
	ctx.r21.s64 = ctx.r11.s64 + -21168;
	// addi r20,r10,8088
	ctx.r20.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d64d0
	if (!ctx.cr6.eq) goto loc_832D64D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,1501
	ctx.r7.s64 = 1501;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D64D0;
	sub_8320CF10(ctx, base);
loc_832D64D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d64f4
	if (!ctx.cr6.eq) goto loc_832D64F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,1502
	ctx.r7.s64 = 1502;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D64F4;
	sub_8320CF10(ctx, base);
loc_832D64F4:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,11108
	ctx.r28.s64 = ctx.r11.s64 + 11108;
	// addi r23,r31,60
	ctx.r23.s64 = ctx.r31.s64 + 60;
	// addi r24,r25,4
	ctx.r24.s64 = ctx.r25.s64 + 4;
loc_832D6508:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r27,32(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6550
	if (!ctx.cr6.eq) goto loc_832D6550;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6078
	ctx.lr = 0x832D6530;
	sub_832D6078(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8330acc8
	ctx.lr = 0x832D6544;
	sub_8330ACC8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
	// b 0x832d655c
	goto loc_832D655C;
loc_832D6550:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83213950
	ctx.lr = 0x832D655C;
	sub_83213950(ctx, base);
loc_832D655C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// blt cr6,0x832d6508
	if (ctx.cr6.lt) goto loc_832D6508;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d65ac
	if (!ctx.cr6.eq) goto loc_832D65AC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x832eaf78
	ctx.lr = 0x832D6588;
	sub_832EAF78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832d65ac
	if (ctx.cr6.eq) goto loc_832D65AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,8980
	ctx.r5.s64 = ctx.r11.s64 + 8980;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,1540
	ctx.r7.s64 = 1540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D65AC;
	sub_8320CF10(ctx, base);
loc_832D65AC:
	// lwz r29,32(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832d6604
	if (ctx.cr6.eq) goto loc_832D6604;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d65f8
	if (!ctx.cr6.eq) goto loc_832D65F8;
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,32(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x832d61b0
	ctx.lr = 0x832D65DC;
	sub_832D61B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8330acc8
	ctx.lr = 0x832D65F0;
	sub_8330ACC8(ctx, base);
	// ori r26,r26,256
	ctx.r26.u64 = ctx.r26.u64 | 256;
	// b 0x832d6604
	goto loc_832D6604;
loc_832D65F8:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83213950
	ctx.lr = 0x832D6604;
	sub_83213950(ctx, base);
loc_832D6604:
	// lwz r30,28(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6648
	if (!ctx.cr6.eq) goto loc_832D6648;
	// rotlwi r4,r30,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x832d61b0
	ctx.lr = 0x832D662C;
	sub_832D61B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8330acc8
	ctx.lr = 0x832D6640;
	sub_8330ACC8(ctx, base);
	// ori r26,r26,512
	ctx.r26.u64 = ctx.r26.u64 | 512;
	// b 0x832d6654
	goto loc_832D6654;
loc_832D6648:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83213950
	ctx.lr = 0x832D6654;
	sub_83213950(ctx, base);
loc_832D6654:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6660"))) PPC_WEAK_FUNC(sub_832D6660);
PPC_FUNC_IMPL(__imp__sub_832D6660) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_832D6668:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r4.u32);
	// bne 0x832d6668
	if (!ctx.cr0.eq) goto loc_832D6668;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D6690"))) PPC_WEAK_FUNC(sub_832D6690);
PPC_FUNC_IMPL(__imp__sub_832D6690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832D6698;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r27,28
	ctx.r29.s64 = ctx.r27.s64 + 28;
	// addi r23,r27,92
	ctx.r23.s64 = ctx.r27.s64 + 92;
	// li r21,8
	ctx.r21.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r8,8256
	ctx.r24.s64 = ctx.r8.s64 + 8256;
	// addi r26,r9,-21168
	ctx.r26.s64 = ctx.r9.s64 + -21168;
	// addi r22,r10,9040
	ctx.r22.s64 = ctx.r10.s64 + 9040;
	// addi r25,r11,8088
	ctx.r25.s64 = ctx.r11.s64 + 8088;
	// b 0x832d6734
	goto loc_832D6734;
loc_832D66D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214130
	ctx.lr = 0x832D66DC;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6704
	if (!ctx.cr6.eq) goto loc_832D6704;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,339
	ctx.r7.s64 = 339;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6704;
	sub_8320CF10(ctx, base);
loc_832D6704:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x832140f8
	ctx.lr = 0x832D6734;
	sub_832140F8(ctx, base);
loc_832D6734:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x83213db8
	ctx.lr = 0x832D673C;
	sub_83213DB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d66d4
	if (!ctx.cr0.eq) goto loc_832D66D4;
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d67dc
	if (ctx.cr6.eq) goto loc_832D67DC;
	// stw r28,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832d67dc
	goto loc_832D67DC;
loc_832D676C:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d67a8
	if (ctx.cr6.eq) goto loc_832D67A8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d67a8
	if (ctx.cr0.eq) goto loc_832D67A8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D67A8;
	sub_8320CF10(ctx, base);
loc_832D67A8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D67BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d67dc
	if (ctx.cr0.eq) goto loc_832D67DC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D67DC;
	sub_8320CF10(ctx, base);
loc_832D67DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d8bd8
	ctx.lr = 0x832D67E4;
	sub_832D8BD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d676c
	if (!ctx.cr0.eq) goto loc_832D676C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d86d8
	ctx.lr = 0x832D67F4;
	sub_832D86D8(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x83213538
	ctx.lr = 0x832D6800;
	sub_83213538(ctx, base);
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r23,r23,20
	ctx.r23.s64 = ctx.r23.s64 + 20;
	// bne 0x832d6734
	if (!ctx.cr0.eq) goto loc_832D6734;
	// lwz r3,316(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 316);
	// bl 0x832d2d68
	ctx.lr = 0x832D681C;
	sub_832D2D68(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832d6850
	if (ctx.cr0.eq) goto loc_832D6850;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,408
	ctx.r7.s64 = 408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6850;
	sub_8320CF10(ctx, base);
loc_832D6850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D685C"))) PPC_WEAK_FUNC(sub_832D685C);
PPC_FUNC_IMPL(__imp__sub_832D685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6860"))) PPC_WEAK_FUNC(sub_832D6860);
PPC_FUNC_IMPL(__imp__sub_832D6860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832D6868;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r21,r11,-21168
	ctx.r21.s64 = ctx.r11.s64 + -21168;
	// addi r20,r10,8088
	ctx.r20.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d68c0
	if (!ctx.cr6.eq) goto loc_832D68C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-1680
	ctx.r5.s64 = ctx.r11.s64 + -1680;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D68C0;
	sub_8320CF10(ctx, base);
loc_832D68C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d68e4
	if (!ctx.cr6.eq) goto loc_832D68E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D68E4;
	sub_8320CF10(ctx, base);
loc_832D68E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d6908
	if (!ctx.cr6.eq) goto loc_832D6908;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6908;
	sub_8320CF10(ctx, base);
loc_832D6908:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d692c
	if (!ctx.cr6.eq) goto loc_832D692C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-1724
	ctx.r5.s64 = ctx.r11.s64 + -1724;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D692C;
	sub_8320CF10(ctx, base);
loc_832D692C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x832d6950
	if (!ctx.cr6.eq) goto loc_832D6950;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,161
	ctx.r7.s64 = 161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6950;
	sub_8320CF10(ctx, base);
loc_832D6950:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x832d6974
	if (!ctx.cr6.eq) goto loc_832D6974;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-4828
	ctx.r5.s64 = ctx.r11.s64 + -4828;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6974;
	sub_8320CF10(ctx, base);
loc_832D6974:
	// lwz r26,292(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d699c
	if (!ctx.cr6.eq) goto loc_832D699C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-4844
	ctx.r5.s64 = ctx.r11.s64 + -4844;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D699C;
	sub_8320CF10(ctx, base);
loc_832D699C:
	// lwz r28,300(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d69c4
	if (!ctx.cr6.eq) goto loc_832D69C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-4860
	ctx.r5.s64 = ctx.r11.s64 + -4860;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D69C4;
	sub_8320CF10(ctx, base);
loc_832D69C4:
	// li r4,332
	ctx.r4.s64 = 332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x832D69D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d69fc
	if (!ctx.cr0.eq) goto loc_832D69FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D69F8;
	sub_8320CF10(ctx, base);
	// b 0x832d6bdc
	goto loc_832D6BDC;
loc_832D69FC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r26,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r26.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r19,8
	ctx.r19.s64 = 8;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// addi r28,r11,9156
	ctx.r28.s64 = ctx.r11.s64 + 9156;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// addi r26,r10,9120
	ctx.r26.s64 = ctx.r10.s64 + 9120;
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
	// addi r24,r9,9072
	ctx.r24.s64 = ctx.r9.s64 + 9072;
	// stw r17,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r17.u32);
	// stw r18,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r18.u32);
loc_832D6A44:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d6a68
	if (ctx.cr6.eq) goto loc_832D6A68;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,194
	ctx.r7.s64 = 194;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6A68;
	sub_8320CF10(ctx, base);
loc_832D6A68:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d85c8
	ctx.lr = 0x832D6A80;
	sub_832D85C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d6aa0
	if (!ctx.cr0.eq) goto loc_832D6AA0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,200
	ctx.r7.s64 = 200;
	// bl 0x8320cf10
	ctx.lr = 0x832D6AA0;
	sub_8320CF10(ctx, base);
loc_832D6AA0:
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832145c8
	ctx.lr = 0x832D6AB4;
	sub_832145C8(ctx, base);
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d6ad4
	if (!ctx.cr0.eq) goto loc_832D6AD4;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,206
	ctx.r7.s64 = 206;
	// bl 0x8320cf10
	ctx.lr = 0x832D6AD4;
	sub_8320CF10(ctx, base);
loc_832D6AD4:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x832d6a44
	if (!ctx.cr0.eq) goto loc_832D6A44;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x832d2ca8
	ctx.lr = 0x832D6AF8;
	sub_832D2CA8(ctx, base);
	// lwz r28,316(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// addi r27,r31,92
	ctx.r27.s64 = ctx.r31.s64 + 92;
	// li r26,1
	ctx.r26.s64 = 1;
loc_832D6B10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D6B30;
	sub_832D5DB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r26.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x832d6bdc
	if (!ctx.cr0.eq) goto loc_832D6BDC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 5, ctx.xer);
	// ble cr6,0x832d6b10
	if (!ctx.cr6.gt) goto loc_832D6B10;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ceb20
	ctx.lr = 0x832D6B70;
	sub_832CEB20(ctx, base);
	// rlwinm r30,r3,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D6B84;
	sub_832D5DB0(ctx, base);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r26.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bne 0x832d6bdc
	if (!ctx.cr0.eq) goto loc_832D6BDC;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ceb20
	ctx.lr = 0x832D6BAC;
	sub_832CEB20(ctx, base);
	// rlwinm r30,r3,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r31,232
	ctx.r5.s64 = ctx.r31.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D6BC0;
	sub_832D5DB0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r26.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// beq 0x832d6be8
	if (ctx.cr0.eq) goto loc_832D6BE8;
loc_832D6BDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6690
	ctx.lr = 0x832D6BE4;
	sub_832D6690(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D6BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6BF4"))) PPC_WEAK_FUNC(sub_832D6BF4);
PPC_FUNC_IMPL(__imp__sub_832D6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6BF8"))) PPC_WEAK_FUNC(sub_832D6BF8);
PPC_FUNC_IMPL(__imp__sub_832D6BF8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D6C14"))) PPC_WEAK_FUNC(sub_832D6C14);
PPC_FUNC_IMPL(__imp__sub_832D6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6C18"))) PPC_WEAK_FUNC(sub_832D6C18);
PPC_FUNC_IMPL(__imp__sub_832D6C18) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832d6c5c
	if (ctx.cr0.eq) goto loc_832D6C5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D6C5C;
	sub_82CB16F0(ctx, base);
loc_832D6C5C:
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

__attribute__((alias("__imp__sub_832D6C78"))) PPC_WEAK_FUNC(sub_832D6C78);
PPC_FUNC_IMPL(__imp__sub_832D6C78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832D6C8C"))) PPC_WEAK_FUNC(sub_832D6C8C);
PPC_FUNC_IMPL(__imp__sub_832D6C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6C90"))) PPC_WEAK_FUNC(sub_832D6C90);
PPC_FUNC_IMPL(__imp__sub_832D6C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D6C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,9376
	ctx.r30.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d6cd8
	if (!ctx.cr6.eq) goto loc_832D6CD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9356
	ctx.r5.s64 = ctx.r11.s64 + 9356;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6CD8;
	sub_8320CF10(ctx, base);
loc_832D6CD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d6cfc
	if (!ctx.cr6.eq) goto loc_832D6CFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9336
	ctx.r5.s64 = ctx.r11.s64 + 9336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6CFC;
	sub_8320CF10(ctx, base);
loc_832D6CFC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6d24
	if (!ctx.cr6.eq) goto loc_832D6D24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9300
	ctx.r5.s64 = ctx.r11.s64 + 9300;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6D24;
	sub_8320CF10(ctx, base);
loc_832D6D24:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6d4c
	if (!ctx.cr6.eq) goto loc_832D6D4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9268
	ctx.r5.s64 = ctx.r11.s64 + 9268;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6D4C;
	sub_8320CF10(ctx, base);
loc_832D6D4C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6d74
	if (!ctx.cr6.eq) goto loc_832D6D74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9232
	ctx.r5.s64 = ctx.r11.s64 + 9232;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,161
	ctx.r7.s64 = 161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6D74;
	sub_8320CF10(ctx, base);
loc_832D6D74:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d6d9c
	if (!ctx.cr6.eq) goto loc_832D6D9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9200
	ctx.r5.s64 = ctx.r11.s64 + 9200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6D9C;
	sub_8320CF10(ctx, base);
loc_832D6D9C:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,544
	ctx.r4.s64 = 544;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d6dc0
	if (!ctx.cr0.eq) goto loc_832D6DC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d6dfc
	goto loc_832D6DFC;
loc_832D6DC0:
	// li r5,544
	ctx.r5.s64 = 544;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D6DD0;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D6DE8;
	sub_82CB1160(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D6DF8;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832D6DFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6E04"))) PPC_WEAK_FUNC(sub_832D6E04);
PPC_FUNC_IMPL(__imp__sub_832D6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6E08"))) PPC_WEAK_FUNC(sub_832D6E08);
PPC_FUNC_IMPL(__imp__sub_832D6E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D6E10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9376
	ctx.r27.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d6e50
	if (!ctx.cr6.eq) goto loc_832D6E50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,285
	ctx.r7.s64 = 285;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6E50;
	sub_8320CF10(ctx, base);
loc_832D6E50:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x832d6e7c
	if (ctx.cr6.lt) goto loc_832D6E7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,9464
	ctx.r5.s64 = ctx.r11.s64 + 9464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,286
	ctx.r7.s64 = 286;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6E74;
	sub_8320CF10(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x832d6f1c
	goto loc_832D6F1C;
loc_832D6E7C:
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r29,r11,18988
	ctx.r29.s64 = ctx.r11.s64 + 18988;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d6ecc
	if (ctx.cr6.eq) goto loc_832D6ECC;
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d6ecc
	if (ctx.cr0.eq) goto loc_832D6ECC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,299
	ctx.r7.s64 = 299;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6ECC;
	sub_8320CF10(ctx, base);
loc_832D6ECC:
	// lwz r4,336(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d6f08
	if (ctx.cr6.eq) goto loc_832D6F08;
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d6f08
	if (ctx.cr0.eq) goto loc_832D6F08;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,308
	ctx.r7.s64 = 308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6F08;
	sub_8320CF10(ctx, base);
loc_832D6F08:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,296
	ctx.r3.s64 = ctx.r30.s64 + 296;
	// bl 0x82cb16f0
	ctx.lr = 0x832D6F18;
	sub_82CB16F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D6F1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6F24"))) PPC_WEAK_FUNC(sub_832D6F24);
PPC_FUNC_IMPL(__imp__sub_832D6F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D6F28"))) PPC_WEAK_FUNC(sub_832D6F28);
PPC_FUNC_IMPL(__imp__sub_832D6F28) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d6f74
	if (ctx.cr6.lt) goto loc_832D6F74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-20824
	ctx.r6.s64 = ctx.r11.s64 + -20824;
	// addi r5,r10,-20896
	ctx.r5.s64 = ctx.r10.s64 + -20896;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,338
	ctx.r7.s64 = 338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6F74;
	sub_8320CF10(ctx, base);
loc_832D6F74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_832D6F98"))) PPC_WEAK_FUNC(sub_832D6F98);
PPC_FUNC_IMPL(__imp__sub_832D6F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D6FA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,9376
	ctx.r25.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d6fe0
	if (!ctx.cr6.eq) goto loc_832D6FE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,526
	ctx.r7.s64 = 526;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6FE0;
	sub_8320CF10(ctx, base);
loc_832D6FE0:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x832d7004
	if (ctx.cr6.lt) goto loc_832D7004;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,9552
	ctx.r5.s64 = ctx.r11.s64 + 9552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,527
	ctx.r7.s64 = 527;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7004;
	sub_8320CF10(ctx, base);
loc_832D7004:
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r30,336(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,320(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mullw r27,r10,r11
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r26,r11,r9
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bne cr6,0x832d704c
	if (!ctx.cr6.eq) goto loc_832D704C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,9532
	ctx.r5.s64 = ctx.r11.s64 + 9532;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,536
	ctx.r7.s64 = 536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D704C;
	sub_8320CF10(ctx, base);
loc_832D704C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d7070
	if (!ctx.cr6.eq) goto loc_832D7070;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,9512
	ctx.r5.s64 = ctx.r11.s64 + 9512;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,537
	ctx.r7.s64 = 537;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7070;
	sub_8320CF10(ctx, base);
loc_832D7070:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d70b0
	if (!ctx.cr6.gt) goto loc_832D70B0;
loc_832D7080:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x8330acc8
	ctx.lr = 0x832D7098;
	sub_8330ACC8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d7080
	if (ctx.cr6.lt) goto loc_832D7080;
loc_832D70B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D70BC"))) PPC_WEAK_FUNC(sub_832D70BC);
PPC_FUNC_IMPL(__imp__sub_832D70BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D70C0"))) PPC_WEAK_FUNC(sub_832D70C0);
PPC_FUNC_IMPL(__imp__sub_832D70C0) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r11,r3,r3
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfd f10,22528(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22528);
	// li r9,16
	ctx.r9.s64 = 16;
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
loc_832D7118:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// li r10,16
	ctx.r10.s64 = 16;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
loc_832D7124:
	// fmadds f8,f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x832d7134
	if (!ctx.cr6.lt) goto loc_832D7134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832D7134:
	// fadd f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f10.f64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// bne 0x832d7124
	if (!ctx.cr0.eq) goto loc_832D7124;
	// fadd f0,f13,f10
	ctx.f0.f64 = ctx.f13.f64 + ctx.f10.f64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// bne 0x832d7118
	if (!ctx.cr0.eq) goto loc_832D7118;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x832d7160
	if (!ctx.cr6.gt) goto loc_832D7160;
	// li r11,255
	ctx.r11.s64 = 255;
loc_832D7160:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D7168"))) PPC_WEAK_FUNC(sub_832D7168);
PPC_FUNC_IMPL(__imp__sub_832D7168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D7170;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x832d6f28
	ctx.lr = 0x832D7194;
	sub_832D6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,167
	ctx.r4.s64 = 167;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832d6f28
	ctx.lr = 0x832D71A4;
	sub_832D6F28(ctx, base);
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x83214bf0
	ctx.lr = 0x832D71B4;
	sub_83214BF0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x832d71f8
	if (!ctx.cr6.eq) goto loc_832D71F8;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x832d71f8
	if (!ctx.cr6.eq) goto loc_832D71F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d71f0
	if (ctx.cr6.eq) goto loc_832D71F0;
	// lfs f0,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x832d71f8
	if (!ctx.cr6.eq) goto loc_832D71F8;
	// lfs f0,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x832d71f8
	if (!ctx.cr6.eq) goto loc_832D71F8;
loc_832D71F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d7388
	goto loc_832D7388;
loc_832D71F8:
	// lwz r23,336(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// bne cr6,0x832d7260
	if (!ctx.cr6.eq) goto loc_832D7260;
	// lwz r11,296(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x832d7234
	if (ctx.cr6.eq) goto loc_832D7234;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9376
	ctx.r6.s64 = ctx.r11.s64 + 9376;
	// addi r5,r10,9656
	ctx.r5.s64 = ctx.r10.s64 + 9656;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,984
	ctx.r7.s64 = 984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7234;
	sub_8320CF10(ctx, base);
loc_832D7234:
	// lwz r10,296(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832d7368
	if (!ctx.cr6.gt) goto loc_832D7368;
loc_832D7244:
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r11.s64;
	// stbx r10,r11,r23
	PPC_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,296(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d7244
	if (ctx.cr6.lt) goto loc_832D7244;
	// b 0x832d7368
	goto loc_832D7368;
loc_832D7260:
	// lwz r30,296(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x832d72a4
	if (!ctx.cr6.gt) goto loc_832D72A4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832D72A4:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x832d72b0
	if (!ctx.cr6.gt) goto loc_832D72B0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_832D72B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D72C0;
	sub_82CB16F0(ctx, base);
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r23
	ctx.r3.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D72D0;
	sub_82CB16F0(ctx, base);
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x832d7368
	if (ctx.cr6.eq) goto loc_832D7368;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blt cr6,0x832d7368
	if (ctx.cr6.lt) goto loc_832D7368;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,9592
	ctx.r27.s64 = ctx.r11.s64 + 9592;
	// addi r26,r10,-21168
	ctx.r26.s64 = ctx.r10.s64 + -21168;
	// addi r25,r9,9376
	ctx.r25.s64 = ctx.r9.s64 + 9376;
loc_832D7310:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// ble cr6,0x832d7354
	if (!ctx.cr6.gt) goto loc_832D7354;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1025
	ctx.r7.s64 = 1025;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7354;
	sub_8320CF10(ctx, base);
loc_832D7354:
	// stbx r30,r31,r23
	PPC_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r30.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x832d7310
	if (!ctx.cr6.lt) goto loc_832D7310;
loc_832D7368:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// stfs f30,16(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// stw r22,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r22.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832d6f98
	ctx.lr = 0x832D7388;
	sub_832D6F98(ctx, base);
loc_832D7388:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_832D739C"))) PPC_WEAK_FUNC(sub_832D739C);
PPC_FUNC_IMPL(__imp__sub_832D739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D73A0"))) PPC_WEAK_FUNC(sub_832D73A0);
PPC_FUNC_IMPL(__imp__sub_832D73A0) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d73f0
	if (ctx.cr6.eq) goto loc_832D73F0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D73C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6e08
	ctx.lr = 0x832D73D0;
	sub_832D6E08(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x832d73c4
	if (ctx.cr6.lt) goto loc_832D73C4;
	// lwz r3,488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D73F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832D73F0:
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

__attribute__((alias("__imp__sub_832D7408"))) PPC_WEAK_FUNC(sub_832D7408);
PPC_FUNC_IMPL(__imp__sub_832D7408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D7410;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,9376
	ctx.r29.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d745c
	if (!ctx.cr6.eq) goto loc_832D745C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,225
	ctx.r7.s64 = 225;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D745C;
	sub_8320CF10(ctx, base);
loc_832D745C:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x832d7480
	if (ctx.cr6.lt) goto loc_832D7480;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9552
	ctx.r5.s64 = ctx.r11.s64 + 9552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,226
	ctx.r7.s64 = 226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7480;
	sub_8320CF10(ctx, base);
loc_832D7480:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6e08
	ctx.lr = 0x832D748C;
	sub_832D6E08(ctx, base);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mulli r11,r24,44
	ctx.r11.s64 = ctx.r24.s64 * 44;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r29,r30,316
	ctx.r29.s64 = ctx.r30.s64 + 316;
	// andc r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// andc r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// mullw r11,r22,r23
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832D74E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d75ac
	if (!ctx.cr0.eq) goto loc_832D75AC;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r25,r8,r26
	ctx.r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D7544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x832d755c
	if (ctx.cr0.eq) goto loc_832D755C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D755C;
	sub_82CB16F0(ctx, base);
loc_832D755C:
	// stw r29,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d757c
	if (!ctx.cr6.eq) goto loc_832D757C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6e08
	ctx.lr = 0x832D7574;
	sub_832D6E08(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832d75ac
	goto loc_832D75AC;
loc_832D757C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D758C;
	sub_82CB16F0(ctx, base);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// stw r28,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// stw r27,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r27.u32);
	// stw r23,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r23.u32);
	// stw r26,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r26.u32);
	// stwx r22,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r22.u32);
loc_832D75AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D75B4"))) PPC_WEAK_FUNC(sub_832D75B4);
PPC_FUNC_IMPL(__imp__sub_832D75B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D75B8"))) PPC_WEAK_FUNC(sub_832D75B8);
PPC_FUNC_IMPL(__imp__sub_832D75B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D75C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d75f4
	if (!ctx.cr6.eq) goto loc_832D75F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9376
	ctx.r6.s64 = ctx.r11.s64 + 9376;
	// addi r5,r10,9508
	ctx.r5.s64 = ctx.r10.s64 + 9508;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,337
	ctx.r7.s64 = 337;
	// bl 0x8320cf10
	ctx.lr = 0x832D75F4;
	sub_8320CF10(ctx, base);
loc_832D75F4:
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x832d7658
	if (ctx.cr6.lt) goto loc_832D7658;
	// beq cr6,0x832d7644
	if (ctx.cr6.eq) goto loc_832D7644;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x832d7638
	if (ctx.cr6.lt) goto loc_832D7638;
	// beq cr6,0x832d7624
	if (ctx.cr6.eq) goto loc_832D7624;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x832d779c
	goto loc_832D779C;
loc_832D7624:
	// li r28,32
	ctx.r28.s64 = 32;
	// li r30,32
	ctx.r30.s64 = 32;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x832d7664
	goto loc_832D7664;
loc_832D7638:
	// lwz r28,176(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x832d7664
	goto loc_832D7664;
loc_832D7644:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x832d7660
	goto loc_832D7660;
loc_832D7658:
	// lwz r28,172(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_832D7660:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832D7664:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7408
	ctx.lr = 0x832D767C;
	sub_832D7408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d779c
	if (!ctx.cr0.eq) goto loc_832D779C;
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r10,r29,29
	ctx.r10.u64 = ctx.r29.u32 & 0x7;
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// rlwinm r9,r29,3,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x38;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mulli r10,r27,44
	ctx.r10.s64 = ctx.r27.s64 * 44;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// rlwinm r9,r9,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// clrlwi r7,r7,20
	ctx.r7.u64 = ctx.r7.u32 & 0xFFF;
	// rlwimi r8,r29,19,10,12
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 19) & 0x380000) | (ctx.r8.u64 & 0xFFFFFFFFFFC7FFFF);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x832d76f0
	if (!ctx.cr6.gt) goto loc_832D76F0;
	// lwz r8,300(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x832d76f0
	if (!ctx.cr6.gt) goto loc_832D76F0;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r8,r26,21,9,10
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r26.u32, 21) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
	// b 0x832d76fc
	goto loc_832D76FC;
loc_832D76F0:
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r8,r8,0,11,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF9FFFFF;
loc_832D76FC:
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// rlwinm r5,r25,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lwz r8,304(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// clrlwi r7,r25,30
	ctx.r7.u64 = ctx.r25.u32 & 0x3;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r3,r30,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// lwz r6,312(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// twllei r6,0
	// divwu r8,r8,r6
	ctx.r8.u32 = ctx.r8.u32 / ctx.r6.u32;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// srw r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r9,r8,1,22,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x3FE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC01);
	// clrlwi r8,r6,10
	ctx.r8.u64 = ctx.r6.u32 & 0x3FFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// rlwinm r8,r8,0,12,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwimi r5,r9,0,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// oris r8,r8,2048
	ctx.r8.u64 = ctx.r8.u64 | 134217728;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// or r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 | ctx.r28.u64;
	// rlwimi r9,r10,20,12,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFF00000);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// rlwimi r6,r7,9,0,22
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 9) & 0xFFFFFE00) | (ctx.r6.u64 & 0xFFFFFFFF000001FF);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// rlwimi r5,r26,10,20,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r26.u32, 10) & 0xC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_832D779C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D77A4"))) PPC_WEAK_FUNC(sub_832D77A4);
PPC_FUNC_IMPL(__imp__sub_832D77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D77A8"))) PPC_WEAK_FUNC(sub_832D77A8);
PPC_FUNC_IMPL(__imp__sub_832D77A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d77e8
	if (!ctx.cr6.eq) goto loc_832D77E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9376
	ctx.r6.s64 = ctx.r11.s64 + 9376;
	// addi r5,r10,9508
	ctx.r5.s64 = ctx.r10.s64 + 9508;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,560
	ctx.r7.s64 = 560;
	// bl 0x8320cf10
	ctx.lr = 0x832D77E8;
	sub_8320CF10(ctx, base);
loc_832D77E8:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d7910
	if (!ctx.cr6.eq) goto loc_832D7910;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d75b8
	ctx.lr = 0x832D7804;
	sub_832D75B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d7910
	if (!ctx.cr0.eq) goto loc_832D7910;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,424(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d7904
	if (ctx.cr6.eq) goto loc_832D7904;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// neg r4,r3
	ctx.r4.s64 = -ctx.r3.s64;
	// lfd f9,22528(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22528);
loc_832D7834:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d78ec
	if (ctx.cr6.eq) goto loc_832D78EC;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// mullw r11,r3,r3
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
loc_832D7870:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r8,16
	ctx.r8.s64 = 16;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
loc_832D788C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// li r7,16
	ctx.r7.s64 = 16;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
loc_832D7898:
	// fmadds f8,f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x832d78a8
	if (!ctx.cr6.lt) goto loc_832D78A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832D78A8:
	// fadd f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f9.f64;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// bne 0x832d7898
	if (!ctx.cr0.eq) goto loc_832D7898;
	// fadd f0,f13,f9
	ctx.f0.f64 = ctx.f13.f64 + ctx.f9.f64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// bne 0x832d788c
	if (!ctx.cr0.eq) goto loc_832D788C;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x832d78d4
	if (!ctx.cr6.gt) goto loc_832D78D4;
	// li r10,255
	ctx.r10.s64 = 255;
loc_832D78D4:
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d7870
	if (ctx.cr6.lt) goto loc_832D7870;
loc_832D78EC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d7834
	if (ctx.cr6.lt) goto loc_832D7834;
loc_832D7904:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f98
	ctx.lr = 0x832D7910;
	sub_832D6F98(ctx, base);
loc_832D7910:
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

__attribute__((alias("__imp__sub_832D7928"))) PPC_WEAK_FUNC(sub_832D7928);
PPC_FUNC_IMPL(__imp__sub_832D7928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D7930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,9376
	ctx.r30.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d7970
	if (!ctx.cr6.eq) goto loc_832D7970;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7970;
	sub_8320CF10(ctx, base);
loc_832D7970:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d7994
	if (!ctx.cr6.eq) goto loc_832D7994;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,644
	ctx.r7.s64 = 644;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7994;
	sub_8320CF10(ctx, base);
loc_832D7994:
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d79b4
	if (!ctx.cr6.eq) goto loc_832D79B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d75b8
	ctx.lr = 0x832D79AC;
	sub_832D75B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d7a94
	if (!ctx.cr0.eq) goto loc_832D7A94;
loc_832D79B4:
	// li r4,573
	ctx.r4.s64 = 573;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832D79C0;
	sub_832D6F28(ctx, base);
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x832d79d4
	if (!ctx.cr6.eq) goto loc_832D79D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d7a94
	goto loc_832D7A94;
loc_832D79D4:
	// lwz r6,340(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,380(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r7,r6,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d7a30
	if (ctx.cr6.eq) goto loc_832D7A30;
	// li r8,255
	ctx.r8.s64 = 255;
loc_832D7A14:
	// divwu r5,r8,r10
	ctx.r5.u32 = ctx.r8.u32 / ctx.r10.u32;
	// twllei r10,0
	// stbx r5,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,255
	ctx.r8.s64 = ctx.r8.s64 + 255;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d7a14
	if (ctx.cr6.lt) goto loc_832D7A14;
loc_832D7A30:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832d7a58
	if (!ctx.cr6.lt) goto loc_832D7A58;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf. r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,255
	ctx.r8.s64 = 255;
	// beq 0x832d7a58
	if (ctx.cr0.eq) goto loc_832D7A58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832D7A4C:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x832d7a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832D7A4C;
loc_832D7A58:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832d7a84
	if (ctx.cr6.eq) goto loc_832D7A84;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832D7A6C:
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x832d7a6c
	if (ctx.cr6.lt) goto loc_832D7A6C;
loc_832D7A84:
	// stfs f1,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d6f98
	ctx.lr = 0x832D7A94;
	sub_832D6F98(ctx, base);
loc_832D7A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D7A9C"))) PPC_WEAK_FUNC(sub_832D7A9C);
PPC_FUNC_IMPL(__imp__sub_832D7A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D7AA0"))) PPC_WEAK_FUNC(sub_832D7AA0);
PPC_FUNC_IMPL(__imp__sub_832D7AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D7AA8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae4
	ctx.lr = 0x832D7AB0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// bl 0x83214bf0
	ctx.lr = 0x832D7AC8;
	sub_83214BF0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x832d6f28
	ctx.lr = 0x832D7AD8;
	sub_832D6F28(ctx, base);
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x83214bf0
	ctx.lr = 0x832D7AE8;
	sub_83214BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,9376
	ctx.r24.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d7b10
	if (!ctx.cr6.eq) goto loc_832D7B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f30,9792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f30.f64 = double(temp.f32);
	// b 0x832d7b44
	goto loc_832D7B44;
loc_832D7B10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d7b20
	if (!ctx.cr6.eq) goto loc_832D7B20;
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
	// b 0x832d7b44
	goto loc_832D7B44;
loc_832D7B20:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,9720
	ctx.r5.s64 = ctx.r11.s64 + 9720;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,885
	ctx.r7.s64 = 885;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7B3C;
	sub_8320CF10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
loc_832D7B44:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f30
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rldicr r9,r23,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x832d7b90
	if (!ctx.cr6.eq) goto loc_832D7B90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x832d7b90
	if (!ctx.cr6.eq) goto loc_832D7B90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d7c48
	goto loc_832D7C48;
loc_832D7B90:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r26,336(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blt 0x832d7c30
	if (ctx.cr0.lt) goto loc_832D7C30;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,9592
	ctx.r27.s64 = ctx.r11.s64 + 9592;
	// lfs f28,-18308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18308);
	ctx.f28.f64 = double(temp.f32);
loc_832D7BD4:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bne cr6,0x832d7be4
	if (!ctx.cr6.eq) goto loc_832D7BE4;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_832D7BE4:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82cb4c00
	ctx.lr = 0x832D7BEC;
	sub_82CB4C00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,255
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 255, ctx.xer);
	// ble cr6,0x832d7c20
	if (!ctx.cr6.gt) goto loc_832D7C20;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,927
	ctx.r7.s64 = 927;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7C20;
	sub_8320CF10(ctx, base);
loc_832D7C20:
	// stbx r28,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r28.u8);
	// fsubs f31,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832d7bd4
	if (!ctx.cr0.lt) goto loc_832D7BD4;
loc_832D7C30:
	// stfs f27,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f98
	ctx.lr = 0x832D7C48;
	sub_832D6F98(ctx, base);
loc_832D7C48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b30
	ctx.lr = 0x832D7C54;
	__restfpr_27(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D7C58"))) PPC_WEAK_FUNC(sub_832D7C58);
PPC_FUNC_IMPL(__imp__sub_832D7C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D7C60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,9376
	ctx.r29.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d7ca4
	if (!ctx.cr6.eq) goto loc_832D7CA4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1057
	ctx.r7.s64 = 1057;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7CA4;
	sub_8320CF10(ctx, base);
loc_832D7CA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d7cc8
	if (!ctx.cr6.eq) goto loc_832D7CC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1058
	ctx.r7.s64 = 1058;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7CC8;
	sub_8320CF10(ctx, base);
loc_832D7CC8:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d7cec
	if (!ctx.cr6.eq) goto loc_832D7CEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d75b8
	ctx.lr = 0x832D7CE0;
	sub_832D75B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d7d94
	if (!ctx.cr0.eq) goto loc_832D7D94;
	// li r27,1
	ctx.r27.s64 = 1;
loc_832D7CEC:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,468(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d7d78
	if (!ctx.cr6.gt) goto loc_832D7D78;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
loc_832D7D04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83214f50
	ctx.lr = 0x832D7D14;
	sub_83214F50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x832d7d5c
	if (ctx.cr6.eq) goto loc_832D7D5C;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832d7d54
	if (!ctx.cr6.gt) goto loc_832D7D54;
loc_832D7D30:
	// srw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d7d30
	if (ctx.cr6.lt) goto loc_832D7D30;
loc_832D7D54:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_832D7D5C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d7d04
	if (ctx.cr6.lt) goto loc_832D7D04;
loc_832D7D78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d7d88
	if (!ctx.cr6.eq) goto loc_832D7D88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d7d94
	goto loc_832D7D94;
loc_832D7D88:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f98
	ctx.lr = 0x832D7D94;
	sub_832D6F98(ctx, base);
loc_832D7D94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D7D9C"))) PPC_WEAK_FUNC(sub_832D7D9C);
PPC_FUNC_IMPL(__imp__sub_832D7D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D7DA0"))) PPC_WEAK_FUNC(sub_832D7DA0);
PPC_FUNC_IMPL(__imp__sub_832D7DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D7DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9376
	ctx.r28.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d7de8
	if (!ctx.cr6.eq) goto loc_832D7DE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,706
	ctx.r7.s64 = 706;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7DE8;
	sub_8320CF10(ctx, base);
loc_832D7DE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d7e0c
	if (!ctx.cr6.eq) goto loc_832D7E0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,707
	ctx.r7.s64 = 707;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7E0C;
	sub_8320CF10(ctx, base);
loc_832D7E0C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d7e2c
	if (!ctx.cr6.eq) goto loc_832D7E2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d75b8
	ctx.lr = 0x832D7E24;
	sub_832D75B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d7e90
	if (!ctx.cr0.eq) goto loc_832D7E90;
loc_832D7E2C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D7E38;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d7e70
	if (ctx.cr0.eq) goto loc_832D7E70;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x832d7e60
	if (!ctx.cr6.gt) goto loc_832D7E60;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x832d7e70
	if (!ctx.cr6.eq) goto loc_832D7E70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7168
	ctx.lr = 0x832D7E5C;
	sub_832D7168(ctx, base);
	// b 0x832d7e90
	goto loc_832D7E90;
loc_832D7E60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7aa0
	ctx.lr = 0x832D7E6C;
	sub_832D7AA0(ctx, base);
	// b 0x832d7e90
	goto loc_832D7E90;
loc_832D7E70:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,18988
	ctx.r5.s64 = ctx.r11.s64 + 18988;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,733
	ctx.r7.s64 = 733;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7E8C;
	sub_8320CF10(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
loc_832D7E90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D7E98"))) PPC_WEAK_FUNC(sub_832D7E98);
PPC_FUNC_IMPL(__imp__sub_832D7E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D7EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,9376
	ctx.r29.s64 = ctx.r10.s64 + 9376;
	// bne cr6,0x832d7ee8
	if (!ctx.cr6.eq) goto loc_832D7EE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9508
	ctx.r5.s64 = ctx.r11.s64 + 9508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,468
	ctx.r7.s64 = 468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7EE8;
	sub_8320CF10(ctx, base);
loc_832D7EE8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d7f0c
	if (!ctx.cr6.eq) goto loc_832D7F0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9796
	ctx.r5.s64 = ctx.r11.s64 + 9796;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,469
	ctx.r7.s64 = 469;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7F0C;
	sub_8320CF10(ctx, base);
loc_832D7F0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d7f30
	if (!ctx.cr6.eq) goto loc_832D7F30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,470
	ctx.r7.s64 = 470;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D7F30;
	sub_8320CF10(ctx, base);
loc_832D7F30:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x832d7f74
	if (ctx.cr6.lt) goto loc_832D7F74;
	// beq cr6,0x832d7f64
	if (ctx.cr6.eq) goto loc_832D7F64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x832d7f58
	if (ctx.cr6.lt) goto loc_832D7F58;
	// bne cr6,0x832d7f88
	if (!ctx.cr6.eq) goto loc_832D7F88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7c58
	ctx.lr = 0x832D7F54;
	sub_832D7C58(ctx, base);
	// b 0x832d7f80
	goto loc_832D7F80;
loc_832D7F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d77a8
	ctx.lr = 0x832D7F60;
	sub_832D77A8(ctx, base);
	// b 0x832d7f80
	goto loc_832D7F80;
loc_832D7F64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7928
	ctx.lr = 0x832D7F70;
	sub_832D7928(ctx, base);
	// b 0x832d7f80
	goto loc_832D7F80;
loc_832D7F74:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d7da0
	ctx.lr = 0x832D7F80;
	sub_832D7DA0(ctx, base);
loc_832D7F80:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d7f90
	if (ctx.cr0.eq) goto loc_832D7F90;
loc_832D7F88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832d7fac
	goto loc_832D7FAC;
loc_832D7F90:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// addi r4,r11,188
	ctx.r4.s64 = ctx.r11.s64 + 188;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82cb1160
	ctx.lr = 0x832D7FA8;
	sub_82CB1160(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_832D7FAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D7FB4"))) PPC_WEAK_FUNC(sub_832D7FB4);
PPC_FUNC_IMPL(__imp__sub_832D7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D7FB8"))) PPC_WEAK_FUNC(sub_832D7FB8);
PPC_FUNC_IMPL(__imp__sub_832D7FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D7FC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832D7FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r25,r10,-21168
	ctx.r25.s64 = ctx.r10.s64 + -21168;
	// addi r24,r11,9856
	ctx.r24.s64 = ctx.r11.s64 + 9856;
	// bne 0x832d8018
	if (!ctx.cr0.eq) goto loc_832D8018;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,94
	ctx.r7.s64 = 94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8018;
	sub_8320CF10(ctx, base);
loc_832D8018:
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832D803C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832d8098
	if (ctx.cr6.eq) goto loc_832D8098;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,9812
	ctx.r29.s64 = ctx.r11.s64 + 9812;
loc_832D8054:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d30f8
	ctx.lr = 0x832D805C;
	sub_832D30F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d808c
	if (!ctx.cr6.eq) goto loc_832D808C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,110
	ctx.r7.s64 = 110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D808C;
	sub_8320CF10(ctx, base);
loc_832D808C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832d8054
	if (!ctx.cr0.eq) goto loc_832D8054;
loc_832D8098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D80A4"))) PPC_WEAK_FUNC(sub_832D80A4);
PPC_FUNC_IMPL(__imp__sub_832D80A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D80A8"))) PPC_WEAK_FUNC(sub_832D80A8);
PPC_FUNC_IMPL(__imp__sub_832D80A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D80B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d80e0
	if (!ctx.cr6.eq) goto loc_832D80E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,9840
	ctx.r5.s64 = ctx.r10.s64 + 9840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x8320cf10
	ctx.lr = 0x832D80E0;
	sub_8320CF10(ctx, base);
loc_832D80E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d8118
	if (!ctx.cr6.gt) goto loc_832D8118;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832D80F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x832d31a0
	ctx.lr = 0x832D8104;
	sub_832D31A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d80f4
	if (ctx.cr6.lt) goto loc_832D80F4;
loc_832D8118:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D812C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8148"))) PPC_WEAK_FUNC(sub_832D8148);
PPC_FUNC_IMPL(__imp__sub_832D8148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D8150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9856
	ctx.r28.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d8194
	if (!ctx.cr6.eq) goto loc_832D8194;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8194;
	sub_8320CF10(ctx, base);
loc_832D8194:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d81d8
	if (!ctx.cr6.eq) goto loc_832D81D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,189
	ctx.r7.s64 = 189;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D81D8;
	sub_8320CF10(ctx, base);
loc_832D81D8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211e00
	ctx.lr = 0x832D81E8;
	sub_83211E00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D81F0"))) PPC_WEAK_FUNC(sub_832D81F0);
PPC_FUNC_IMPL(__imp__sub_832D81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D81F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9856
	ctx.r28.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d8238
	if (!ctx.cr6.eq) goto loc_832D8238;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,220
	ctx.r7.s64 = 220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8238;
	sub_8320CF10(ctx, base);
loc_832D8238:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d827c
	if (!ctx.cr6.eq) goto loc_832D827C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,227
	ctx.r7.s64 = 227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D827C;
	sub_8320CF10(ctx, base);
loc_832D827C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214388
	ctx.lr = 0x832D8288;
	sub_83214388(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8290"))) PPC_WEAK_FUNC(sub_832D8290);
PPC_FUNC_IMPL(__imp__sub_832D8290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D8298;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9856
	ctx.r27.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d82d8
	if (!ctx.cr6.eq) goto loc_832D82D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,261
	ctx.r7.s64 = 261;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D82D8;
	sub_8320CF10(ctx, base);
loc_832D82D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d831c
	if (!ctx.cr6.eq) goto loc_832D831C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,268
	ctx.r7.s64 = 268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D831C;
	sub_8320CF10(ctx, base);
loc_832D831C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211fe8
	ctx.lr = 0x832D8328;
	sub_83211FE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832d8360
	if (ctx.cr0.eq) goto loc_832D8360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83212098
	ctx.lr = 0x832D8338;
	sub_83212098(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d8360
	if (ctx.cr0.eq) goto loc_832D8360;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,9936
	ctx.r5.s64 = ctx.r11.s64 + 9936;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,275
	ctx.r7.s64 = 275;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D835C;
	sub_8320CF10(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D8360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D836C"))) PPC_WEAK_FUNC(sub_832D836C);
PPC_FUNC_IMPL(__imp__sub_832D836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D8370"))) PPC_WEAK_FUNC(sub_832D8370);
PPC_FUNC_IMPL(__imp__sub_832D8370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9856
	ctx.r28.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d83b8
	if (!ctx.cr6.eq) goto loc_832D83B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,311
	ctx.r7.s64 = 311;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D83B8;
	sub_8320CF10(ctx, base);
loc_832D83B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d83fc
	if (!ctx.cr6.eq) goto loc_832D83FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,318
	ctx.r7.s64 = 318;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D83FC;
	sub_8320CF10(ctx, base);
loc_832D83FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212148
	ctx.lr = 0x832D8408;
	sub_83212148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8410"))) PPC_WEAK_FUNC(sub_832D8410);
PPC_FUNC_IMPL(__imp__sub_832D8410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d844c
	if (!ctx.cr6.eq) goto loc_832D844C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,9840
	ctx.r5.s64 = ctx.r10.s64 + 9840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,349
	ctx.r7.s64 = 349;
	// bl 0x8320cf10
	ctx.lr = 0x832D844C;
	sub_8320CF10(ctx, base);
loc_832D844C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d8484
	if (!ctx.cr6.gt) goto loc_832D8484;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832D8460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83212318
	ctx.lr = 0x832D846C;
	sub_83212318(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d8460
	if (ctx.cr6.lt) goto loc_832D8460;
loc_832D8484:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8490"))) PPC_WEAK_FUNC(sub_832D8490);
PPC_FUNC_IMPL(__imp__sub_832D8490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9856
	ctx.r28.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d84d8
	if (!ctx.cr6.eq) goto loc_832D84D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9840
	ctx.r5.s64 = ctx.r11.s64 + 9840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,386
	ctx.r7.s64 = 386;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D84D8;
	sub_8320CF10(ctx, base);
loc_832D84D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d8508
	if (!ctx.cr6.gt) goto loc_832D8508;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,9960
	ctx.r5.s64 = ctx.r11.s64 + 9960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8500;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d8540
	goto loc_832D8540;
loc_832D8508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8538
	if (!ctx.cr6.eq) goto loc_832D8538;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,398
	ctx.r7.s64 = 398;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8538;
	sub_8320CF10(ctx, base);
loc_832D8538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212318
	ctx.lr = 0x832D8540;
	sub_83212318(ctx, base);
loc_832D8540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8548"))) PPC_WEAK_FUNC(sub_832D8548);
PPC_FUNC_IMPL(__imp__sub_832D8548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D8550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d8580
	if (!ctx.cr6.eq) goto loc_832D8580;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,9840
	ctx.r5.s64 = ctx.r10.s64 + 9840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,425
	ctx.r7.s64 = 425;
	// bl 0x8320cf10
	ctx.lr = 0x832D8580;
	sub_8320CF10(ctx, base);
loc_832D8580:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D858C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832d85c0
	if (!ctx.cr6.lt) goto loc_832D85C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d85b0
	if (ctx.cr6.eq) goto loc_832D85B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83212240
	ctx.lr = 0x832D85B0;
	sub_83212240(ctx, base);
loc_832D85B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d858c
	if (ctx.cr6.eq) goto loc_832D858C;
loc_832D85C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D85C8"))) PPC_WEAK_FUNC(sub_832D85C8);
PPC_FUNC_IMPL(__imp__sub_832D85C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D85D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832D85F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,9856
	ctx.r24.s64 = ctx.r10.s64 + 9856;
	// bne 0x832d8628
	if (!ctx.cr0.eq) goto loc_832D8628;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,480
	ctx.r7.s64 = 480;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8628;
	sub_8320CF10(ctx, base);
loc_832D8628:
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832D864C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d8670
	if (!ctx.cr0.eq) goto loc_832D8670;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,10012
	ctx.r5.s64 = ctx.r11.s64 + 10012;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// bl 0x8320cf10
	ctx.lr = 0x832D8670;
	sub_8320CF10(ctx, base);
loc_832D8670:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832d86c8
	if (ctx.cr6.eq) goto loc_832D86C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,9984
	ctx.r29.s64 = ctx.r11.s64 + 9984;
loc_832D8684:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d30f8
	ctx.lr = 0x832D868C;
	sub_832D30F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d86bc
	if (!ctx.cr6.eq) goto loc_832D86BC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,500
	ctx.r7.s64 = 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D86BC;
	sub_8320CF10(ctx, base);
loc_832D86BC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832d8684
	if (!ctx.cr0.eq) goto loc_832D8684;
loc_832D86C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D86D4"))) PPC_WEAK_FUNC(sub_832D86D4);
PPC_FUNC_IMPL(__imp__sub_832D86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D86D8"))) PPC_WEAK_FUNC(sub_832D86D8);
PPC_FUNC_IMPL(__imp__sub_832D86D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D86E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8710
	if (!ctx.cr6.eq) goto loc_832D8710;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,10036
	ctx.r5.s64 = ctx.r10.s64 + 10036;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,531
	ctx.r7.s64 = 531;
	// bl 0x8320cf10
	ctx.lr = 0x832D8710;
	sub_8320CF10(ctx, base);
loc_832D8710:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d8748
	if (!ctx.cr6.gt) goto loc_832D8748;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832D8724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x832d31a0
	ctx.lr = 0x832D8734;
	sub_832D31A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d8724
	if (ctx.cr6.lt) goto loc_832D8724;
loc_832D8748:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D875C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8778"))) PPC_WEAK_FUNC(sub_832D8778);
PPC_FUNC_IMPL(__imp__sub_832D8778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D8780;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9856
	ctx.r27.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d87c8
	if (!ctx.cr6.eq) goto loc_832D87C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,578
	ctx.r7.s64 = 578;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D87C8;
	sub_8320CF10(ctx, base);
loc_832D87C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83312de8
	ctx.lr = 0x832D87D8;
	sub_83312DE8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8820
	if (!ctx.cr6.eq) goto loc_832D8820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,589
	ctx.r7.s64 = 589;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8820;
	sub_8320CF10(ctx, base);
loc_832D8820:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211e00
	ctx.lr = 0x832D8830;
	sub_83211E00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8838"))) PPC_WEAK_FUNC(sub_832D8838);
PPC_FUNC_IMPL(__imp__sub_832D8838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D8840;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9856
	ctx.r27.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d8884
	if (!ctx.cr6.eq) goto loc_832D8884;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,629
	ctx.r7.s64 = 629;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8884;
	sub_8320CF10(ctx, base);
loc_832D8884:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83312de8
	ctx.lr = 0x832D8894;
	sub_83312DE8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d88dc
	if (!ctx.cr6.eq) goto loc_832D88DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,640
	ctx.r7.s64 = 640;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D88DC;
	sub_8320CF10(ctx, base);
loc_832D88DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214388
	ctx.lr = 0x832D88E8;
	sub_83214388(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D88F0"))) PPC_WEAK_FUNC(sub_832D88F0);
PPC_FUNC_IMPL(__imp__sub_832D88F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D88F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9856
	ctx.r27.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d893c
	if (!ctx.cr6.eq) goto loc_832D893C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,683
	ctx.r7.s64 = 683;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D893C;
	sub_8320CF10(ctx, base);
loc_832D893C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83312de8
	ctx.lr = 0x832D894C;
	sub_83312DE8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8994
	if (!ctx.cr6.eq) goto loc_832D8994;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,694
	ctx.r7.s64 = 694;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8994;
	sub_8320CF10(ctx, base);
loc_832D8994:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211fe8
	ctx.lr = 0x832D89A0;
	sub_83211FE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d89d8
	if (ctx.cr0.eq) goto loc_832D89D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212098
	ctx.lr = 0x832D89B0;
	sub_83212098(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d89d8
	if (ctx.cr0.eq) goto loc_832D89D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,9936
	ctx.r5.s64 = ctx.r11.s64 + 9936;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,701
	ctx.r7.s64 = 701;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D89D4;
	sub_8320CF10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832D89D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D89E4"))) PPC_WEAK_FUNC(sub_832D89E4);
PPC_FUNC_IMPL(__imp__sub_832D89E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D89E8"))) PPC_WEAK_FUNC(sub_832D89E8);
PPC_FUNC_IMPL(__imp__sub_832D89E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D89F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,9856
	ctx.r27.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d8a34
	if (!ctx.cr6.eq) goto loc_832D8A34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,746
	ctx.r7.s64 = 746;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8A34;
	sub_8320CF10(ctx, base);
loc_832D8A34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83312de8
	ctx.lr = 0x832D8A44;
	sub_83312DE8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8a8c
	if (!ctx.cr6.eq) goto loc_832D8A8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8A8C;
	sub_8320CF10(ctx, base);
loc_832D8A8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212148
	ctx.lr = 0x832D8A98;
	sub_83212148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8AA0"))) PPC_WEAK_FUNC(sub_832D8AA0);
PPC_FUNC_IMPL(__imp__sub_832D8AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8adc
	if (!ctx.cr6.eq) goto loc_832D8ADC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,10036
	ctx.r5.s64 = ctx.r10.s64 + 10036;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,788
	ctx.r7.s64 = 788;
	// bl 0x8320cf10
	ctx.lr = 0x832D8ADC;
	sub_8320CF10(ctx, base);
loc_832D8ADC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d8b14
	if (!ctx.cr6.gt) goto loc_832D8B14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832D8AF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83212318
	ctx.lr = 0x832D8AFC;
	sub_83212318(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d8af0
	if (ctx.cr6.lt) goto loc_832D8AF0;
loc_832D8B14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8B20"))) PPC_WEAK_FUNC(sub_832D8B20);
PPC_FUNC_IMPL(__imp__sub_832D8B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8B28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,9856
	ctx.r28.s64 = ctx.r10.s64 + 9856;
	// bne cr6,0x832d8b68
	if (!ctx.cr6.eq) goto loc_832D8B68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,10036
	ctx.r5.s64 = ctx.r11.s64 + 10036;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,827
	ctx.r7.s64 = 827;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8B68;
	sub_8320CF10(ctx, base);
loc_832D8B68:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d8b98
	if (!ctx.cr6.gt) goto loc_832D8B98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,10048
	ctx.r5.s64 = ctx.r11.s64 + 10048;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,832
	ctx.r7.s64 = 832;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8B90;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d8bd0
	goto loc_832D8BD0;
loc_832D8B98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d8bc8
	if (!ctx.cr6.eq) goto loc_832D8BC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,839
	ctx.r7.s64 = 839;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8BC8;
	sub_8320CF10(ctx, base);
loc_832D8BC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212318
	ctx.lr = 0x832D8BD0;
	sub_83212318(ctx, base);
loc_832D8BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8BD8"))) PPC_WEAK_FUNC(sub_832D8BD8);
PPC_FUNC_IMPL(__imp__sub_832D8BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D8BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d8c10
	if (!ctx.cr6.eq) goto loc_832D8C10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,9856
	ctx.r6.s64 = ctx.r11.s64 + 9856;
	// addi r5,r10,10036
	ctx.r5.s64 = ctx.r10.s64 + 10036;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,866
	ctx.r7.s64 = 866;
	// bl 0x8320cf10
	ctx.lr = 0x832D8C10;
	sub_8320CF10(ctx, base);
loc_832D8C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D8C1C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832d8c50
	if (!ctx.cr6.lt) goto loc_832D8C50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d8c40
	if (ctx.cr6.eq) goto loc_832D8C40;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83212240
	ctx.lr = 0x832D8C40;
	sub_83212240(ctx, base);
loc_832D8C40:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d8c1c
	if (ctx.cr6.eq) goto loc_832D8C1C;
loc_832D8C50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8C58"))) PPC_WEAK_FUNC(sub_832D8C58);
PPC_FUNC_IMPL(__imp__sub_832D8C58) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,23200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23200);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,23200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23200, ctx.r8.u32);
loc_832D8C78:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r3,r8,26
	ctx.r3.u64 = ctx.r8.u32 & 0x3F;
	// addi r8,r3,4456
	ctx.r8.s64 = ctx.r3.s64 + 4456;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x832d8cd8
	if (ctx.cr6.eq) goto loc_832D8CD8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x832d8c78
	if (ctx.cr6.lt) goto loc_832D8C78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,602
	ctx.r7.s64 = 602;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8CC4;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D8CC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832D8CD8:
	// addi r9,r3,4456
	ctx.r9.s64 = ctx.r3.s64 + 4456;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x832d8cc8
	goto loc_832D8CC8;
}

__attribute__((alias("__imp__sub_832D8CE8"))) PPC_WEAK_FUNC(sub_832D8CE8);
PPC_FUNC_IMPL(__imp__sub_832D8CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,23208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23208);
	// subfic r3,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r3.s64 = 30 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D8D00"))) PPC_WEAK_FUNC(sub_832D8D00);
PPC_FUNC_IMPL(__imp__sub_832D8D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832eb698
	sub_832EB698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8D20"))) PPC_WEAK_FUNC(sub_832D8D20);
PPC_FUNC_IMPL(__imp__sub_832D8D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D8D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x832d8d60
	goto loc_832D8D60;
loc_832D8D44:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x832d8d5c
	if (!ctx.cr6.eq) goto loc_832D8D5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x832d8da8
	if (ctx.cr6.eq) goto loc_832D8DA8;
loc_832D8D5C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_832D8D60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d8d44
	if (!ctx.cr6.eq) goto loc_832D8D44;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d8c58
	ctx.lr = 0x832D8D88;
	sub_832D8C58(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d8db0
	if (!ctx.cr6.eq) goto loc_832D8DB0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x832d8db8
	goto loc_832D8DB8;
loc_832D8DA8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832d8dc8
	goto loc_832D8DC8;
loc_832D8DB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_832D8DB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_832D8DC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8DD0"))) PPC_WEAK_FUNC(sub_832D8DD0);
PPC_FUNC_IMPL(__imp__sub_832D8DD0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x832d8e00
	goto loc_832D8E00;
loc_832D8DE4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x832d8dfc
	if (!ctx.cr6.eq) goto loc_832D8DFC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x832d8e40
	if (ctx.cr6.eq) goto loc_832D8E40;
loc_832D8DFC:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_832D8E00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d8de4
	if (!ctx.cr6.eq) goto loc_832D8DE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1074
	ctx.r7.s64 = 1074;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D8E2C;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D8E30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832D8E40:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832d8e30
	goto loc_832D8E30;
}

__attribute__((alias("__imp__sub_832D8E48"))) PPC_WEAK_FUNC(sub_832D8E48);
PPC_FUNC_IMPL(__imp__sub_832D8E48) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d8eb8
	if (ctx.cr6.eq) goto loc_832D8EB8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832D8EB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_832D8ED8"))) PPC_WEAK_FUNC(sub_832D8ED8);
PPC_FUNC_IMPL(__imp__sub_832D8ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq cr6,0x832d8f34
	if (ctx.cr6.eq) goto loc_832D8F34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_832D8F34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d8f48
	if (!ctx.cr6.eq) goto loc_832D8F48;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x832d8f50
	goto loc_832D8F50;
loc_832D8F48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_832D8F50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8F68"))) PPC_WEAK_FUNC(sub_832D8F68);
PPC_FUNC_IMPL(__imp__sub_832D8F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D8F70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d8fd0
	if (ctx.cr6.eq) goto loc_832D8FD0;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D8FA4;
	sub_82CB1160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D8FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832D8FD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D8FE4"))) PPC_WEAK_FUNC(sub_832D8FE4);
PPC_FUNC_IMPL(__imp__sub_832D8FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D8FE8"))) PPC_WEAK_FUNC(sub_832D8FE8);
PPC_FUNC_IMPL(__imp__sub_832D8FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D8FF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,28(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83310400
	ctx.lr = 0x832D9030;
	sub_83310400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8330fd90
	ctx.lr = 0x832D904C;
	sub_8330FD90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83310030
	ctx.lr = 0x832D906C;
	sub_83310030(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832eb698
	ctx.lr = 0x832D908C;
	sub_832EB698(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,10072
	ctx.r23.s64 = ctx.r10.s64 + 10072;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d90c4
	if (ctx.cr6.eq) goto loc_832D90C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,10228
	ctx.r5.s64 = ctx.r11.s64 + 10228;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1272
	ctx.r7.s64 = 1272;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D90C4;
	sub_8320CF10(ctx, base);
loc_832D90C4:
	// rlwimi r30,r31,7,19,24
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 7) & 0x1F80) | (ctx.r30.u64 & 0xFFFFFFFFFFFFE07F);
	// lwz r31,12024(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12024);
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// rlwinm r10,r30,14,5,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x7FFC000;
	// li r26,3
	ctx.r26.s64 = 3;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r9,0,20,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFC;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r8,0,24,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r10,r11,7,20,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xF80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF07F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r26,2,27,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x1C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE3);
	// rlwimi r11,r9,1,8,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFFFF000001);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,10208
	ctx.r27.s64 = ctx.r11.s64 + 10208;
loc_832D9168:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x832d920c
	if (ctx.cr6.eq) goto loc_832D920C;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x832d9204
	if (ctx.cr6.eq) goto loc_832D9204;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x832d91fc
	if (ctx.cr6.eq) goto loc_832D91FC;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x832d91f4
	if (ctx.cr6.eq) goto loc_832D91F4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x832d91ec
	if (ctx.cr6.eq) goto loc_832D91EC;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x832d91e4
	if (ctx.cr6.eq) goto loc_832D91E4;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// beq cr6,0x832d91dc
	if (ctx.cr6.eq) goto loc_832D91DC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x832d91cc
	if (!ctx.cr6.gt) goto loc_832D91CC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1324
	ctx.r7.s64 = 1324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D91CC;
	sub_8320CF10(ctx, base);
loc_832D91CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x832d9210
	goto loc_832D9210;
loc_832D91DC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832d9210
	goto loc_832D9210;
loc_832D91E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832d9210
	goto loc_832D9210;
loc_832D91EC:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x832d9214
	goto loc_832D9214;
loc_832D91F4:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x832d9214
	goto loc_832D9214;
loc_832D91FC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832d9210
	goto loc_832D9210;
loc_832D9204:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832d9210
	goto loc_832D9210;
loc_832D920C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_832D9210:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832D9214:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x832d9168
	if (ctx.cr6.lt) goto loc_832D9168;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,29,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0xE0000000;
	// rlwimi r10,r11,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r9,0,12,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE00FFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r10,r11,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,18,13,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0x40000) | (ctx.r10.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r10,r11,10,16,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0xFC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,10820(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10820);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x832d92b0
	if (!ctx.cr6.gt) goto loc_832D92B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,10160
	ctx.r5.s64 = ctx.r11.s64 + 10160;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D92B0;
	sub_8320CF10(ctx, base);
loc_832D92B0:
	// lwz r11,12024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12024);
	// lwz r10,10820(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10820);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12024, ctx.r11.u32);
	// stw r10,10820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10820, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D92D0"))) PPC_WEAK_FUNC(sub_832D92D0);
PPC_FUNC_IMPL(__imp__sub_832D92D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D92D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D930C;
	sub_82CB1160(ctx, base);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r30,12024(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12024);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832eb698
	ctx.lr = 0x832D932C;
	sub_832EB698(ctx, base);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r24,r26,7,19,24
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r26.u32, 7) & 0x1F80) | (ctx.r24.u64 & 0xFFFFFFFFFFFFE07F);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// rlwimi r7,r6,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r26,r23,7,23,24
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r23.u32, 7) & 0x180) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFE7F);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r28,27,0,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xF8000000;
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r6,r5,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r23,0,22,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x300;
	// rlwimi r3,r6,3,0,28
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// rlwinm r6,r26,7,16,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xF800;
	// rlwimi r8,r25,26,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r25.u32, 26) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r6,0,19,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwimi r28,r3,2,0,29
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFFC) | (ctx.r28.u64 & 0xFFFFFFFF00000003);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r25,4,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
	// rlwimi r27,r28,2,0,29
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r28.u32, 2) & 0xFFFFFFFC) | (ctx.r27.u64 & 0xFFFFFFFF00000003);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r27,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r5,r5,19
	ctx.r5.u64 = ctx.r5.u32 & 0x1FFF;
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r3,r3,0,28,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFF0000F;
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwimi r28,r7,30,1,1
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r7.u32, 30) & 0x40000000) | (ctx.r28.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwimi r11,r24,14,12,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 14) & 0xFC000) | (ctx.r11.u64 & 0xFFFFFFFFFFF03FFF);
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwimi r11,r24,14,5,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 14) & 0x7E00000) | (ctx.r11.u64 & 0xFFFFFFFFF81FFFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,0,26,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE03F;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r4,r10,5,26,26
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFDF);
	// clrlwi r10,r4,26
	ctx.r10.u64 = ctx.r4.u32 & 0x3F;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwimi r5,r10,3,28,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwimi r10,r9,1,29,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x6) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF9);
	// rlwinm r9,r6,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r23,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3000;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r28,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x832d9498
	if (!ctx.cr6.gt) goto loc_832D9498;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,10160
	ctx.r5.s64 = ctx.r10.s64 + 10160;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1435
	ctx.r7.s64 = 1435;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9498;
	sub_8320CF10(ctx, base);
loc_832D9498:
	// lwz r11,12024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12024);
	// lwz r10,10820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12024, ctx.r11.u32);
	// stw r10,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D94B8"))) PPC_WEAK_FUNC(sub_832D94B8);
PPC_FUNC_IMPL(__imp__sub_832D94B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D94C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,-20824
	ctx.r27.s64 = ctx.r10.s64 + -20824;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832d9508
	if (ctx.cr6.lt) goto loc_832D9508;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20672
	ctx.r5.s64 = ctx.r11.s64 + -20672;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9508;
	sub_8320CF10(ctx, base);
loc_832D9508:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d953c
	if (ctx.cr6.lt) goto loc_832D953C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20744
	ctx.r5.s64 = ctx.r11.s64 + -20744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D953C;
	sub_8320CF10(ctx, base);
loc_832D953C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832D955C;
	sub_832D6F28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D9564"))) PPC_WEAK_FUNC(sub_832D9564);
PPC_FUNC_IMPL(__imp__sub_832D9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D9568"))) PPC_WEAK_FUNC(sub_832D9568);
PPC_FUNC_IMPL(__imp__sub_832D9568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D9570;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// lwz r30,28(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,10072
	ctx.r28.s64 = ctx.r10.s64 + 10072;
	// ble cr6,0x832d95b4
	if (!ctx.cr6.gt) goto loc_832D95B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,10284
	ctx.r5.s64 = ctx.r11.s64 + 10284;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1461
	ctx.r7.s64 = 1461;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D95B4;
	sub_8320CF10(ctx, base);
loc_832D95B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d95d8
	if (!ctx.cr6.eq) goto loc_832D95D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,10244
	ctx.r5.s64 = ctx.r11.s64 + 10244;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1462
	ctx.r7.s64 = 1462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D95D8;
	sub_8320CF10(ctx, base);
loc_832D95D8:
	// addi r11,r31,4196
	ctx.r11.s64 = ctx.r31.s64 + 4196;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d9628
	if (!ctx.cr6.eq) goto loc_832D9628;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x832d9630
	if (!ctx.cr6.eq) goto loc_832D9630;
loc_832D95F8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_832D95FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_832D9604:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,13152
	ctx.r4.s64 = ctx.r30.s64 + 13152;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d8ed8
	ctx.lr = 0x832D961C;
	sub_832D8ED8(ctx, base);
	// lwz r11,13164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13164, ctx.r11.u32);
loc_832D9628:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832D9630:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x832d9644
	if (!ctx.cr6.eq) goto loc_832D9644;
	// lwz r11,23204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x832d95f8
	goto loc_832D95F8;
loc_832D9644:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x832d95fc
	if (!ctx.cr6.eq) goto loc_832D95FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832d9604
	goto loc_832D9604;
}

__attribute__((alias("__imp__sub_832D9658"))) PPC_WEAK_FUNC(sub_832D9658);
PPC_FUNC_IMPL(__imp__sub_832D9658) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9694
	if (ctx.cr6.lt) goto loc_832D9694;
	// beq cr6,0x832d969c
	if (ctx.cr6.eq) goto loc_832D969C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d9688
	if (ctx.cr6.lt) goto loc_832D9688;
	// bne cr6,0x832d969c
	if (!ctx.cr6.eq) goto loc_832D969C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// b 0x832d969c
	goto loc_832D969C;
loc_832D9688:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,4
	ctx.r3.u64 = ctx.r11.u64 | 4;
	// b 0x832d969c
	goto loc_832D969C;
loc_832D9694:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,12
	ctx.r3.u64 = ctx.r11.u64 | 12;
loc_832D969C:
	// rlwinm r11,r10,24,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d96cc
	if (ctx.cr6.lt) goto loc_832D96CC;
	// beq cr6,0x832d96c0
	if (ctx.cr6.eq) goto loc_832D96C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x832d96d4
	if (!ctx.cr6.eq) goto loc_832D96D4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// b 0x832d96d4
	goto loc_832D96D4;
loc_832D96C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,48
	ctx.r3.u64 = ctx.r11.u64 | 48;
	// b 0x832d96d4
	goto loc_832D96D4;
loc_832D96CC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
loc_832D96D4:
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9704
	if (ctx.cr6.lt) goto loc_832D9704;
	// beq cr6,0x832d96f8
	if (ctx.cr6.eq) goto loc_832D96F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,192
	ctx.r3.u64 = ctx.r11.u64 | 192;
	// blr 
	return;
loc_832D96F8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,128
	ctx.r3.u64 = ctx.r11.u64 | 128;
	// blr 
	return;
loc_832D9704:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 | 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D9710"))) PPC_WEAK_FUNC(sub_832D9710);
PPC_FUNC_IMPL(__imp__sub_832D9710) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// lwz r31,10816(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10816);
	// beq cr6,0x832d99fc
	if (ctx.cr6.eq) goto loc_832D99FC;
	// cmplwi cr6,r4,72
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 72, ctx.xer);
	// beq cr6,0x832d99a0
	if (ctx.cr6.eq) goto loc_832D99A0;
	// cmplwi cr6,r4,81
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 81, ctx.xer);
	// beq cr6,0x832d993c
	if (ctx.cr6.eq) goto loc_832D993C;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// beq cr6,0x832d98c8
	if (ctx.cr6.eq) goto loc_832D98C8;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x832d987c
	if (ctx.cr6.eq) goto loc_832D987C;
	// cmplwi cr6,r4,108
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 108, ctx.xer);
	// beq cr6,0x832d9814
	if (ctx.cr6.eq) goto loc_832D9814;
	// cmplwi cr6,r4,109
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 109, ctx.xer);
	// beq cr6,0x832d97a8
	if (ctx.cr6.eq) goto loc_832D97A8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-20984
	ctx.r11.s64 = ctx.r11.s64 + -20984;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x832d9790
	if (ctx.cr6.eq) goto loc_832D9790;
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwimi r8,r11,3,24,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xF8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF07);
	// rlwimi r10,r9,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x832d979c
	goto loc_832D979C;
loc_832D9790:
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwimi r8,r9,4,24,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xF8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF07);
loc_832D979C:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x832d9a70
	goto loc_832D9A70;
loc_832D97A8:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9804
	if (ctx.cr6.lt) goto loc_832D9804;
	// beq cr6,0x832d97fc
	if (ctx.cr6.eq) goto loc_832D97FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d97e0
	if (ctx.cr6.lt) goto loc_832D97E0;
	// beq cr6,0x832d97cc
	if (ctx.cr6.eq) goto loc_832D97CC;
	// li r7,1768
	ctx.r7.s64 = 1768;
	// b 0x832d9a1c
	goto loc_832D9A1C;
loc_832D97CC:
	// li r8,29
	ctx.r8.s64 = 29;
loc_832D97D0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r9,r10,4,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9a60
	goto loc_832D9A60;
loc_832D97E0:
	// li r8,15
	ctx.r8.s64 = 15;
loc_832D97E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r8,1,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
loc_832D97EC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r9,r10,4,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9a68
	goto loc_832D9A68;
loc_832D97FC:
	// li r8,27
	ctx.r8.s64 = 27;
	// b 0x832d97d0
	goto loc_832D97D0;
loc_832D9804:
	// li r8,7
	ctx.r8.s64 = 7;
loc_832D9808:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r8,2,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x832d97ec
	goto loc_832D97EC;
loc_832D9814:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9874
	if (ctx.cr6.lt) goto loc_832D9874;
	// beq cr6,0x832d9858
	if (ctx.cr6.eq) goto loc_832D9858;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d9848
	if (ctx.cr6.lt) goto loc_832D9848;
	// beq cr6,0x832d9838
	if (ctx.cr6.eq) goto loc_832D9838;
	// li r7,1743
	ctx.r7.s64 = 1743;
	// b 0x832d9a1c
	goto loc_832D9A1C;
loc_832D9838:
	// li r10,23
	ctx.r10.s64 = 23;
loc_832D983C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,3,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9a5c
	goto loc_832D9A5C;
loc_832D9848:
	// li r10,11
	ctx.r10.s64 = 11;
loc_832D984C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,4,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9a5c
	goto loc_832D9A5C;
loc_832D9858:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwimi r9,r11,5,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
loc_832D9864:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x832d9a6c
	goto loc_832D9A6C;
loc_832D9874:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x832d983c
	goto loc_832D983C;
loc_832D987C:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d98c0
	if (ctx.cr6.lt) goto loc_832D98C0;
	// beq cr6,0x832d98b8
	if (ctx.cr6.eq) goto loc_832D98B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d98b0
	if (ctx.cr6.lt) goto loc_832D98B0;
	// beq cr6,0x832d98a0
	if (ctx.cr6.eq) goto loc_832D98A0;
	// li r7,1678
	ctx.r7.s64 = 1678;
	// b 0x832d9a1c
	goto loc_832D9A1C;
loc_832D98A0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwimi r9,r11,3,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9864
	goto loc_832D9864;
loc_832D98B0:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x832d984c
	goto loc_832D984C;
loc_832D98B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x832d9a54
	goto loc_832D9A54;
loc_832D98C0:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x832d983c
	goto loc_832D983C;
loc_832D98C8:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9934
	if (ctx.cr6.lt) goto loc_832D9934;
	// beq cr6,0x832d992c
	if (ctx.cr6.eq) goto loc_832D992C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d9924
	if (ctx.cr6.lt) goto loc_832D9924;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9904;
	sub_8320CF10(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// rlwimi r8,r10,0,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
loc_832D9910:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwimi r9,r11,4,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
	// b 0x832d9a6c
	goto loc_832D9A6C;
loc_832D9924:
	// li r8,11
	ctx.r8.s64 = 11;
	// b 0x832d97e4
	goto loc_832D97E4;
loc_832D992C:
	// li r8,21
	ctx.r8.s64 = 21;
	// b 0x832d97d0
	goto loc_832D97D0;
loc_832D9934:
	// li r8,5
	ctx.r8.s64 = 5;
	// b 0x832d9808
	goto loc_832D9808;
loc_832D993C:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d9998
	if (ctx.cr6.lt) goto loc_832D9998;
	// beq cr6,0x832d9990
	if (ctx.cr6.eq) goto loc_832D9990;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832d9988
	if (ctx.cr6.lt) goto loc_832D9988;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1627
	ctx.r7.s64 = 1627;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9978;
	sub_8320CF10(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// rlwimi r8,r10,1,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x832d9910
	goto loc_832D9910;
loc_832D9988:
	// li r8,19
	ctx.r8.s64 = 19;
	// b 0x832d97d0
	goto loc_832D97D0;
loc_832D9990:
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x832d97e4
	goto loc_832D97E4;
loc_832D9998:
	// li r8,17
	ctx.r8.s64 = 17;
	// b 0x832d97d0
	goto loc_832D97D0;
loc_832D99A0:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832d99ec
	if (ctx.cr6.lt) goto loc_832D99EC;
	// beq cr6,0x832d99e4
	if (ctx.cr6.eq) goto loc_832D99E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1716
	ctx.r7.s64 = 1716;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D99D4;
	sub_8320CF10(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r8,r10,3,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x832d9910
	goto loc_832D9910;
loc_832D99E4:
	// li r8,23
	ctx.r8.s64 = 23;
	// b 0x832d97d0
	goto loc_832D97D0;
loc_832D99EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwimi r11,r8,3,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x832d97ec
	goto loc_832D97EC;
loc_832D99FC:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d9a50
	if (ctx.cr6.eq) goto loc_832D9A50;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x832d9a48
	if (ctx.cr6.eq) goto loc_832D9A48;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x832d9a40
	if (ctx.cr6.eq) goto loc_832D9A40;
	// li r7,1699
	ctx.r7.s64 = 1699;
loc_832D9A1C:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r6,r11,10072
	ctx.r6.s64 = ctx.r11.s64 + 10072;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9A3C;
	sub_8320CF10(ctx, base);
	// b 0x832d9a70
	goto loc_832D9A70;
loc_832D9A40:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x832d984c
	goto loc_832D984C;
loc_832D9A48:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x832d983c
	goto loc_832D983C;
loc_832D9A50:
	// li r10,3
	ctx.r10.s64 = 3;
loc_832D9A54:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,5,24,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0xF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF07);
loc_832D9A5C:
	// li r8,5
	ctx.r8.s64 = 5;
loc_832D9A60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r8,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
loc_832D9A68:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832D9A6C:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_832D9A70:
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

__attribute__((alias("__imp__sub_832D9A84"))) PPC_WEAK_FUNC(sub_832D9A84);
PPC_FUNC_IMPL(__imp__sub_832D9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D9A88"))) PPC_WEAK_FUNC(sub_832D9A88);
PPC_FUNC_IMPL(__imp__sub_832D9A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D9A90;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// rlwinm r10,r6,16,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0x3F;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,10816(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10816);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// addi r28,r9,-21168
	ctx.r28.s64 = ctx.r9.s64 + -21168;
	// addi r29,r8,18988
	ctx.r29.s64 = ctx.r8.s64 + 18988;
	// addi r27,r7,10072
	ctx.r27.s64 = ctx.r7.s64 + 10072;
	// bge cr6,0x832d9b14
	if (!ctx.cr6.lt) goto loc_832D9B14;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,4200
	ctx.r10.s64 = ctx.r10.s64 + 4200;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r9,r8,26,0,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 26) & 0xFC000000) | (ctx.r9.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwimi r10,r11,18,8,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFC0000) | (ctx.r10.u64 & 0xFFFFFFFFFF03FFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x832d9b68
	goto loc_832D9B68;
loc_832D9B14:
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x832d9b30
	if (!ctx.cr6.eq) goto loc_832D9B30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,257
	ctx.r10.s64 = 257;
	// rlwimi r11,r10,23,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r11,r10,23,8,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFC0000) | (ctx.r11.u64 & 0xFFFFFFFFFF03FFFF);
	// b 0x832d9b48
	goto loc_832D9B48;
loc_832D9B30:
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bne cr6,0x832d9b50
	if (!ctx.cr6.eq) goto loc_832D9B50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8481
	ctx.r10.s64 = 8481;
	// rlwimi r11,r10,18,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r11,r10,18,8,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFC0000) | (ctx.r11.u64 & 0xFFFFFFFFFF03FFFF);
loc_832D9B48:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832d9b68
	goto loc_832D9B68;
loc_832D9B50:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1865
	ctx.r7.s64 = 1865;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9B68;
	sub_8320CF10(ctx, base);
loc_832D9B68:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x832d9bd8
	if (ctx.cr6.gt) goto loc_832D9BD8;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,10320
	ctx.r12.s64 = ctx.r12.s64 + 10320;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31954
	ctx.r12.s64 = -2094137344;
	// addi r12,r12,-25696
	ctx.r12.s64 = ctx.r12.s64 + -25696;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832D9BD0;
	case 1:
		goto loc_832D9BD0;
	case 2:
		goto loc_832D9BD0;
	case 3:
		goto loc_832D9BF0;
	case 4:
		goto loc_832D9BF0;
	case 5:
		goto loc_832D9BF0;
	case 6:
		goto loc_832D9BD0;
	case 7:
		goto loc_832D9BF0;
	case 8:
		goto loc_832D9BD0;
	case 9:
		goto loc_832D9BD0;
	case 10:
		goto loc_832D9BD0;
	case 11:
		goto loc_832D9BD8;
	case 12:
		goto loc_832D9BD8;
	case 13:
		goto loc_832D9BF0;
	case 14:
		goto loc_832D9BA0;
	case 15:
		goto loc_832D9BC8;
	case 16:
		goto loc_832D9BC8;
	case 17:
		goto loc_832D9BC8;
	case 18:
		goto loc_832D9BC8;
	case 19:
		goto loc_832D9BC8;
	case 20:
		goto loc_832D9BD0;
	case 21:
		goto loc_832D9BD0;
	case 22:
		goto loc_832D9BD0;
	case 23:
		goto loc_832D9BC8;
	case 24:
		goto loc_832D9BC8;
	case 25:
		goto loc_832D9BD8;
	case 26:
		goto loc_832D9BAC;
	case 27:
		goto loc_832D9BAC;
	default:
		__builtin_unreachable();
	}
loc_832D9BA0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_832D9BA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d9568
	ctx.lr = 0x832D9BAC;
	sub_832D9568(ctx, base);
loc_832D9BAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r11.u32);
	// b 0x832d9bf0
	goto loc_832D9BF0;
loc_832D9BC8:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x832d9ba4
	goto loc_832D9BA4;
loc_832D9BD0:
	// li r7,1944
	ctx.r7.s64 = 1944;
	// b 0x832d9bdc
	goto loc_832D9BDC;
loc_832D9BD8:
	// li r7,1949
	ctx.r7.s64 = 1949;
loc_832D9BDC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9BF0;
	sub_8320CF10(ctx, base);
loc_832D9BF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r9,r11,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832d9c0c
	if (!ctx.cr6.eq) goto loc_832D9C0C;
	// rlwinm r11,r11,0,14,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF03FFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832D9C0C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d9d60
	if (ctx.cr0.eq) goto loc_832D9D60;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d9c3c
	if (!ctx.cr6.eq) goto loc_832D9C3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,11020
	ctx.r5.s64 = ctx.r11.s64 + 11020;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1965
	ctx.r7.s64 = 1965;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9C3C;
	sub_8320CF10(ctx, base);
loc_832D9C3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x832d9c68
	if (ctx.cr6.lt) goto loc_832D9C68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10972
	ctx.r5.s64 = ctx.r11.s64 + 10972;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1968
	ctx.r7.s64 = 1968;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9C68;
	sub_8320CF10(ctx, base);
loc_832D9C68:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x832d9c94
	if (ctx.cr6.lt) goto loc_832D9C94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10924
	ctx.r5.s64 = ctx.r11.s64 + 10924;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1969
	ctx.r7.s64 = 1969;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9C94;
	sub_8320CF10(ctx, base);
loc_832D9C94:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x832d9cc0
	if (ctx.cr6.lt) goto loc_832D9CC0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10876
	ctx.r5.s64 = ctx.r11.s64 + 10876;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1970
	ctx.r7.s64 = 1970;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9CC0;
	sub_8320CF10(ctx, base);
loc_832D9CC0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832d9cec
	if (ctx.cr6.lt) goto loc_832D9CEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10828
	ctx.r5.s64 = ctx.r11.s64 + 10828;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1971
	ctx.r7.s64 = 1971;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9CEC;
	sub_8320CF10(ctx, base);
loc_832D9CEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,31,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r9,r10,31,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r10,r9,31,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xE;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x832d9d28
	if (ctx.cr6.eq) goto loc_832D9D28;
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwinm r11,r10,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832d9d3c
	goto loc_832D9D3C;
loc_832D9D28:
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_832D9D3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x832d9d54
	if (ctx.cr6.eq) goto loc_832D9D54;
	// rlwimi r10,r11,31,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// b 0x832d9d58
	goto loc_832D9D58;
loc_832D9D54:
	// rlwimi r10,r11,30,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
loc_832D9D58:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x832d9d80
	goto loc_832D9D80;
loc_832D9D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// li r10,15
	ctx.r10.s64 = 15;
	// beq cr6,0x832d9d78
	if (ctx.cr6.eq) goto loc_832D9D78;
	// rlwimi r11,r10,12,16,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF003F);
	// b 0x832d9d7c
	goto loc_832D9D7C;
loc_832D9D78:
	// rlwimi r11,r10,8,16,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF003F);
loc_832D9D7C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832D9D80:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d9dc4
	if (ctx.cr0.eq) goto loc_832D9DC4;
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d9db8
	if (ctx.cr6.eq) goto loc_832D9DB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,10784
	ctx.r5.s64 = ctx.r11.s64 + 10784;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2021
	ctx.r7.s64 = 2021;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9DB8;
	sub_8320CF10(ctx, base);
loc_832D9DB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,514
	ctx.r11.u64 = ctx.r11.u64 | 33685504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832D9DC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x832d9dd8
	if (ctx.cr6.eq) goto loc_832D9DD8;
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// b 0x832d9ddc
	goto loc_832D9DDC;
loc_832D9DD8:
	// rlwinm r11,r11,0,29,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
loc_832D9DDC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D9DE8"))) PPC_WEAK_FUNC(sub_832D9DE8);
PPC_FUNC_IMPL(__imp__sub_832D9DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832D9DF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r9,22,20,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFC0;
	// lwz r31,10816(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10816);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r9,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x832d9e40
	if (ctx.cr6.eq) goto loc_832D9E40;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x832d9e44
	goto loc_832D9E44;
loc_832D9E40:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832D9E44:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// addi r26,r10,-21168
	ctx.r26.s64 = ctx.r10.s64 + -21168;
	// addi r23,r8,18988
	ctx.r23.s64 = ctx.r8.s64 + 18988;
	// addi r25,r7,10072
	ctx.r25.s64 = ctx.r7.s64 + 10072;
	// bgt cr6,0x832d9f50
	if (ctx.cr6.gt) goto loc_832D9F50;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,10352
	ctx.r12.s64 = ctx.r12.s64 + 10352;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-31954
	ctx.r12.s64 = -2094137344;
	// addi r12,r12,-24940
	ctx.r12.s64 = ctx.r12.s64 + -24940;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_832D9F04;
	case 1:
		goto loc_832D9F04;
	case 2:
		goto loc_832D9F04;
	case 3:
		goto loc_832D9F38;
	case 4:
		goto loc_832D9E94;
	case 5:
		goto loc_832D9E94;
	case 6:
		goto loc_832D9E94;
	case 7:
		goto loc_832D9EC8;
	case 8:
		goto loc_832D9E94;
	case 9:
		goto loc_832D9EC8;
	case 10:
		goto loc_832D9ED8;
	case 11:
		goto loc_832D9F50;
	case 12:
		goto loc_832D9F50;
	case 13:
		goto loc_832D9F38;
	case 14:
		goto loc_832D9F38;
	case 15:
		goto loc_832D9E94;
	case 16:
		goto loc_832D9E94;
	case 17:
		goto loc_832D9E94;
	case 18:
		goto loc_832D9E94;
	case 19:
		goto loc_832D9E94;
	case 20:
		goto loc_832D9EC0;
	case 21:
		goto loc_832D9F38;
	case 22:
		goto loc_832D9EC0;
	case 23:
		goto loc_832D9F38;
	case 24:
		goto loc_832D9F38;
	default:
		__builtin_unreachable();
	}
loc_832D9E94:
	// slw r8,r27,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_832D9EAC:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832d9f50
	goto loc_832D9F50;
loc_832D9EC0:
	// li r7,2119
	ctx.r7.s64 = 2119;
	// b 0x832d9f3c
	goto loc_832D9F3C;
loc_832D9EC8:
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x832d9e94
	goto loc_832D9E94;
loc_832D9ED8:
	// slw r8,r27,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r9,r28,r12
	ctx.r9.u64 = ctx.r28.u64 & ctx.r12.u64;
	// ori r28,r9,4369
	ctx.r28.u64 = ctx.r9.u64 | 4369;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x832d9eac
	goto loc_832D9EAC;
loc_832D9F04:
	// slw r11,r29,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r10,2(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x832d9f50
	goto loc_832D9F50;
loc_832D9F38:
	// li r7,2179
	ctx.r7.s64 = 2179;
loc_832D9F3C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9F50;
	sub_8320CF10(ctx, base);
loc_832D9F50:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da0b8
	if (ctx.cr0.eq) goto loc_832DA0B8;
	// clrlwi r8,r28,29
	ctx.r8.u64 = ctx.r28.u32 & 0x7;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// rlwinm r9,r28,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// rlwinm r10,r28,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// rlwinm r11,r28,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x832d9fd8
	if (ctx.cr6.eq) goto loc_832D9FD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d9658
	ctx.lr = 0x832D9FB4;
	sub_832D9658(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x832d9ff0
	goto loc_832D9FF0;
loc_832D9FD8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2196
	ctx.r7.s64 = 2196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D9FF0;
	sub_8320CF10(ctx, base);
loc_832D9FF0:
	// rlwinm r29,r28,29,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1;
	// rlwinm r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832da01c
	if (ctx.cr6.eq) goto loc_832DA01C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11304
	ctx.r5.s64 = ctx.r11.s64 + 11304;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2203
	ctx.r7.s64 = 2203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA01C;
	sub_8320CF10(ctx, base);
loc_832DA01C:
	// rlwinm r11,r28,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832da044
	if (ctx.cr6.eq) goto loc_832DA044;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11232
	ctx.r5.s64 = ctx.r11.s64 + 11232;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2204
	ctx.r7.s64 = 2204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA044;
	sub_8320CF10(ctx, base);
loc_832DA044:
	// rlwinm r11,r28,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 17) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832da06c
	if (ctx.cr6.eq) goto loc_832DA06C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11160
	ctx.r5.s64 = ctx.r11.s64 + 11160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2205
	ctx.r7.s64 = 2205;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA06C;
	sub_8320CF10(ctx, base);
loc_832DA06C:
	// slw r11,r29,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,27,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF1F) | (ctx.r11.u64 & 0xE0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832da0e4
	if (ctx.cr6.eq) goto loc_832DA0E4;
	// rlwinm r11,r28,19,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832da0e4
	goto loc_832DA0E4;
loc_832DA0B8:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// slw r9,r29,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,27,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFFFF1F) | (ctx.r10.u64 & 0xE0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_832DA0E4:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da150
	if (ctx.cr0.eq) goto loc_832DA150;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da118
	if (ctx.cr0.eq) goto loc_832DA118;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11128
	ctx.r5.s64 = ctx.r11.s64 + 11128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2226
	ctx.r7.s64 = 2226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA118;
	sub_8320CF10(ctx, base);
loc_832DA118:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da140
	if (ctx.cr0.eq) goto loc_832DA140;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11100
	ctx.r5.s64 = ctx.r11.s64 + 11100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2227
	ctx.r7.s64 = 2227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA140;
	sub_8320CF10(ctx, base);
loc_832DA140:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r27,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
loc_832DA150:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da25c
	if (ctx.cr0.eq) goto loc_832DA25C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832da184
	if (ctx.cr6.eq) goto loc_832DA184;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11072
	ctx.r5.s64 = ctx.r11.s64 + 11072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2246
	ctx.r7.s64 = 2246;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA184;
	sub_8320CF10(ctx, base);
loc_832DA184:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832da1f4
	if (ctx.cr6.eq) goto loc_832DA1F4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x832da1f4
	if (ctx.cr6.eq) goto loc_832DA1F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832da1f4
	if (ctx.cr6.eq) goto loc_832DA1F4;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832da1d0
	if (ctx.cr6.eq) goto loc_832DA1D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,11028
	ctx.r5.s64 = ctx.r11.s64 + 11028;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2253
	ctx.r7.s64 = 2253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA1D0;
	sub_8320CF10(ctx, base);
loc_832DA1D0:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,64
	ctx.r9.s64 = 64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832da25c
	goto loc_832DA25C;
loc_832DA1F4:
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne 0x832da20c
	if (!ctx.cr0.eq) goto loc_832DA20C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x832da210
	goto loc_832DA210;
loc_832DA20C:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_832DA210:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x832da264
	if (ctx.cr6.lt) goto loc_832DA264;
	// beq cr6,0x832da244
	if (ctx.cr6.eq) goto loc_832DA244;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x832da278
	if (ctx.cr6.lt) goto loc_832DA278;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,2302
	ctx.r7.s64 = 2302;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832DA240;
	sub_8320CF10(ctx, base);
	// b 0x832da278
	goto loc_832DA278;
loc_832DA244:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832da278
	if (!ctx.cr0.eq) goto loc_832DA278;
loc_832DA250:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_832DA258:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832DA25C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_832DA264:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832da250
	if (ctx.cr0.eq) goto loc_832DA250;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832da250
	if (ctx.cr0.eq) goto loc_832DA250;
loc_832DA278:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x832da258
	goto loc_832DA258;
}

__attribute__((alias("__imp__sub_832DA284"))) PPC_WEAK_FUNC(sub_832DA284);
PPC_FUNC_IMPL(__imp__sub_832DA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832DA288"))) PPC_WEAK_FUNC(sub_832DA288);
PPC_FUNC_IMPL(__imp__sub_832DA288) {
	PPC_FUNC_PROLOGUE();
	// li r9,65
	ctx.r9.s64 = 65;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,23360(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23360);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// sth r8,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r8.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,16,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832DA31C"))) PPC_WEAK_FUNC(sub_832DA31C);
PPC_FUNC_IMPL(__imp__sub_832DA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

