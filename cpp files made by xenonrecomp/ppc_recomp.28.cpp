#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82333258"))) PPC_WEAK_FUNC(sub_82333258);
PPC_FUNC_IMPL(__imp__sub_82333258) {
	PPC_FUNC_PROLOGUE();
loc_82333258:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82333280
	if (ctx.cr6.eq) goto loc_82333280;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82333280
	if (ctx.cr6.eq) goto loc_82333280;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82333280
	if (ctx.cr6.eq) goto loc_82333280;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8233328c
	if (!ctx.cr6.eq) goto loc_8233328C;
loc_82333280:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82333258
	goto loc_82333258;
loc_8233328C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8233329C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82333258
	if (ctx.cr6.eq) goto loc_82333258;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82333258
	if (ctx.cr6.eq) goto loc_82333258;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233329c
	if (!ctx.cr6.eq) goto loc_8233329C;
	// b 0x82333258
	goto loc_82333258;
}

__attribute__((alias("__imp__sub_823332D0"))) PPC_WEAK_FUNC(sub_823332D0);
PPC_FUNC_IMPL(__imp__sub_823332D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823332D4"))) PPC_WEAK_FUNC(sub_823332D4);
PPC_FUNC_IMPL(__imp__sub_823332D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823332D8"))) PPC_WEAK_FUNC(sub_823332D8);
PPC_FUNC_IMPL(__imp__sub_823332D8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,0
	ctx.r7.s64 = 0;
loc_823332E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x823332f8
	if (ctx.cr6.eq) goto loc_823332F8;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82333304
	if (!ctx.cr6.eq) goto loc_82333304;
loc_823332F8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823332e0
	goto loc_823332E0;
loc_82333304:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x823333b4
	if (!ctx.cr6.eq) goto loc_823333B4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333398
	if (ctx.cr6.eq) goto loc_82333398;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82333330:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x82333398
	if (ctx.cr6.eq) goto loc_82333398;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82333398
	if (!ctx.cr6.lt) goto loc_82333398;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r31,92
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 92, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82333378
	if (!ctx.cr6.eq) goto loc_82333378;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82333378
	if (ctx.cr6.eq) goto loc_82333378;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333398
	if (ctx.cr6.eq) goto loc_82333398;
loc_82333378:
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333330
	if (!ctx.cr6.eq) goto loc_82333330;
loc_82333398:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x82333414
	if (!ctx.cr6.eq) goto loc_82333414;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82333414
	goto loc_82333414;
loc_823333B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333414
	if (ctx.cr6.eq) goto loc_82333414;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_823333C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82333414
	if (ctx.cr6.eq) goto loc_82333414;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x82333414
	if (ctx.cr6.eq) goto loc_82333414;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823333f8
	if (!ctx.cr6.lt) goto loc_823333F8;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_823333F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823333c4
	if (!ctx.cr6.eq) goto loc_823333C4;
loc_82333414:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// sthx r9,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u16);
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333434"))) PPC_WEAK_FUNC(sub_82333434);
PPC_FUNC_IMPL(__imp__sub_82333434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333438"))) PPC_WEAK_FUNC(sub_82333438);
PPC_FUNC_IMPL(__imp__sub_82333438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82333440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333478
	if (ctx.cr6.eq) goto loc_82333478;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82333478;
	sub_82294520(ctx, base);
loc_82333478:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82333490
	if (ctx.cr6.eq) goto loc_82333490;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x8233349c
	if (!ctx.cr6.eq) goto loc_8233349C;
loc_82333490:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82333478
	goto loc_82333478;
loc_8233349C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x82333538
	if (!ctx.cr6.eq) goto loc_82333538;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233351c
	if (ctx.cr6.eq) goto loc_8233351C;
loc_823334C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x8233351c
	if (ctx.cr6.eq) goto loc_8233351C;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82333500
	if (!ctx.cr6.eq) goto loc_82333500;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82333500
	if (ctx.cr6.eq) goto loc_82333500;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233351c
	if (ctx.cr6.eq) goto loc_8233351C;
loc_82333500:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cb60
	ctx.lr = 0x8233350C;
	sub_8233CB60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823334c0
	if (!ctx.cr6.eq) goto loc_823334C0;
loc_8233351C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x82333580
	if (!ctx.cr6.eq) goto loc_82333580;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82333580
	goto loc_82333580;
loc_82333538:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333580
	if (ctx.cr6.eq) goto loc_82333580;
loc_82333540:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82333580
	if (ctx.cr6.eq) goto loc_82333580;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82333580
	if (ctx.cr6.eq) goto loc_82333580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cb60
	ctx.lr = 0x82333564;
	sub_8233CB60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82333540
	if (!ctx.cr6.eq) goto loc_82333540;
loc_82333580:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233359c
	if (ctx.cr6.eq) goto loc_8233359C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823335a0
	if (ctx.cr6.gt) goto loc_823335A0;
loc_8233359C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_823335A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823335A8"))) PPC_WEAK_FUNC(sub_823335A8);
PPC_FUNC_IMPL(__imp__sub_823335A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823332d8
	ctx.lr = 0x823335D0;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823335e4
	if (ctx.cr6.eq) goto loc_823335E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823335ec
	goto loc_823335EC;
loc_823335E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_823335EC:
	// bl 0x822960c0
	ctx.lr = 0x823335F0;
	sub_822960C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333608"))) PPC_WEAK_FUNC(sub_82333608);
PPC_FUNC_IMPL(__imp__sub_82333608) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823336cc
	if (ctx.cr6.eq) goto loc_823336CC;
loc_82333638:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823336cc
	if (ctx.cr6.eq) goto loc_823336CC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x823336cc
	if (ctx.cr6.eq) goto loc_823336CC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x823336cc
	if (!ctx.cr0.gt) goto loc_823336CC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82333684
	if (!ctx.cr6.eq) goto loc_82333684;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x8233367c
	if (!ctx.cr6.eq) goto loc_8233367C;
	// lhz r30,2(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r30,47
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 47, ctx.xer);
	// bne cr6,0x8233367c
	if (!ctx.cr6.eq) goto loc_8233367C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8233367C:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x823336cc
	if (ctx.cr6.eq) goto loc_823336CC;
loc_82333684:
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// bne cr6,0x823336b4
	if (!ctx.cr6.eq) goto loc_823336B4;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823336b8
	goto loc_823336B8;
loc_823336B4:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_823336B8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333638
	if (!ctx.cr6.eq) goto loc_82333638;
loc_823336CC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823336ec
	if (ctx.cr6.eq) goto loc_823336EC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x823336ec
	if (ctx.cr6.eq) goto loc_823336EC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x823336f8
	if (!ctx.cr6.eq) goto loc_823336F8;
loc_823336EC:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823336cc
	goto loc_823336CC;
loc_823336F8:
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333718
	if (!ctx.cr6.eq) goto loc_82333718;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8233371c
	if (ctx.cr6.eq) goto loc_8233371C;
loc_82333718:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8233371C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333728"))) PPC_WEAK_FUNC(sub_82333728);
PPC_FUNC_IMPL(__imp__sub_82333728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82333730;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822b2a20
	ctx.lr = 0x82333758;
	sub_822B2A20(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823337e8
	if (ctx.cr6.eq) goto loc_823337E8;
loc_82333768:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823337e8
	if (ctx.cr6.eq) goto loc_823337E8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x823337e8
	if (ctx.cr6.eq) goto loc_823337E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823337ac
	if (!ctx.cr6.eq) goto loc_823337AC;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x823337a4
	if (!ctx.cr6.eq) goto loc_823337A4;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bne cr6,0x823337a4
	if (!ctx.cr6.eq) goto loc_823337A4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823337A4:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x823337e8
	if (ctx.cr6.eq) goto loc_823337E8;
loc_823337AC:
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// li r27,1
	ctx.r27.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// xor r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// bne cr6,0x823337d8
	if (!ctx.cr6.eq) goto loc_823337D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233cb60
	ctx.lr = 0x823337D8;
	sub_8233CB60(ctx, base);
loc_823337D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333768
	if (!ctx.cr6.eq) goto loc_82333768;
loc_823337E8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82333808
	if (ctx.cr6.eq) goto loc_82333808;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82333808
	if (ctx.cr6.eq) goto loc_82333808;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x82333814
	if (!ctx.cr6.eq) goto loc_82333814;
loc_82333808:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823337e8
	goto loc_823337E8;
loc_82333814:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333830
	if (!ctx.cr6.eq) goto loc_82333830;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82333834
	if (ctx.cr6.eq) goto loc_82333834;
loc_82333830:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82333834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233383C"))) PPC_WEAK_FUNC(sub_8233383C);
PPC_FUNC_IMPL(__imp__sub_8233383C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333840"))) PPC_WEAK_FUNC(sub_82333840);
PPC_FUNC_IMPL(__imp__sub_82333840) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-20720
	ctx.r30.s64 = ctx.r11.s64 + -20720;
	// bl 0x823338c8
	ctx.lr = 0x82333868;
	sub_823338C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82333878;
	sub_82295FF0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823338a0
	if (ctx.cr6.eq) goto loc_823338A0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x823338A0;
	sub_82294520(ctx, base);
loc_823338A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x823338A8;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_823338C4"))) PPC_WEAK_FUNC(sub_823338C4);
PPC_FUNC_IMPL(__imp__sub_823338C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823338C8"))) PPC_WEAK_FUNC(sub_823338C8);
PPC_FUNC_IMPL(__imp__sub_823338C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x823338D0;
	__savegprlr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r11,-3804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3804);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823340e8
	if (ctx.cr6.eq) goto loc_823340E8;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lwz r11,28876(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823340e8
	if (ctx.cr6.eq) goto loc_823340E8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8233391c
	if (!ctx.cr6.eq) goto loc_8233391C;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r24,r11,-24656
	ctx.r24.s64 = ctx.r11.s64 + -24656;
loc_8233391C:
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r18,r10,11272
	ctx.r18.s64 = ctx.r10.s64 + 11272;
	// lwz r11,28904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28904);
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r26,r9,-26756
	ctx.r26.s64 = ctx.r9.s64 + -26756;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82333a28
	if (!ctx.cr6.gt) goto loc_82333A28;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8233395C:
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333978
	if (ctx.cr6.eq) goto loc_82333978;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8233397c
	goto loc_8233397C;
loc_82333978:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_8233397C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232e868
	ctx.lr = 0x82333994;
	sub_8232E868(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294bb8
	ctx.lr = 0x823339A0;
	sub_82294BB8(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823339c4
	if (ctx.cr6.eq) goto loc_823339C4;
	// stw r20,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82294520
	ctx.lr = 0x823339C4;
	sub_82294520(ctx, base);
loc_823339C4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82294cc8
	ctx.lr = 0x823339CC;
	sub_82294CC8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823339e0
	if (!ctx.cr6.eq) goto loc_823339E0;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_823339E0:
	// lwz r3,28876(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x82333a78
	if (!ctx.cr6.eq) goto loc_82333A78;
	// bl 0x82295cb8
	ctx.lr = 0x82333A10;
	sub_82295CB8(ctx, base);
	// lwz r11,28904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28904);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233395c
	if (ctx.cr6.lt) goto loc_8233395C;
loc_82333A28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r28,r11,-26732
	ctx.r28.s64 = ctx.r11.s64 + -26732;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82333A3C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333c24
	if (ctx.cr6.eq) goto loc_82333C24;
	// lwz r11,28904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28904);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82333c84
	if (!ctx.cr6.gt) goto loc_82333C84;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82333A5C:
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333a80
	if (ctx.cr6.eq) goto loc_82333A80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82333a84
	goto loc_82333A84;
loc_82333A78:
	// bl 0x82295cb8
	ctx.lr = 0x82333A7C;
	sub_82295CB8(ctx, base);
	// b 0x82333c84
	goto loc_82333C84;
loc_82333A80:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_82333A84:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232e868
	ctx.lr = 0x82333A9C;
	sub_8232E868(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294bb8
	ctx.lr = 0x82333AA8;
	sub_82294BB8(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333af4
	if (ctx.cr6.eq) goto loc_82333AF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82333b24
	if (ctx.cr6.eq) goto loc_82333B24;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333ad4
	if (!ctx.cr6.eq) goto loc_82333AD4;
	// bl 0x822900a0
	ctx.lr = 0x82333AD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333AD4:
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
	ctx.lr = 0x82333AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82333AF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82333b24
	if (ctx.cr6.eq) goto loc_82333B24;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333b10
	if (!ctx.cr6.eq) goto loc_82333B10;
	// bl 0x822900a0
	ctx.lr = 0x82333B0C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333B10:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333B24:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r20.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// bne cr6,0x82333b44
	if (!ctx.cr6.eq) goto loc_82333B44;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_82333B44:
	// lwz r3,28876(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// bne cr6,0x82333bb4
	if (!ctx.cr6.eq) goto loc_82333BB4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333b90
	if (ctx.cr6.eq) goto loc_82333B90;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x82333B90;
	sub_82294520(ctx, base);
loc_82333B90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x82333B98;
	sub_82294CC8(ctx, base);
	// lwz r11,28904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28904);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82333a5c
	if (ctx.cr6.lt) goto loc_82333A5C;
	// b 0x82333c84
	goto loc_82333C84;
loc_82333BB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333bd0
	if (ctx.cr6.eq) goto loc_82333BD0;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x82333BD0;
	sub_82294520(ctx, base);
loc_82333BD0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x82333BD8;
	sub_82294CC8(ctx, base);
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// lwz r11,-24204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24204);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82333c14
	if (!ctx.cr6.eq) goto loc_82333C14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,-24204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24204, ctx.r11.u32);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r9,-12912
	ctx.r4.s64 = ctx.r9.s64 + -12912;
	// addi r3,r8,25392
	ctx.r3.s64 = ctx.r8.s64 + 25392;
	// bl 0x823329d8
	ctx.lr = 0x82333C0C;
	sub_823329D8(ctx, base);
	// stw r3,-24208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24208, ctx.r3.u32);
	// b 0x82333c18
	goto loc_82333C18;
loc_82333C14:
	// lwz r3,-24208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24208);
loc_82333C18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333c84
	if (ctx.cr6.eq) goto loc_82333C84;
	// b 0x82333c2c
	goto loc_82333C2C;
loc_82333C24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82333c84
	if (!ctx.cr6.eq) goto loc_82333C84;
loc_82333C2C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r4,r11,-12880
	ctx.r4.s64 = ctx.r11.s64 + -12880;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232e868
	ctx.lr = 0x82333C4C;
	sub_8232E868(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x82333C58;
	sub_82295908(ctx, base);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333c7c
	if (ctx.cr6.eq) goto loc_82333C7C;
	// stw r20,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82294520
	ctx.lr = 0x82333C7C;
	sub_82294520(ctx, base);
loc_82333C7C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82294cc8
	ctx.lr = 0x82333C84;
	sub_82294CC8(ctx, base);
loc_82333C84:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333c98
	if (!ctx.cr6.eq) goto loc_82333C98;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82333C98:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-12848
	ctx.r31.s64 = ctx.r11.s64 + -12848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cafee0
	ctx.lr = 0x82333CA8;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333d9c
	if (ctx.cr6.eq) goto loc_82333D9C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bne cr6,0x82333cc4
	if (!ctx.cr6.eq) goto loc_82333CC4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82333CC4:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82333d9c
	if (ctx.cr6.eq) goto loc_82333D9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,-26536
	ctx.r6.s64 = ctx.r11.s64 + -26536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8232e428
	ctx.lr = 0x82333CF0;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x82333CFC;
	sub_82295908(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333d58
	if (ctx.cr6.eq) goto loc_82333D58;
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333d90
	if (ctx.cr6.eq) goto loc_82333D90;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333d34
	if (!ctx.cr6.eq) goto loc_82333D34;
	// bl 0x822900a0
	ctx.lr = 0x82333D30;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333D34:
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
	ctx.lr = 0x82333D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_82333D58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333d90
	if (ctx.cr6.eq) goto loc_82333D90;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333d78
	if (!ctx.cr6.eq) goto loc_82333D78;
	// bl 0x822900a0
	ctx.lr = 0x82333D74;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333D78:
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
	ctx.lr = 0x82333D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333D90:
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
loc_82333D9C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333db0
	if (!ctx.cr6.eq) goto loc_82333DB0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82333DB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-12840
	ctx.r31.s64 = ctx.r11.s64 + -12840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cafee0
	ctx.lr = 0x82333DC0;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333eb4
	if (ctx.cr6.eq) goto loc_82333EB4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bne cr6,0x82333ddc
	if (!ctx.cr6.eq) goto loc_82333DDC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82333DDC:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82333eb4
	if (ctx.cr6.eq) goto loc_82333EB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,-13232
	ctx.r6.s64 = ctx.r11.s64 + -13232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8232e428
	ctx.lr = 0x82333E08;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x82333E14;
	sub_82295908(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333e70
	if (ctx.cr6.eq) goto loc_82333E70;
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333ea8
	if (ctx.cr6.eq) goto loc_82333EA8;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333e4c
	if (!ctx.cr6.eq) goto loc_82333E4C;
	// bl 0x822900a0
	ctx.lr = 0x82333E48;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333E4C:
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
	ctx.lr = 0x82333E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
loc_82333E70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333ea8
	if (ctx.cr6.eq) goto loc_82333EA8;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333e90
	if (!ctx.cr6.eq) goto loc_82333E90;
	// bl 0x822900a0
	ctx.lr = 0x82333E8C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333E90:
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
	ctx.lr = 0x82333EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333EA8:
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
loc_82333EB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-12832
	ctx.r4.s64 = ctx.r11.s64 + -12832;
	// bl 0x822960c0
	ctx.lr = 0x82333EC4;
	sub_822960C0(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// beq cr6,0x823340e0
	if (ctx.cr6.eq) goto loc_823340E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82333f68
	if (ctx.cr6.eq) goto loc_82333F68;
loc_82333EE0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333ef4
	if (!ctx.cr6.eq) goto loc_82333EF4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82333EF4:
	// bl 0x82cafee0
	ctx.lr = 0x82333EF8;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333f68
	if (ctx.cr6.eq) goto loc_82333F68;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bne cr6,0x82333f14
	if (!ctx.cr6.eq) goto loc_82333F14;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82333F14:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82333f68
	if (ctx.cr6.lt) goto loc_82333F68;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822b1b70
	ctx.lr = 0x82333F30;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x82333F3C;
	sub_82295908(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333f60
	if (ctx.cr6.eq) goto loc_82333F60;
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82294520
	ctx.lr = 0x82333F60;
	sub_82294520(ctx, base);
loc_82333F60:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82294cc8
	ctx.lr = 0x82333F68;
	sub_82294CC8(ctx, base);
loc_82333F68:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333fb0
	if (ctx.cr6.eq) goto loc_82333FB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82333fe0
	if (ctx.cr6.eq) goto loc_82333FE0;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333f90
	if (!ctx.cr6.eq) goto loc_82333F90;
	// bl 0x822900a0
	ctx.lr = 0x82333F8C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333F90:
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
	ctx.lr = 0x82333FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82333FB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82333fe0
	if (ctx.cr6.eq) goto loc_82333FE0;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333fcc
	if (!ctx.cr6.eq) goto loc_82333FCC;
	// bl 0x822900a0
	ctx.lr = 0x82333FC8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82333FCC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333FE0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r20,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82334030
	if (ctx.cr6.eq) goto loc_82334030;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82334010
	if (!ctx.cr6.eq) goto loc_82334010;
	// bl 0x822900a0
	ctx.lr = 0x8233400C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82334010:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233402C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r3.u32);
loc_82334030:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233404c
	if (ctx.cr6.eq) goto loc_8233404C;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82bea998
	ctx.lr = 0x8233404C;
	sub_82BEA998(ctx, base);
loc_8233404C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823340a4
	if (ctx.cr6.eq) goto loc_823340A4;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823340f4
	if (ctx.cr6.eq) goto loc_823340F4;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82334080
	if (!ctx.cr6.eq) goto loc_82334080;
	// bl 0x822900a0
	ctx.lr = 0x8233407C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82334080:
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
	ctx.lr = 0x8233409C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_823340A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823340f4
	if (ctx.cr6.eq) goto loc_823340F4;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823340c0
	if (!ctx.cr6.eq) goto loc_823340C0;
	// bl 0x822900a0
	ctx.lr = 0x823340BC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_823340C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823340D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_823340E0:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x82333ee0
	goto loc_82333EE0;
loc_823340E8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x823340F4;
	sub_822960C0(ctx, base);
loc_823340F4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334100"))) PPC_WEAK_FUNC(sub_82334100);
PPC_FUNC_IMPL(__imp__sub_82334100) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-12824
	ctx.r4.s64 = ctx.r10.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334134;
	sub_823338C8(ctx, base);
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

__attribute__((alias("__imp__sub_8233414C"))) PPC_WEAK_FUNC(sub_8233414C);
PPC_FUNC_IMPL(__imp__sub_8233414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334150"))) PPC_WEAK_FUNC(sub_82334150);
PPC_FUNC_IMPL(__imp__sub_82334150) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-12808
	ctx.r4.s64 = ctx.r10.s64 + -12808;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334184;
	sub_823338C8(ctx, base);
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

__attribute__((alias("__imp__sub_8233419C"))) PPC_WEAK_FUNC(sub_8233419C);
PPC_FUNC_IMPL(__imp__sub_8233419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823341A0"))) PPC_WEAK_FUNC(sub_823341A0);
PPC_FUNC_IMPL(__imp__sub_823341A0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-12788
	ctx.r4.s64 = ctx.r10.s64 + -12788;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823338c8
	ctx.lr = 0x823341D4;
	sub_823338C8(ctx, base);
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

__attribute__((alias("__imp__sub_823341EC"))) PPC_WEAK_FUNC(sub_823341EC);
PPC_FUNC_IMPL(__imp__sub_823341EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823341F0"))) PPC_WEAK_FUNC(sub_823341F0);
PPC_FUNC_IMPL(__imp__sub_823341F0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-12776
	ctx.r4.s64 = ctx.r10.s64 + -12776;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334224;
	sub_823338C8(ctx, base);
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

__attribute__((alias("__imp__sub_8233423C"))) PPC_WEAK_FUNC(sub_8233423C);
PPC_FUNC_IMPL(__imp__sub_8233423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334240"))) PPC_WEAK_FUNC(sub_82334240);
PPC_FUNC_IMPL(__imp__sub_82334240) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,11524
	ctx.r4.s64 = ctx.r11.s64 + 11524;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334270;
	sub_823338C8(ctx, base);
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

__attribute__((alias("__imp__sub_82334288"))) PPC_WEAK_FUNC(sub_82334288);
PPC_FUNC_IMPL(__imp__sub_82334288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82334290;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82294d90
	ctx.lr = 0x823342B4;
	sub_82294D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82294d90
	ctx.lr = 0x823342C8;
	sub_82294D90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// bl 0x82333840
	ctx.lr = 0x823342E8;
	sub_82333840(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82334304
	if (ctx.cr6.eq) goto loc_82334304;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334304
	if (ctx.cr6.eq) goto loc_82334304;
	// bl 0x82294a58
	ctx.lr = 0x82334304;
	sub_82294A58(ctx, base);
loc_82334304:
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82334320
	if (ctx.cr6.eq) goto loc_82334320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334320
	if (ctx.cr6.eq) goto loc_82334320;
	// bl 0x82294a58
	ctx.lr = 0x82334320;
	sub_82294A58(ctx, base);
loc_82334320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233432C"))) PPC_WEAK_FUNC(sub_8233432C);
PPC_FUNC_IMPL(__imp__sub_8233432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334330"))) PPC_WEAK_FUNC(sub_82334330);
PPC_FUNC_IMPL(__imp__sub_82334330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82334338;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82294d90
	ctx.lr = 0x8233435C;
	sub_82294D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82294d90
	ctx.lr = 0x82334370;
	sub_82294D90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// bl 0x823338c8
	ctx.lr = 0x82334390;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823343ac
	if (ctx.cr6.eq) goto loc_823343AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823343ac
	if (ctx.cr6.eq) goto loc_823343AC;
	// bl 0x82294a58
	ctx.lr = 0x823343AC;
	sub_82294A58(ctx, base);
loc_823343AC:
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823343c8
	if (ctx.cr6.eq) goto loc_823343C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823343c8
	if (ctx.cr6.eq) goto loc_823343C8;
	// bl 0x82294a58
	ctx.lr = 0x823343C8;
	sub_82294A58(ctx, base);
loc_823343C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823343D4"))) PPC_WEAK_FUNC(sub_823343D4);
PPC_FUNC_IMPL(__imp__sub_823343D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823343D8"))) PPC_WEAK_FUNC(sub_823343D8);
PPC_FUNC_IMPL(__imp__sub_823343D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x823343F4;
	sub_82294D90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r4,r10,-12824
	ctx.r4.s64 = ctx.r10.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334418;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82334434
	if (ctx.cr6.eq) goto loc_82334434;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334434
	if (ctx.cr6.eq) goto loc_82334434;
	// bl 0x82294a58
	ctx.lr = 0x82334434;
	sub_82294A58(ctx, base);
loc_82334434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233444C"))) PPC_WEAK_FUNC(sub_8233444C);
PPC_FUNC_IMPL(__imp__sub_8233444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334450"))) PPC_WEAK_FUNC(sub_82334450);
PPC_FUNC_IMPL(__imp__sub_82334450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82334458;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82294d90
	ctx.lr = 0x82334470;
	sub_82294D90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-12808
	ctx.r4.s64 = ctx.r11.s64 + -12808;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334490;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823344ac
	if (ctx.cr6.eq) goto loc_823344AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823344ac
	if (ctx.cr6.eq) goto loc_823344AC;
	// bl 0x82294a58
	ctx.lr = 0x823344AC;
	sub_82294A58(ctx, base);
loc_823344AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823344B8"))) PPC_WEAK_FUNC(sub_823344B8);
PPC_FUNC_IMPL(__imp__sub_823344B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823344C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82294d90
	ctx.lr = 0x823344D8;
	sub_82294D90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-12788
	ctx.r4.s64 = ctx.r11.s64 + -12788;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823338c8
	ctx.lr = 0x823344F8;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82334514
	if (ctx.cr6.eq) goto loc_82334514;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334514
	if (ctx.cr6.eq) goto loc_82334514;
	// bl 0x82294a58
	ctx.lr = 0x82334514;
	sub_82294A58(ctx, base);
loc_82334514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334520"))) PPC_WEAK_FUNC(sub_82334520);
PPC_FUNC_IMPL(__imp__sub_82334520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23916
	ctx.r4.s64 = ctx.r11.s64 + -23916;
	// bl 0x82294d90
	ctx.lr = 0x82334544;
	sub_82294D90(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r6,r10,-23688
	ctx.r6.s64 = ctx.r10.s64 + -23688;
	// addi r4,r9,-12776
	ctx.r4.s64 = ctx.r9.s64 + -12776;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823338c8
	ctx.lr = 0x82334568;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82334584
	if (ctx.cr6.eq) goto loc_82334584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334584
	if (ctx.cr6.eq) goto loc_82334584;
	// bl 0x82294a58
	ctx.lr = 0x82334584;
	sub_82294A58(ctx, base);
loc_82334584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233459C"))) PPC_WEAK_FUNC(sub_8233459C);
PPC_FUNC_IMPL(__imp__sub_8233459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823345A0"))) PPC_WEAK_FUNC(sub_823345A0);
PPC_FUNC_IMPL(__imp__sub_823345A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x823345BC;
	sub_82294D90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,11524
	ctx.r4.s64 = ctx.r11.s64 + 11524;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823338c8
	ctx.lr = 0x823345DC;
	sub_823338C8(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823345f8
	if (ctx.cr6.eq) goto loc_823345F8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823345f8
	if (ctx.cr6.eq) goto loc_823345F8;
	// bl 0x82294a58
	ctx.lr = 0x823345F8;
	sub_82294A58(ctx, base);
loc_823345F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334610"))) PPC_WEAK_FUNC(sub_82334610);
PPC_FUNC_IMPL(__imp__sub_82334610) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334650
	if (ctx.cr6.eq) goto loc_82334650;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294520
	ctx.lr = 0x82334650;
	sub_82294520(ctx, base);
loc_82334650:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233467C;
	sub_82294AC0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823346AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823346C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823346E4"))) PPC_WEAK_FUNC(sub_823346E4);
PPC_FUNC_IMPL(__imp__sub_823346E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823346E8"))) PPC_WEAK_FUNC(sub_823346E8);
PPC_FUNC_IMPL(__imp__sub_823346E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x823346F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334724
	if (ctx.cr6.eq) goto loc_82334724;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x82334724;
	sub_82294520(ctx, base);
loc_82334724:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82334868
	if (ctx.cr6.lt) goto loc_82334868;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334868
	if (!ctx.cr6.eq) goto loc_82334868;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x823347cc
	if (!ctx.cr6.eq) goto loc_823347CC;
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bne cr6,0x823347cc
	if (!ctx.cr6.eq) goto loc_823347CC;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82334778
	if (!ctx.cr6.gt) goto loc_82334778;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82334778;
	sub_82294520(ctx, base);
loc_82334778:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82334790;
	sub_82294AC0(ctx, base);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x823348d0
	if (!ctx.cr0.gt) goto loc_823348D0;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// subfic r7,r28,-2
	ctx.xer.ca = ctx.r28.u32 <= 4294967294;
	ctx.r7.s64 = -2 - ctx.r28.s64;
loc_823347A0:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r4,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u16);
	// bne 0x823347a0
	if (!ctx.cr0.eq) goto loc_823347A0;
	// b 0x823348d0
	goto loc_823348D0;
loc_823347CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334868
	if (!ctx.cr6.eq) goto loc_82334868;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x82334868
	if (!ctx.cr6.eq) goto loc_82334868;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82334868
	if (!ctx.cr6.eq) goto loc_82334868;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82334814
	if (!ctx.cr6.gt) goto loc_82334814;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82334814;
	sub_82294520(ctx, base);
loc_82334814:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233482C;
	sub_82294AC0(ctx, base);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x823348d0
	if (!ctx.cr0.gt) goto loc_823348D0;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// subfic r7,r28,-3
	ctx.xer.ca = ctx.r28.u32 <= 4294967293;
	ctx.r7.s64 = -3 - ctx.r28.s64;
loc_8233483C:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r4,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u16);
	// bne 0x8233483c
	if (!ctx.cr0.eq) goto loc_8233483C;
	// b 0x823348d0
	goto loc_823348D0;
loc_82334868:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233488c
	if (!ctx.cr6.gt) goto loc_8233488C;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233488C;
	sub_82294520(ctx, base);
loc_8233488C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x823348A4;
	sub_82294AC0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823348d0
	if (!ctx.cr6.gt) goto loc_823348D0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_823348B4:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// blt cr6,0x823348b4
	if (ctx.cr6.lt) goto loc_823348B4;
loc_823348D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r27,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823348EC"))) PPC_WEAK_FUNC(sub_823348EC);
PPC_FUNC_IMPL(__imp__sub_823348EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823348F0"))) PPC_WEAK_FUNC(sub_823348F0);
PPC_FUNC_IMPL(__imp__sub_823348F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x823348F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8233493C;
	sub_82294520(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8233495C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,84(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82334970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823346e8
	ctx.lr = 0x8233499C;
	sub_823346E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a7c0
	ctx.lr = 0x823349A4;
	sub_8233A7C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823349B0"))) PPC_WEAK_FUNC(sub_823349B0);
PPC_FUNC_IMPL(__imp__sub_823349B0) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823349E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823349FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82334A14"))) PPC_WEAK_FUNC(sub_82334A14);
PPC_FUNC_IMPL(__imp__sub_82334A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334A18"))) PPC_WEAK_FUNC(sub_82334A18);
PPC_FUNC_IMPL(__imp__sub_82334A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82334A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,28892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334a48
	if (ctx.cr6.eq) goto loc_82334A48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334a54
	if (!ctx.cr6.eq) goto loc_82334A54;
loc_82334A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82334A54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,-20648
	ctx.r6.s64 = ctx.r10.s64 + -20648;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82334A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82334a48
	if (ctx.cr6.eq) goto loc_82334A48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822952a0
	ctx.lr = 0x82334A88;
	sub_822952A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82334adc
	if (!ctx.cr6.gt) goto loc_82334ADC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82334A98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295fa8
	ctx.lr = 0x82334AA0;
	sub_82295FA8(ctx, base);
	// lhzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82334ab4
	if (ctx.cr6.lt) goto loc_82334AB4;
	// li r30,127
	ctx.r30.s64 = 127;
loc_82334AB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295fa8
	ctx.lr = 0x82334ABC;
	sub_82295FA8(ctx, base);
	// lhzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82334bc4
	if (!ctx.cr6.eq) goto loc_82334BC4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82334a98
	if (ctx.cr6.lt) goto loc_82334A98;
loc_82334ADC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82334af0
	if (!ctx.cr6.eq) goto loc_82334AF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82334AF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294520
	ctx.lr = 0x82334B10;
	sub_82294520(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822952a0
	ctx.lr = 0x82334B1C;
	sub_822952A0(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82334b60
	if (!ctx.cr6.gt) goto loc_82334B60;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82334B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295fa8
	ctx.lr = 0x82334B34;
	sub_82295FA8(ctx, base);
	// lhzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82334b44
	if (ctx.cr6.lt) goto loc_82334B44;
	// li r11,127
	ctx.r11.s64 = 127;
loc_82334B44:
	// stbx r11,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bl 0x822952a0
	ctx.lr = 0x82334B58;
	sub_822952A0(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82334b2c
	if (ctx.cr6.lt) goto loc_82334B2C;
loc_82334B60:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82334b74
	if (!ctx.cr6.eq) goto loc_82334B74;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82334B74:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82334c28
	if (ctx.cr6.eq) goto loc_82334C28;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82334bac
	if (!ctx.cr6.eq) goto loc_82334BAC;
	// bl 0x822900a0
	ctx.lr = 0x82334BA8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82334BAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82334c28
	goto loc_82334C28;
loc_82334BC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,-257
	ctx.r10.s64 = -257;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82334BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82334c00
	if (!ctx.cr6.eq) goto loc_82334C00;
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82334c08
	if (ctx.cr6.eq) goto loc_82334C08;
loc_82334C00:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82334c10
	goto loc_82334C10;
loc_82334C08:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82334C10:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334C28:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334C4C"))) PPC_WEAK_FUNC(sub_82334C4C);
PPC_FUNC_IMPL(__imp__sub_82334C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334C50"))) PPC_WEAK_FUNC(sub_82334C50);
PPC_FUNC_IMPL(__imp__sub_82334C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82334C58;
	__savegprlr_22(ctx, base);
	// stwu r1,-2368(r1)
	ea = -2368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r11,11272(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// lwz r25,28892(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28892);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// sth r11,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x82334C94;
	sub_82CB16F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822960c0
	ctx.lr = 0x82334CA0;
	sub_822960C0(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8232ed00
	ctx.lr = 0x82334CAC;
	sub_8232ED00(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82334cc0
	if (ctx.cr6.eq) goto loc_82334CC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82334cc4
	goto loc_82334CC4;
loc_82334CC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82334CC4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-12760
	ctx.r4.s64 = ctx.r11.s64 + -12760;
	// bl 0x82cb0328
	ctx.lr = 0x82334CD0;
	sub_82CB0328(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,0
	ctx.r29.s64 = 0;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82334d00
	if (ctx.cr6.eq) goto loc_82334D00;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294520
	ctx.lr = 0x82334D00;
	sub_82294520(ctx, base);
loc_82334D00:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294cc8
	ctx.lr = 0x82334D08;
	sub_82294CC8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334d2c
	if (ctx.cr6.eq) goto loc_82334D2C;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294520
	ctx.lr = 0x82334D2C;
	sub_82294520(ctx, base);
loc_82334D2C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294cc8
	ctx.lr = 0x82334D34;
	sub_82294CC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82334d4c
	if (ctx.cr6.eq) goto loc_82334D4C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82cafc18
	ctx.lr = 0x82334D48;
	sub_82CAFC18(ctx, base);
	// b 0x82334dc4
	goto loc_82334DC4;
loc_82334D4C:
	// lis r24,-31906
	ctx.r24.s64 = -2090991616;
	// lis r23,1
	ctx.r23.s64 = 65536;
	// lwz r11,25148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25148);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82334dbc
	if (!ctx.cr6.lt) goto loc_82334DBC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-12752
	ctx.r30.s64 = ctx.r11.s64 + -12752;
loc_82334D6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82347258
	ctx.lr = 0x82334D80;
	sub_82347258(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82334db4
	if (ctx.cr6.lt) goto loc_82334DB4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82334d6c
	if (ctx.cr6.lt) goto loc_82334D6C;
	// lwz r11,25148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25148);
	// b 0x82334dbc
	goto loc_82334DBC;
loc_82334DB4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,25148(r24)
	PPC_STORE_U32(ctx.r24.u32 + 25148, ctx.r11.u32);
loc_82334DBC:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x82335008
	if (ctx.cr6.eq) goto loc_82335008;
loc_82334DC4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,-20648
	ctx.r6.s64 = ctx.r10.s64 + -20648;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82334DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335008
	if (ctx.cr6.eq) goto loc_82335008;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,13824
	ctx.r8.s64 = 905969664;
	// sth r29,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r29.u16);
	// add r25,r27,r11
	ctx.r25.u64 = ctx.r27.u64 + ctx.r11.u64;
	// sth r29,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r29.u16);
	// stw r8,146(r1)
	PPC_STORE_U32(ctx.r1.u32 + 146, ctx.r8.u32);
	// li r9,16973
	ctx.r9.s64 = 16973;
	// addi r7,r25,3
	ctx.r7.s64 = ctx.r25.s64 + 3;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,14
	ctx.r5.s64 = 14;
	// rlwinm r24,r7,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r9,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r9.u16);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mullw r30,r24,r28
	ctx.r30.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r28.s32);
	// addi r11,r30,54
	ctx.r11.s64 = ctx.r30.s64 + 54;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r11,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r11,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,138(r1)
	PPC_STORE_U32(ctx.r1.u32 + 138, ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82334E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r27,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r27,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// rlwinm r9,r28,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF00;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// rlwinm r8,r28,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// rlwinm r10,r30,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r27,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF00;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r28,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r30,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// rlwinm r6,r27,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r28,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r4,10240
	ctx.r4.s64 = 671088640;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r7,6144
	ctx.r7.s64 = 6144;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// sth r8,188(r1)
	PPC_STORE_U16(ctx.r1.u32 + 188, ctx.r8.u16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// sth r7,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r7.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82334F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82334fe4
	if (ctx.cr0.lt) goto loc_82334FE4;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r22,r10,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r11,2
	ctx.r23.s64 = ctx.r11.s64 + 2;
loc_82334F34:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82334fa4
	if (!ctx.cr6.gt) goto loc_82334FA4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82334F44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82334F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82334f44
	if (!ctx.cr0.eq) goto loc_82334F44;
loc_82334FA4:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82334fd8
	if (!ctx.cr6.lt) goto loc_82334FD8;
	// subf r30,r25,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r25.s64;
loc_82334FB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82334fb0
	if (!ctx.cr0.eq) goto loc_82334FB0;
loc_82334FD8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// bge 0x82334f34
	if (!ctx.cr0.lt) goto loc_82334F34;
loc_82334FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82335008:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335014"))) PPC_WEAK_FUNC(sub_82335014);
PPC_FUNC_IMPL(__imp__sub_82335014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335018"))) PPC_WEAK_FUNC(sub_82335018);
PPC_FUNC_IMPL(__imp__sub_82335018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82335020;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,28892(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335048
	if (!ctx.cr6.eq) goto loc_82335048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82335048:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-12728
	ctx.r4.s64 = ctx.r11.s64 + -12728;
	// bl 0x82295680
	ctx.lr = 0x82335058;
	sub_82295680(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r10,-23856
	ctx.r5.s64 = ctx.r10.s64 + -23856;
	// addi r4,r9,-12472
	ctx.r4.s64 = ctx.r9.s64 + -12472;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82335070;
	sub_8232E868(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822952c8
	ctx.lr = 0x82335080;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82335090;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x8233509C;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x823350A4;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x823350AC;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x823350B4;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x823350BC;
	sub_82299080(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x823350d8
	if (ctx.cr6.eq) goto loc_823350D8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x823350dc
	goto loc_823350DC;
loc_823350D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823350DC:
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823350F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82335104
	if (ctx.cr6.eq) goto loc_82335104;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82335104:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-12720
	ctx.r4.s64 = ctx.r11.s64 + -12720;
	// bl 0x822960c0
	ctx.lr = 0x82335114;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82335124;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335130;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82335138;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82335140;
	sub_82299080(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82335154
	if (ctx.cr6.eq) goto loc_82335154;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82335158
	goto loc_82335158;
loc_82335154:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82335158:
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233516C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335184"))) PPC_WEAK_FUNC(sub_82335184);
PPC_FUNC_IMPL(__imp__sub_82335184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335188"))) PPC_WEAK_FUNC(sub_82335188);
PPC_FUNC_IMPL(__imp__sub_82335188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82335190;
	__savegprlr_15(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// bl 0x822960c0
	ctx.lr = 0x823351B8;
	sub_822960C0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r31,r11,-12684
	ctx.r31.s64 = ctx.r11.s64 + -12684;
	// bl 0x822960c0
	ctx.lr = 0x823351CC;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822b2280
	ctx.lr = 0x823351DC;
	sub_822B2280(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82335200
	if (ctx.cr6.eq) goto loc_82335200;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294520
	ctx.lr = 0x82335200;
	sub_82294520(ctx, base);
loc_82335200:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294cc8
	ctx.lr = 0x82335208;
	sub_82294CC8(ctx, base);
	// lwz r27,220(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r15,216(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// addi r18,r11,11272
	ctx.r18.s64 = ctx.r11.s64 + 11272;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bne cr6,0x82335234
	if (!ctx.cr6.eq) goto loc_82335234;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_82335234:
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8233535c
	if (!ctx.cr6.gt) goto loc_8233535C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82335270:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233528c
	if (ctx.cr6.eq) goto loc_8233528C;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82335290
	goto loc_82335290;
loc_8233528C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_82335290:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b2280
	ctx.lr = 0x8233529C;
	sub_822B2280(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x823352b4
	if (!ctx.cr6.eq) goto loc_823352B4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_823352B4:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82335188
	ctx.lr = 0x823352C4;
	sub_82335188(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233530c
	if (ctx.cr6.eq) goto loc_8233530C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233533c
	if (ctx.cr6.eq) goto loc_8233533C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823352ec
	if (!ctx.cr6.eq) goto loc_823352EC;
	// bl 0x822900a0
	ctx.lr = 0x823352E8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823352EC:
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
	ctx.lr = 0x82335308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8233530C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233533c
	if (ctx.cr6.eq) goto loc_8233533C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335328
	if (!ctx.cr6.eq) goto loc_82335328;
	// bl 0x822900a0
	ctx.lr = 0x82335324;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335328:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233533C:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// blt cr6,0x82335270
	if (ctx.cr6.lt) goto loc_82335270;
loc_8233535C:
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// bne cr6,0x82335378
	if (!ctx.cr6.eq) goto loc_82335378;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_82335378:
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82335834
	if (!ctx.cr6.gt) goto loc_82335834;
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
loc_823353B4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// add r30,r23,r11
	ctx.r30.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// beq cr6,0x82335420
	if (ctx.cr6.eq) goto loc_82335420;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823353f0
	if (!ctx.cr6.eq) goto loc_823353F0;
	// bl 0x822900a0
	ctx.lr = 0x823353EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823353F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233540C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// bl 0x82bea998
	ctx.lr = 0x82335420;
	sub_82BEA998(ctx, base);
loc_82335420:
	// lwz r11,28904(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335480
	if (ctx.cr6.eq) goto loc_82335480;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r31,r19,1
	ctx.r31.u64 = ctx.r19.u64 | 1;
	// bl 0x8232ed00
	ctx.lr = 0x8233543C;
	sub_8232ED00(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335450
	if (ctx.cr6.eq) goto loc_82335450;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82335454
	goto loc_82335454;
loc_82335450:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_82335454:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822960c0
	ctx.lr = 0x8233545C;
	sub_822960C0(ctx, base);
	// lwz r11,28904(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28904);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// ori r19,r31,2
	ctx.r19.u64 = ctx.r31.u64 | 2;
	// bl 0x822bb7d0
	ctx.lr = 0x82335470;
	sub_822BB7D0(ctx, base);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x82335484
	if (!ctx.cr6.eq) goto loc_82335484;
loc_82335480:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82335484:
	// rlwinm r11,r19,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233551c
	if (ctx.cr6.eq) goto loc_8233551C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r19,r19,0,31,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823354dc
	if (ctx.cr6.eq) goto loc_823354DC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233550c
	if (ctx.cr6.eq) goto loc_8233550C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823354bc
	if (!ctx.cr6.eq) goto loc_823354BC;
	// bl 0x822900a0
	ctx.lr = 0x823354B8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823354BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823354D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_823354DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233550c
	if (ctx.cr6.eq) goto loc_8233550C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823354f8
	if (!ctx.cr6.eq) goto loc_823354F8;
	// bl 0x822900a0
	ctx.lr = 0x823354F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823354F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233550C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233550C:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
loc_8233551C:
	// clrlwi r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823355c0
	if (ctx.cr6.eq) goto loc_823355C0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r19,r19,0,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335584
	if (ctx.cr6.eq) goto loc_82335584;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823355b4
	if (ctx.cr6.eq) goto loc_823355B4;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335560
	if (!ctx.cr6.eq) goto loc_82335560;
	// bl 0x822900a0
	ctx.lr = 0x8233555C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335560:
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
	ctx.lr = 0x8233557C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82335584:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823355b4
	if (ctx.cr6.eq) goto loc_823355B4;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823355a0
	if (!ctx.cr6.eq) goto loc_823355A0;
	// bl 0x822900a0
	ctx.lr = 0x8233559C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823355A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823355B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823355B4:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
loc_823355C0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823355d0
	if (ctx.cr6.eq) goto loc_823355D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823355e0
	if (!ctx.cr6.eq) goto loc_823355E0;
loc_823355D0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823357a0
	if (ctx.cr6.eq) goto loc_823357A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823357a0
	if (!ctx.cr6.eq) goto loc_823357A0;
loc_823355E0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823355fc
	if (ctx.cr6.eq) goto loc_823355FC;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82335600
	goto loc_82335600;
loc_823355FC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_82335600:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822b2280
	ctx.lr = 0x8233560C;
	sub_822B2280(ctx, base);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r31,4(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82335694
	if (!ctx.cr6.gt) goto loc_82335694;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82335650
	if (!ctx.cr6.eq) goto loc_82335650;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335694
	if (ctx.cr6.eq) goto loc_82335694;
loc_82335650:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82335674
	if (!ctx.cr6.eq) goto loc_82335674;
	// bl 0x822900a0
	ctx.lr = 0x82335670;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335674:
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
	ctx.lr = 0x82335690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r3.u32);
loc_82335694:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233571c
	if (ctx.cr0.eq) goto loc_8233571C;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82335700
	if (ctx.cr6.eq) goto loc_82335700;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823356e0
	if (!ctx.cr6.eq) goto loc_823356E0;
	// bl 0x822900a0
	ctx.lr = 0x823356DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823356E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823356FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82335700:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233571c
	if (ctx.cr6.eq) goto loc_8233571C;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bea998
	ctx.lr = 0x8233571C;
	sub_82BEA998(ctx, base);
loc_8233571C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335764
	if (ctx.cr6.eq) goto loc_82335764;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82335794
	if (ctx.cr6.eq) goto loc_82335794;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335744
	if (!ctx.cr6.eq) goto loc_82335744;
	// bl 0x822900a0
	ctx.lr = 0x82335740;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335744:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82335764:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82335794
	if (ctx.cr6.eq) goto loc_82335794;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335780
	if (!ctx.cr6.eq) goto loc_82335780;
	// bl 0x822900a0
	ctx.lr = 0x8233577C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335780:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82335794:
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
loc_823357A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823357e4
	if (ctx.cr6.eq) goto loc_823357E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82335814
	if (ctx.cr6.eq) goto loc_82335814;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823357c4
	if (!ctx.cr6.eq) goto loc_823357C4;
	// bl 0x822900a0
	ctx.lr = 0x823357C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823357C4:
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
	ctx.lr = 0x823357E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_823357E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82335814
	if (ctx.cr6.eq) goto loc_82335814;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335800
	if (!ctx.cr6.eq) goto loc_82335800;
	// bl 0x822900a0
	ctx.lr = 0x823357FC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335800:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82335814:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// blt cr6,0x823353b4
	if (ctx.cr6.lt) goto loc_823353B4;
loc_82335834:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82295e20
	ctx.lr = 0x8233583C;
	sub_82295E20(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295e20
	ctx.lr = 0x82335844;
	sub_82295E20(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233588c
	if (ctx.cr6.eq) goto loc_8233588C;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823358bc
	if (ctx.cr6.eq) goto loc_823358BC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233586c
	if (!ctx.cr6.eq) goto loc_8233586C;
	// bl 0x822900a0
	ctx.lr = 0x82335868;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8233586C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_8233588C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823358bc
	if (ctx.cr6.eq) goto loc_823358BC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823358a8
	if (!ctx.cr6.eq) goto loc_823358A8;
	// bl 0x822900a0
	ctx.lr = 0x823358A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823358A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823358BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823358BC:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335908
	if (ctx.cr6.eq) goto loc_82335908;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335938
	if (ctx.cr6.eq) goto loc_82335938;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823358e8
	if (!ctx.cr6.eq) goto loc_823358E8;
	// bl 0x822900a0
	ctx.lr = 0x823358E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_823358E8:
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
	ctx.lr = 0x82335904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82335908:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335938
	if (ctx.cr6.eq) goto loc_82335938;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335924
	if (!ctx.cr6.eq) goto loc_82335924;
	// bl 0x822900a0
	ctx.lr = 0x82335920;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82335924:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82335938:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335940"))) PPC_WEAK_FUNC(sub_82335940);
PPC_FUNC_IMPL(__imp__sub_82335940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82335948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233595C;
	sub_82294BB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82335988
	if (ctx.cr6.eq) goto loc_82335988;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82335988;
	sub_82294520(ctx, base);
loc_82335988:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82335990;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233599C"))) PPC_WEAK_FUNC(sub_8233599C);
PPC_FUNC_IMPL(__imp__sub_8233599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823359A0"))) PPC_WEAK_FUNC(sub_823359A0);
PPC_FUNC_IMPL(__imp__sub_823359A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823359b4
	if (ctx.cr6.eq) goto loc_823359B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823359bc
	goto loc_823359BC;
loc_823359B4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
loc_823359BC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,92
	ctx.r9.s64 = 92;
loc_823359CC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x823359e0
	if (ctx.cr6.eq) goto loc_823359E0;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x823359e4
	if (!ctx.cr6.eq) goto loc_823359E4;
loc_823359E0:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_823359E4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823359cc
	if (!ctx.cr6.eq) goto loc_823359CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823359F8"))) PPC_WEAK_FUNC(sub_823359F8);
PPC_FUNC_IMPL(__imp__sub_823359F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82335A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822960c0
	ctx.lr = 0x82335A0C;
	sub_822960C0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r30,r11,-19588
	ctx.r30.s64 = ctx.r11.s64 + -19588;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1d38
	ctx.lr = 0x82335A2C;
	sub_822B1D38(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x82335a64
	if (ctx.cr6.eq) goto loc_82335A64;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1c78
	ctx.lr = 0x82335A50;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335A5C;
	sub_82295908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82335A64;
	sub_82299080(ctx, base);
loc_82335A64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r11,-20724
	ctx.r4.s64 = ctx.r11.s64 + -20724;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1d38
	ctx.lr = 0x82335A80;
	sub_822B1D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82335ab0
	if (ctx.cr6.eq) goto loc_82335AB0;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1c78
	ctx.lr = 0x82335A9C;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335AA8;
	sub_82295908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82335AB0;
	sub_82299080(ctx, base);
loc_82335AB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1d38
	ctx.lr = 0x82335AC8;
	sub_822B1D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82335af8
	if (ctx.cr6.eq) goto loc_82335AF8;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1c78
	ctx.lr = 0x82335AE4;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335AF0;
	sub_82295908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82335AF8;
	sub_82299080(ctx, base);
loc_82335AF8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82335b14
	if (ctx.cr6.eq) goto loc_82335B14;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82335b18
	goto loc_82335B18;
loc_82335B14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82335B18:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// bl 0x82cafee0
	ctx.lr = 0x82335B24;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335b74
	if (ctx.cr6.eq) goto loc_82335B74;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335b40
	if (ctx.cr6.eq) goto loc_82335B40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82335b44
	goto loc_82335B44;
loc_82335B40:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82335B44:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82335b74
	if (ctx.cr6.eq) goto loc_82335B74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1b70
	ctx.lr = 0x82335B60;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335B6C;
	sub_82295908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82335B74;
	sub_82299080(ctx, base);
loc_82335B74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233c740
	ctx.lr = 0x82335B80;
	sub_8233C740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335B8C;
	sub_82295908(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82335bb4
	if (ctx.cr6.eq) goto loc_82335BB4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82335BB4;
	sub_82294520(ctx, base);
loc_82335BB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82335BBC;
	sub_82294CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335BC8"))) PPC_WEAK_FUNC(sub_82335BC8);
PPC_FUNC_IMPL(__imp__sub_82335BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82335BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822b2a20
	ctx.lr = 0x82335BF0;
	sub_822B2A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823359a0
	ctx.lr = 0x82335BF8;
	sub_823359A0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r10,-19588
	ctx.r4.s64 = ctx.r10.s64 + -19588;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b1d38
	ctx.lr = 0x82335C10;
	sub_822B1D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x82335c78
	if (ctx.cr6.eq) goto loc_82335C78;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1b70
	ctx.lr = 0x82335C34;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295908
	ctx.lr = 0x82335C40;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82335C48;
	sub_82299080(ctx, base);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1c78
	ctx.lr = 0x82335C60;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335C6C;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82335C74;
	sub_82299080(ctx, base);
	// b 0x82335c84
	goto loc_82335C84;
loc_82335C78:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b2a20
	ctx.lr = 0x82335C84;
	sub_822B2A20(ctx, base);
loc_82335C84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1d38
	ctx.lr = 0x82335CA0;
	sub_822B1D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82335d04
	if (ctx.cr6.eq) goto loc_82335D04;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1c78
	ctx.lr = 0x82335CC4;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x82335CD0;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82335CD8;
	sub_82299080(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1b70
	ctx.lr = 0x82335CE8;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82335CF4;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82335CFC;
	sub_82299080(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82335D04:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b2a20
	ctx.lr = 0x82335D10;
	sub_822B2A20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335D18"))) PPC_WEAK_FUNC(sub_82335D18);
PPC_FUNC_IMPL(__imp__sub_82335D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82335D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82335188
	ctx.lr = 0x82335D48;
	sub_82335188(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82335db0
	if (!ctx.cr6.gt) goto loc_82335DB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
loc_82335D60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82335d7c
	if (ctx.cr6.eq) goto loc_82335D7C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82335d80
	goto loc_82335D80;
loc_82335D7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82335D80:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82335d60
	if (ctx.cr6.lt) goto loc_82335D60;
loc_82335DB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295e20
	ctx.lr = 0x82335DB8;
	sub_82295E20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335DC0"))) PPC_WEAK_FUNC(sub_82335DC0);
PPC_FUNC_IMPL(__imp__sub_82335DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82335DC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82335DD4;
	sub_82294BB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x823359a0
	ctx.lr = 0x82335DF8;
	sub_823359A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-12676
	ctx.r4.s64 = ctx.r11.s64 + -12676;
	// bl 0x8232e868
	ctx.lr = 0x82335E08;
	sub_8232E868(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230f538
	ctx.lr = 0x82335E20;
	sub_8230F538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823360f4
	if (ctx.cr6.eq) goto loc_823360F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
loc_82335E34:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// bne cr6,0x82335e48
	if (!ctx.cr6.eq) goto loc_82335E48;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82335E48:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82335e94
	if (ctx.cr0.lt) goto loc_82335E94;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// bne cr6,0x82335e68
	if (!ctx.cr6.eq) goto loc_82335E68;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82335E68:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82335e94
	if (ctx.cr6.lt) goto loc_82335E94;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82335E78:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// beq cr6,0x82335e94
	if (ctx.cr6.eq) goto loc_82335E94;
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x82335e78
	if (!ctx.cr0.lt) goto loc_82335E78;
loc_82335E94:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335ea8
	if (!ctx.cr6.eq) goto loc_82335EA8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82335EA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82335eb4
	if (!ctx.cr6.eq) goto loc_82335EB4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82335EB4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822960c0
	ctx.lr = 0x82335EBC;
	sub_822960C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822960c0
	ctx.lr = 0x82335ECC;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822952c8
	ctx.lr = 0x82335EDC;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x82335EE8;
	sub_82295908(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335f44
	if (ctx.cr6.eq) goto loc_82335F44;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335f80
	if (ctx.cr6.eq) goto loc_82335F80;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335f20
	if (!ctx.cr6.eq) goto loc_82335F20;
	// bl 0x822900a0
	ctx.lr = 0x82335F1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82335F20:
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
	ctx.lr = 0x82335F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// b 0x82335f48
	goto loc_82335F48;
loc_82335F44:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82335F48:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335f80
	if (ctx.cr6.eq) goto loc_82335F80;
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335f68
	if (!ctx.cr6.eq) goto loc_82335F68;
	// bl 0x822900a0
	ctx.lr = 0x82335F64;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82335F68:
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
	ctx.lr = 0x82335F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82335F80:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// beq cr6,0x82335fe8
	if (ctx.cr6.eq) goto loc_82335FE8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336024
	if (ctx.cr6.eq) goto loc_82336024;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335fc4
	if (!ctx.cr6.eq) goto loc_82335FC4;
	// bl 0x822900a0
	ctx.lr = 0x82335FC0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82335FC4:
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
	ctx.lr = 0x82335FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// b 0x82335fec
	goto loc_82335FEC;
loc_82335FE8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82335FEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336024
	if (ctx.cr6.eq) goto loc_82336024;
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233600c
	if (!ctx.cr6.eq) goto loc_8233600C;
	// bl 0x822900a0
	ctx.lr = 0x82336008;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233600C:
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
	ctx.lr = 0x82336024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336024:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// beq cr6,0x8233608c
	if (ctx.cr6.eq) goto loc_8233608C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823360c8
	if (ctx.cr6.eq) goto loc_823360C8;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336068
	if (!ctx.cr6.eq) goto loc_82336068;
	// bl 0x822900a0
	ctx.lr = 0x82336064;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82336068:
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
	ctx.lr = 0x82336084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// b 0x82336090
	goto loc_82336090;
loc_8233608C:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82336090:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823360c8
	if (ctx.cr6.eq) goto loc_823360C8;
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823360b0
	if (!ctx.cr6.eq) goto loc_823360B0;
	// bl 0x822900a0
	ctx.lr = 0x823360AC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823360B0:
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
	ctx.lr = 0x823360C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823360C8:
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230f538
	ctx.lr = 0x823360EC;
	sub_8230F538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335e34
	if (!ctx.cr6.eq) goto loc_82335E34;
loc_823360F4:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336118
	if (ctx.cr6.eq) goto loc_82336118;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294520
	ctx.lr = 0x82336118;
	sub_82294520(ctx, base);
loc_82336118:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294cc8
	ctx.lr = 0x82336120;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336144
	if (ctx.cr6.eq) goto loc_82336144;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82336144;
	sub_82294520(ctx, base);
loc_82336144:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x8233614C;
	sub_82294CC8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336170
	if (ctx.cr6.eq) goto loc_82336170;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82336170;
	sub_82294520(ctx, base);
loc_82336170:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82336178;
	sub_82294CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336184"))) PPC_WEAK_FUNC(sub_82336184);
PPC_FUNC_IMPL(__imp__sub_82336184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336188"))) PPC_WEAK_FUNC(sub_82336188);
PPC_FUNC_IMPL(__imp__sub_82336188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82336190;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-12668
	ctx.r4.s64 = ctx.r11.s64 + -12668;
	// bl 0x822960c0
	ctx.lr = 0x823361BC;
	sub_822960C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8233c6a0
	ctx.lr = 0x823361CC;
	sub_8233C6A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336200
	if (!ctx.cr6.eq) goto loc_82336200;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-12676
	ctx.r4.s64 = ctx.r11.s64 + -12676;
	// bl 0x822960c0
	ctx.lr = 0x823361E4;
	sub_822960C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x8233c6a0
	ctx.lr = 0x823361F4;
	sub_8233C6A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82336204
	if (ctx.cr6.eq) goto loc_82336204;
loc_82336200:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82336204:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82336220
	if (ctx.cr6.eq) goto loc_82336220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x82336220;
	sub_82299080(ctx, base);
loc_82336220:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336234
	if (ctx.cr6.eq) goto loc_82336234;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82336234;
	sub_82299080(ctx, base);
loc_82336234:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336264
	if (ctx.cr6.eq) goto loc_82336264;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,17384
	ctx.r4.s64 = ctx.r11.s64 + 17384;
	// bl 0x822960c0
	ctx.lr = 0x82336250;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x8233625C;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82336264;
	sub_82299080(ctx, base);
loc_82336264:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336278
	if (ctx.cr6.eq) goto loc_82336278;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82336280
	goto loc_82336280;
loc_82336278:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82336280:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2308
	ctx.lr = 0x82336288;
	sub_822B2308(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82335dc0
	ctx.lr = 0x82336294;
	sub_82335DC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823362b8
	if (ctx.cr6.eq) goto loc_823362B8;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x823362B8;
	sub_82294520(ctx, base);
loc_823362B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x823362C0;
	sub_82294CC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823362CC"))) PPC_WEAK_FUNC(sub_823362CC);
PPC_FUNC_IMPL(__imp__sub_823362CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823362D0"))) PPC_WEAK_FUNC(sub_823362D0);
PPC_FUNC_IMPL(__imp__sub_823362D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x823362D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823359f8
	ctx.lr = 0x823362F4;
	sub_823359F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822960c0
	ctx.lr = 0x82336300;
	sub_822960C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823359a0
	ctx.lr = 0x82336308;
	sub_823359A0(ctx, base);
	// lwz r26,164(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82336328
	if (!ctx.cr6.eq) goto loc_82336328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82336328:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822960c0
	ctx.lr = 0x82336330;
	sub_822960C0(ctx, base);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822acbd0
	ctx.lr = 0x82336340;
	sub_822ACBD0(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233636c
	if (ctx.cr6.eq) goto loc_8233636C;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x8233636C;
	sub_82294520(ctx, base);
loc_8233636C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x82336374;
	sub_82294CC8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8233649c
	if (!ctx.cr6.eq) goto loc_8233649C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233649c
	if (ctx.cr6.eq) goto loc_8233649C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82336188
	ctx.lr = 0x82336390;
	sub_82336188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294bb8
	ctx.lr = 0x8233639C;
	sub_82294BB8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x823363A4;
	sub_82299080(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82336188
	ctx.lr = 0x823363B0;
	sub_82336188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294bb8
	ctx.lr = 0x823363BC;
	sub_82294BB8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x823363C4;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232ee60
	ctx.lr = 0x823363D4;
	sub_8232EE60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8232ee60
	ctx.lr = 0x823363E8;
	sub_8232EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b21c0
	ctx.lr = 0x823363F0;
	sub_822B21C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x823363FC;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x82336404;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336420
	if (ctx.cr6.eq) goto loc_82336420;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295cb8
	ctx.lr = 0x82336414;
	sub_82295CB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295cb8
	ctx.lr = 0x8233641C;
	sub_82295CB8(ctx, base);
	// b 0x823364c8
	goto loc_823364C8;
loc_82336420:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82336470
	if (!ctx.cr6.eq) goto loc_82336470;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336470
	if (!ctx.cr6.eq) goto loc_82336470;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233644c
	if (!ctx.cr6.eq) goto loc_8233644C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8233644C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336460
	if (!ctx.cr6.eq) goto loc_82336460;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82336460:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-12656
	ctx.r4.s64 = ctx.r11.s64 + -12656;
	// bl 0x822bc6c8
	ctx.lr = 0x82336470;
	sub_822BC6C8(ctx, base);
loc_82336470:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295cb8
	ctx.lr = 0x82336478;
	sub_82295CB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295cb8
	ctx.lr = 0x82336480;
	sub_82295CB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295cb8
	ctx.lr = 0x82336488;
	sub_82295CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82336490;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8233649C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823364b0
	if (!ctx.cr6.eq) goto loc_823364B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823364B0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x823364c0
	if (!ctx.cr6.eq) goto loc_823364C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823364C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c31d0
	ctx.lr = 0x823364C8;
	sub_822C31D0(ctx, base);
loc_823364C8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295cb8
	ctx.lr = 0x823364D0;
	sub_82295CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x823364D8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823364E4"))) PPC_WEAK_FUNC(sub_823364E4);
PPC_FUNC_IMPL(__imp__sub_823364E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823364E8"))) PPC_WEAK_FUNC(sub_823364E8);
PPC_FUNC_IMPL(__imp__sub_823364E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x823364F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8233adf8
	ctx.lr = 0x82336504;
	sub_8233ADF8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bl 0x82294a58
	ctx.lr = 0x82336514;
	sub_82294A58(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12564
	ctx.r4.s64 = ctx.r10.s64 + -12564;
	// bl 0x822960c0
	ctx.lr = 0x8233652C;
	sub_822960C0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r9,-12548
	ctx.r4.s64 = ctx.r9.s64 + -12548;
	// addi r3,r8,25392
	ctx.r3.s64 = ctx.r8.s64 + 25392;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82332a90
	ctx.lr = 0x82336544;
	sub_82332A90(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x82336564
	if (!ctx.cr6.eq) goto loc_82336564;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82336564:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-12532
	ctx.r4.s64 = ctx.r11.s64 + -12532;
	// bl 0x82cb0328
	ctx.lr = 0x82336570;
	sub_82CB0328(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,168
	ctx.r31.s64 = ctx.r11.s64 + 168;
	// beq cr6,0x8233658c
	if (ctx.cr6.eq) goto loc_8233658C;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
loc_8233658C:
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233a3c0
	ctx.lr = 0x82336598;
	sub_8233A3C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823365e4
	if (!ctx.cr6.gt) goto loc_823365E4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823365A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823365c4
	if (ctx.cr6.eq) goto loc_823365C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823365c8
	goto loc_823365C8;
loc_823365C4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_823365C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82335d18
	ctx.lr = 0x823365D0;
	sub_82335D18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823365a8
	if (ctx.cr6.lt) goto loc_823365A8;
loc_823365E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336630
	if (ctx.cr6.eq) goto loc_82336630;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82336660
	if (ctx.cr6.eq) goto loc_82336660;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336610
	if (!ctx.cr6.eq) goto loc_82336610;
	// bl 0x822900a0
	ctx.lr = 0x8233660C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82336610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233662C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82336630:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82336660
	if (ctx.cr6.eq) goto loc_82336660;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233664c
	if (!ctx.cr6.eq) goto loc_8233664C;
	// bl 0x822900a0
	ctx.lr = 0x82336648;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233664C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336660:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336668"))) PPC_WEAK_FUNC(sub_82336668);
PPC_FUNC_IMPL(__imp__sub_82336668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82336670;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x823366a0
	if (!ctx.cr6.eq) goto loc_823366A0;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r17,r11,-24656
	ctx.r17.s64 = ctx.r11.s64 + -24656;
loc_823366A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823366A8;
	sub_82CB0EC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-12516
	ctx.r30.s64 = ctx.r11.s64 + -12516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823366BC;
	sub_82CB0EC8(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823366f4
	if (!ctx.cr6.gt) goto loc_823366F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823366CC;
	sub_82CB0EC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823366D8;
	sub_82CB0EC8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cb0328
	ctx.lr = 0x823366EC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82336f70
	if (ctx.cr6.eq) goto loc_82336F70;
loc_823366F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823359f8
	ctx.lr = 0x82336700;
	sub_823359F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294bb8
	ctx.lr = 0x8233670C;
	sub_82294BB8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x82336714;
	sub_82299080(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r23,152(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,144(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r14,1
	ctx.r14.s64 = 1;
	// addi r16,r15,24
	ctx.r16.s64 = ctx.r15.s64 + 24;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r19,r9,11272
	ctx.r19.s64 = ctx.r9.s64 + 11272;
	// addi r20,r10,-26732
	ctx.r20.s64 = ctx.r10.s64 + -26732;
	// addi r18,r11,-12504
	ctx.r18.s64 = ctx.r11.s64 + -12504;
loc_82336744:
	// li r21,2
	ctx.r21.s64 = 2;
loc_82336748:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8233676c
	if (!ctx.cr6.eq) goto loc_8233676C;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r24,r24,1
	ctx.r24.u64 = ctx.r24.u64 | 1;
	// bl 0x82295ff0
	ctx.lr = 0x82336764;
	sub_82295FF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823367d8
	goto loc_823367D8;
loc_8233676C:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x823367d4
	if (ctx.cr6.eq) goto loc_823367D4;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r31,r22,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823367a4
	if (!ctx.cr6.eq) goto loc_823367A4;
	// bl 0x822900a0
	ctx.lr = 0x823367A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823367A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823367C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// bl 0x82bea998
	ctx.lr = 0x823367D4;
	sub_82BEA998(ctx, base);
loc_823367D4:
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
loc_823367D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8233683c
	if (ctx.cr6.eq) goto loc_8233683C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233680c
	if (!ctx.cr6.eq) goto loc_8233680C;
	// bl 0x822900a0
	ctx.lr = 0x82336808;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8233680C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82bea998
	ctx.lr = 0x8233683C;
	sub_82BEA998(ctx, base);
loc_8233683C:
	// rlwinm r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823368d4
	if (ctx.cr6.eq) goto loc_823368D4;
	// rlwinm r24,r24,0,31,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82336890
	if (ctx.cr6.eq) goto loc_82336890;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823368c0
	if (ctx.cr6.eq) goto loc_823368C0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336870
	if (!ctx.cr6.eq) goto loc_82336870;
	// bl 0x822900a0
	ctx.lr = 0x8233686C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336870:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233688C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82336890:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823368c0
	if (ctx.cr6.eq) goto loc_823368C0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823368ac
	if (!ctx.cr6.eq) goto loc_823368AC;
	// bl 0x822900a0
	ctx.lr = 0x823368A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823368AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823368C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823368C0:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
loc_823368D4:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336984
	if (ctx.cr6.eq) goto loc_82336984;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r24,r24,0,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336940
	if (ctx.cr6.eq) goto loc_82336940;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336978
	if (ctx.cr6.eq) goto loc_82336978;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233691c
	if (!ctx.cr6.eq) goto loc_8233691C;
	// bl 0x822900a0
	ctx.lr = 0x82336918;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8233691C:
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
	ctx.lr = 0x8233693C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_82336940:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336978
	if (ctx.cr6.eq) goto loc_82336978;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336960
	if (!ctx.cr6.eq) goto loc_82336960;
	// bl 0x822900a0
	ctx.lr = 0x8233695C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336960:
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
	ctx.lr = 0x82336978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336978:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
loc_82336984:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82336b34
	if (!ctx.cr6.eq) goto loc_82336B34;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232eff8
	ctx.lr = 0x8233699C;
	sub_8232EFF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// beq cr6,0x82336a04
	if (ctx.cr6.eq) goto loc_82336A04;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823369d4
	if (!ctx.cr6.eq) goto loc_823369D4;
	// bl 0x822900a0
	ctx.lr = 0x823369D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823369D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823369F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// bl 0x82bea998
	ctx.lr = 0x82336A04;
	sub_82BEA998(ctx, base);
loc_82336A04:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82336A10;
	sub_82295908(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82336a54
	if (ctx.cr6.eq) goto loc_82336A54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336a84
	if (ctx.cr6.eq) goto loc_82336A84;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336a34
	if (!ctx.cr6.eq) goto loc_82336A34;
	// bl 0x822900a0
	ctx.lr = 0x82336A30;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336A34:
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
	ctx.lr = 0x82336A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82336A54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336a84
	if (ctx.cr6.eq) goto loc_82336A84;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336a70
	if (!ctx.cr6.eq) goto loc_82336A70;
	// bl 0x822900a0
	ctx.lr = 0x82336A6C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336A70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336A84:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// beq cr6,0x82336aec
	if (ctx.cr6.eq) goto loc_82336AEC;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336b24
	if (ctx.cr6.eq) goto loc_82336B24;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336ac8
	if (!ctx.cr6.eq) goto loc_82336AC8;
	// bl 0x822900a0
	ctx.lr = 0x82336AC4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336AC8:
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
	ctx.lr = 0x82336AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82336AEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336b24
	if (ctx.cr6.eq) goto loc_82336B24;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336b0c
	if (!ctx.cr6.eq) goto loc_82336B0C;
	// bl 0x822900a0
	ctx.lr = 0x82336B08;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336B0C:
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
	ctx.lr = 0x82336B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336B24:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// b 0x82336ce0
	goto loc_82336CE0;
loc_82336B34:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x82336ce4
	if (!ctx.cr6.eq) goto loc_82336CE4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8232eff8
	ctx.lr = 0x82336B4C;
	sub_8232EFF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// beq cr6,0x82336bb4
	if (ctx.cr6.eq) goto loc_82336BB4;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336b84
	if (!ctx.cr6.eq) goto loc_82336B84;
	// bl 0x822900a0
	ctx.lr = 0x82336B80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336B84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// bl 0x82bea998
	ctx.lr = 0x82336BB4;
	sub_82BEA998(ctx, base);
loc_82336BB4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82336BC0;
	sub_82295908(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82336c04
	if (ctx.cr6.eq) goto loc_82336C04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336c34
	if (ctx.cr6.eq) goto loc_82336C34;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336be4
	if (!ctx.cr6.eq) goto loc_82336BE4;
	// bl 0x822900a0
	ctx.lr = 0x82336BE0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336BE4:
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
	ctx.lr = 0x82336C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82336C04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336c34
	if (ctx.cr6.eq) goto loc_82336C34;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336c20
	if (!ctx.cr6.eq) goto loc_82336C20;
	// bl 0x822900a0
	ctx.lr = 0x82336C1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336C20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336C34:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r26.u32);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// beq cr6,0x82336c9c
	if (ctx.cr6.eq) goto loc_82336C9C;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336cd4
	if (ctx.cr6.eq) goto loc_82336CD4;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336c78
	if (!ctx.cr6.eq) goto loc_82336C78;
	// bl 0x822900a0
	ctx.lr = 0x82336C74;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336C78:
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
	ctx.lr = 0x82336C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_82336C9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336cd4
	if (ctx.cr6.eq) goto loc_82336CD4;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336cbc
	if (!ctx.cr6.eq) goto loc_82336CBC;
	// bl 0x822900a0
	ctx.lr = 0x82336CB8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336CBC:
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
	ctx.lr = 0x82336CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336CD4:
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
loc_82336CE0:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82336CE4:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82336cf8
	if (!ctx.cr6.eq) goto loc_82336CF8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82336CF8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822960c0
	ctx.lr = 0x82336D00;
	sub_822960C0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8233a988
	ctx.lr = 0x82336D0C;
	sub_8233A988(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336d5c
	if (ctx.cr6.eq) goto loc_82336D5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336d8c
	if (ctx.cr6.eq) goto loc_82336D8C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336d3c
	if (!ctx.cr6.eq) goto loc_82336D3C;
	// bl 0x822900a0
	ctx.lr = 0x82336D38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336D3C:
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
	ctx.lr = 0x82336D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82336D5C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336d8c
	if (ctx.cr6.eq) goto loc_82336D8C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336d78
	if (!ctx.cr6.eq) goto loc_82336D78;
	// bl 0x822900a0
	ctx.lr = 0x82336D74;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336D78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336D8C:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// bne cr6,0x82336f7c
	if (!ctx.cr6.eq) goto loc_82336F7C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82336db0
	if (!ctx.cr6.eq) goto loc_82336DB0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82336DB0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822960c0
	ctx.lr = 0x82336DB8;
	sub_822960C0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r15,4
	ctx.r3.s64 = ctx.r15.s64 + 4;
	// bl 0x822acbd0
	ctx.lr = 0x82336DC4;
	sub_822ACBD0(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336e14
	if (ctx.cr6.eq) goto loc_82336E14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336e44
	if (ctx.cr6.eq) goto loc_82336E44;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336df4
	if (!ctx.cr6.eq) goto loc_82336DF4;
	// bl 0x822900a0
	ctx.lr = 0x82336DF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336DF4:
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
	ctx.lr = 0x82336E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82336E14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336e44
	if (ctx.cr6.eq) goto loc_82336E44;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336e30
	if (!ctx.cr6.eq) goto loc_82336E30;
	// bl 0x822900a0
	ctx.lr = 0x82336E2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336E30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336E44:
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// bne cr6,0x8233708c
	if (!ctx.cr6.eq) goto loc_8233708C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336ea0
	if (ctx.cr6.eq) goto loc_82336EA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82336ed0
	if (ctx.cr6.eq) goto loc_82336ED0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336e80
	if (!ctx.cr6.eq) goto loc_82336E80;
	// bl 0x822900a0
	ctx.lr = 0x82336E7C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336E80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82336EA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82336ed0
	if (ctx.cr6.eq) goto loc_82336ED0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336ebc
	if (!ctx.cr6.eq) goto loc_82336EBC;
	// bl 0x822900a0
	ctx.lr = 0x82336EB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336EBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336ED0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// blt cr6,0x82336748
	if (ctx.cr6.lt) goto loc_82336748;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// blt cr6,0x82336744
	if (ctx.cr6.lt) goto loc_82336744;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336f40
	if (ctx.cr6.eq) goto loc_82336F40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336f70
	if (ctx.cr6.eq) goto loc_82336F70;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336f20
	if (!ctx.cr6.eq) goto loc_82336F20;
	// bl 0x822900a0
	ctx.lr = 0x82336F1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336F20:
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
	ctx.lr = 0x82336F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82336F40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336f70
	if (ctx.cr6.eq) goto loc_82336F70;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336f5c
	if (!ctx.cr6.eq) goto loc_82336F5C;
	// bl 0x822900a0
	ctx.lr = 0x82336F58;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336F5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82336F7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82295908
	ctx.lr = 0x82336F88;
	sub_82295908(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336fd0
	if (ctx.cr6.eq) goto loc_82336FD0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337000
	if (ctx.cr6.eq) goto loc_82337000;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336fb0
	if (!ctx.cr6.eq) goto loc_82336FB0;
	// bl 0x822900a0
	ctx.lr = 0x82336FAC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336FB0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82336FD0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337000
	if (ctx.cr6.eq) goto loc_82337000;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336fec
	if (!ctx.cr6.eq) goto loc_82336FEC;
	// bl 0x822900a0
	ctx.lr = 0x82336FE8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82336FEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337000:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233704c
	if (ctx.cr6.eq) goto loc_8233704C;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337080
	if (ctx.cr6.eq) goto loc_82337080;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233702c
	if (!ctx.cr6.eq) goto loc_8233702C;
	// bl 0x822900a0
	ctx.lr = 0x82337028;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8233702C:
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
	ctx.lr = 0x82337048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_8233704C:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337080
	if (ctx.cr6.eq) goto loc_82337080;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233706c
	if (!ctx.cr6.eq) goto loc_8233706C;
	// bl 0x822900a0
	ctx.lr = 0x82337068;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8233706C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337080:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8233708C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82295908
	ctx.lr = 0x82337098;
	sub_82295908(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823370e0
	if (ctx.cr6.eq) goto loc_823370E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337110
	if (ctx.cr6.eq) goto loc_82337110;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823370c0
	if (!ctx.cr6.eq) goto loc_823370C0;
	// bl 0x822900a0
	ctx.lr = 0x823370BC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823370C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823370DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823370E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337110
	if (ctx.cr6.eq) goto loc_82337110;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823370fc
	if (!ctx.cr6.eq) goto loc_823370FC;
	// bl 0x822900a0
	ctx.lr = 0x823370F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823370FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337110:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233715c
	if (ctx.cr6.eq) goto loc_8233715C;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337080
	if (ctx.cr6.eq) goto loc_82337080;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233713c
	if (!ctx.cr6.eq) goto loc_8233713C;
	// bl 0x822900a0
	ctx.lr = 0x82337138;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8233713C:
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
	ctx.lr = 0x82337158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_8233715C:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337080
	if (ctx.cr6.eq) goto loc_82337080;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233706c
	if (!ctx.cr6.eq) goto loc_8233706C;
	// bl 0x822900a0
	ctx.lr = 0x82337178;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233719C"))) PPC_WEAK_FUNC(sub_8233719C);
PPC_FUNC_IMPL(__imp__sub_8233719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823371A0"))) PPC_WEAK_FUNC(sub_823371A0);
PPC_FUNC_IMPL(__imp__sub_823371A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x823371A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
loc_823371C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8233724c
	if (ctx.cr6.lt) goto loc_8233724C;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233724c
	if (!ctx.cr6.lt) goto loc_8233724C;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82337218
	if (!ctx.cr6.gt) goto loc_82337218;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82337218;
	sub_82294520(ctx, base);
loc_82337218:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82337244
	if (ctx.cr0.eq) goto loc_82337244;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82294bb8
	ctx.lr = 0x82337244;
	sub_82294BB8(ctx, base);
loc_82337244:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x823371c8
	goto loc_823371C8;
loc_8233724C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_82337254:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82337388
	if (ctx.cr6.lt) goto loc_82337388;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82337388
	if (!ctx.cr6.lt) goto loc_82337388;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x823372f0
	if (!ctx.cr6.gt) goto loc_823372F0;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bne cr6,0x823372ac
	if (!ctx.cr6.eq) goto loc_823372AC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823372f0
	if (ctx.cr6.eq) goto loc_823372F0;
loc_823372AC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x823372d0
	if (!ctx.cr6.eq) goto loc_823372D0;
	// bl 0x822900a0
	ctx.lr = 0x823372CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823372D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823372EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_823372F0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82337380
	if (ctx.cr0.eq) goto loc_82337380;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mulli r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 * 28;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82337344
	if (!ctx.cr6.eq) goto loc_82337344;
	// bl 0x822900a0
	ctx.lr = 0x82337340;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82337344:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82337364:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337380
	if (ctx.cr6.eq) goto loc_82337380;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82337380;
	sub_82BEA998(ctx, base);
loc_82337380:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82337254
	goto loc_82337254;
loc_82337388:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337394"))) PPC_WEAK_FUNC(sub_82337394);
PPC_FUNC_IMPL(__imp__sub_82337394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337398"))) PPC_WEAK_FUNC(sub_82337398);
PPC_FUNC_IMPL(__imp__sub_82337398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x823373A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822960c0
	ctx.lr = 0x823373B8;
	sub_822960C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82294bb8
	ctx.lr = 0x823373C8;
	sub_82294BB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x823373f4
	if (ctx.cr6.eq) goto loc_823373F4;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x823373F4;
	sub_82294520(ctx, base);
loc_823373F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x823373FC;
	sub_82294CC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823359f8
	ctx.lr = 0x82337408;
	sub_823359F8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233741c
	if (ctx.cr6.eq) goto loc_8233741C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82337424
	goto loc_82337424;
loc_8233741C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82337424:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x8233a898
	ctx.lr = 0x82337430;
	sub_8233A898(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337454
	if (ctx.cr6.eq) goto loc_82337454;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82337454;
	sub_82294520(ctx, base);
loc_82337454:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8233745C;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337480
	if (ctx.cr6.eq) goto loc_82337480;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82337480;
	sub_82294520(ctx, base);
loc_82337480:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x82337488;
	sub_82294CC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337494"))) PPC_WEAK_FUNC(sub_82337494);
PPC_FUNC_IMPL(__imp__sub_82337494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337498"))) PPC_WEAK_FUNC(sub_82337498);
PPC_FUNC_IMPL(__imp__sub_82337498) {
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
	// beq cr6,0x823374d0
	if (ctx.cr6.eq) goto loc_823374D0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x823374D0;
	sub_82294520(ctx, base);
loc_823374D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x823374D8;
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

__attribute__((alias("__imp__sub_823374EC"))) PPC_WEAK_FUNC(sub_823374EC);
PPC_FUNC_IMPL(__imp__sub_823374EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823374F0"))) PPC_WEAK_FUNC(sub_823374F0);
PPC_FUNC_IMPL(__imp__sub_823374F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x823374F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8233750C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82337554
	if (ctx.cr6.lt) goto loc_82337554;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82337554
	if (!ctx.cr6.lt) goto loc_82337554;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8233754c
	if (!ctx.cr6.eq) goto loc_8233754C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x8233aed8
	ctx.lr = 0x82337548;
	sub_8233AED8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8233754C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8233750c
	goto loc_8233750C;
loc_82337554:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82337564
	if (ctx.cr6.eq) goto loc_82337564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ae88
	ctx.lr = 0x82337564;
	sub_8233AE88(ctx, base);
loc_82337564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233756C"))) PPC_WEAK_FUNC(sub_8233756C);
PPC_FUNC_IMPL(__imp__sub_8233756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337570"))) PPC_WEAK_FUNC(sub_82337570);
PPC_FUNC_IMPL(__imp__sub_82337570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82337578;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r29,r11,-12496
	ctx.r29.s64 = ctx.r11.s64 + -12496;
loc_82337594:
	// lwz r6,17896(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17896);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,17896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17896, ctx.r11.u32);
	// bl 0x82347258
	ctx.lr = 0x823375B0;
	sub_82347258(ctx, base);
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823375C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82337594
	if (ctx.cr6.gt) goto loc_82337594;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823375D8"))) PPC_WEAK_FUNC(sub_823375D8);
PPC_FUNC_IMPL(__imp__sub_823375D8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x8233761c
	if (!ctx.cr6.eq) goto loc_8233761C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233760c
	if (ctx.cr6.eq) goto loc_8233760C;
loc_823375F4:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x8233760c
	if (ctx.cr6.eq) goto loc_8233760C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823375f4
	if (!ctx.cr6.eq) goto loc_823375F4;
loc_8233760C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233761c
	if (ctx.cr6.eq) goto loc_8233761C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_8233761C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337640
	if (ctx.cr6.eq) goto loc_82337640;
loc_82337628:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82337640
	if (ctx.cr6.eq) goto loc_82337640;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337628
	if (!ctx.cr6.eq) goto loc_82337628;
loc_82337640:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8233764C:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8233764c
	if (ctx.cr6.eq) goto loc_8233764C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337660"))) PPC_WEAK_FUNC(sub_82337660);
PPC_FUNC_IMPL(__imp__sub_82337660) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,-23856
	ctx.r5.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-12472
	ctx.r4.s64 = ctx.r10.s64 + -12472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232e868
	ctx.lr = 0x82337688;
	sub_8232E868(ctx, base);
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

__attribute__((alias("__imp__sub_823376A0"))) PPC_WEAK_FUNC(sub_823376A0);
PPC_FUNC_IMPL(__imp__sub_823376A0) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,-23856
	ctx.r5.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-12472
	ctx.r4.s64 = ctx.r10.s64 + -12472;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x823376CC;
	sub_8232E868(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r9,-12448
	ctx.r5.s64 = ctx.r9.s64 + -12448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x823376E0;
	sub_82295FF0(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82337708
	if (ctx.cr6.eq) goto loc_82337708;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82337708;
	sub_82294520(ctx, base);
loc_82337708:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82337710;
	sub_82294CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82337728"))) PPC_WEAK_FUNC(sub_82337728);
PPC_FUNC_IMPL(__imp__sub_82337728) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,-23856
	ctx.r5.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-12472
	ctx.r4.s64 = ctx.r10.s64 + -12472;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82337754;
	sub_8232E868(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r9,-12432
	ctx.r5.s64 = ctx.r9.s64 + -12432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82337768;
	sub_82295FF0(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82337790
	if (ctx.cr6.eq) goto loc_82337790;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82337790;
	sub_82294520(ctx, base);
loc_82337790:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82337798;
	sub_82294CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823377B0"))) PPC_WEAK_FUNC(sub_823377B0);
PPC_FUNC_IMPL(__imp__sub_823377B0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-12420
	ctx.r4.s64 = ctx.r11.s64 + -12420;
	// bl 0x822960c0
	ctx.lr = 0x823377D0;
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

__attribute__((alias("__imp__sub_823377E8"))) PPC_WEAK_FUNC(sub_823377E8);
PPC_FUNC_IMPL(__imp__sub_823377E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12420
	ctx.r4.s64 = ctx.r11.s64 + -12420;
	// bl 0x822960c0
	ctx.lr = 0x82337810;
	sub_822960C0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-12396
	ctx.r5.s64 = ctx.r10.s64 + -12396;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r9,-19588
	ctx.r31.s64 = ctx.r9.s64 + -19588;
	// bl 0x82295ff0
	ctx.lr = 0x8233782C;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8233783C;
	sub_82295FF0(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x82337864
	if (ctx.cr6.eq) goto loc_82337864;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82337864;
	sub_82294520(ctx, base);
loc_82337864:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x8233786C;
	sub_82294CC8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337890
	if (ctx.cr6.eq) goto loc_82337890;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82337890;
	sub_82294520(ctx, base);
loc_82337890:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82337898;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_823378B4"))) PPC_WEAK_FUNC(sub_823378B4);
PPC_FUNC_IMPL(__imp__sub_823378B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823378B8"))) PPC_WEAK_FUNC(sub_823378B8);
PPC_FUNC_IMPL(__imp__sub_823378B8) {
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
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r3,28876(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28876);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r7,r9,-3728
	ctx.r7.s64 = ctx.r9.s64 + -3728;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r8,-12380
	ctx.r5.s64 = ctx.r8.s64 + -12380;
	// addi r4,r4,-12340
	ctx.r4.s64 = ctx.r4.s64 + -12340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82337928"))) PPC_WEAK_FUNC(sub_82337928);
PPC_FUNC_IMPL(__imp__sub_82337928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r11,28904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28904);
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// b 0x8233a3c0
	sub_8233A3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337938"))) PPC_WEAK_FUNC(sub_82337938);
PPC_FUNC_IMPL(__imp__sub_82337938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337944"))) PPC_WEAK_FUNC(sub_82337944);
PPC_FUNC_IMPL(__imp__sub_82337944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337948"))) PPC_WEAK_FUNC(sub_82337948);
PPC_FUNC_IMPL(__imp__sub_82337948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82337950;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-2416(r1)
	ea = -2416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31885
	ctx.r23.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28892(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82337d5c
	if (!ctx.cr6.gt) goto loc_82337D5C;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// bl 0x822960c0
	ctx.lr = 0x823379B0;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82296158
	ctx.lr = 0x823379BC;
	sub_82296158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x823379C8;
	sub_82299080(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r24,r9,11272
	ctx.r24.s64 = ctx.r9.s64 + 11272;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r27,r10,-12284
	ctx.r27.s64 = ctx.r10.s64 + -12284;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// addi r26,r11,-12300
	ctx.r26.s64 = ctx.r11.s64 + -12300;
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// stw r21,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r21.u32);
loc_82337A10:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82337a34
	if (ctx.cr6.eq) goto loc_82337A34;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82337a38
	goto loc_82337A38;
loc_82337A34:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337A38:
	// lwz r3,28892(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82337a5c
	if (!ctx.cr6.lt) goto loc_82337A5C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r11,28876(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28876, ctx.r11.u32);
loc_82337A5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337a70
	if (ctx.cr6.eq) goto loc_82337A70;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82337a74
	goto loc_82337A74;
loc_82337A70:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337A74:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8235a010
	ctx.lr = 0x82337A7C;
	sub_8235A010(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82337ac4
	if (!ctx.cr6.gt) goto loc_82337AC4;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
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
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82337AB8;
	sub_82294520(ctx, base);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82337acc
	goto loc_82337ACC;
loc_82337AC4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_82337ACC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,12
	ctx.r5.s64 = 12;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82337AEC;
	sub_82E640B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8235a7a0
	ctx.lr = 0x82337B00;
	sub_8235A7A0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82337a10
	if (ctx.cr6.eq) goto loc_82337A10;
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82337b30
	if (ctx.cr6.eq) goto loc_82337B30;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82337b34
	goto loc_82337B34;
loc_82337B30:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337B34:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235a010
	ctx.lr = 0x82337B3C;
	sub_8235A010(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337b50
	if (ctx.cr6.eq) goto loc_82337B50;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82337b54
	goto loc_82337B54;
loc_82337B50:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337B54:
	// lwz r3,28892(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfd f1,176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233aba0
	ctx.lr = 0x82337B78;
	sub_8233ABA0(ctx, base);
	// addic. r28,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r28.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// blt 0x82337c50
	if (ctx.cr0.lt) goto loc_82337C50;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82337B98:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337bac
	if (ctx.cr6.eq) goto loc_82337BAC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82337bb0
	goto loc_82337BB0;
loc_82337BAC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337BB0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82359430
	ctx.lr = 0x82337BB8;
	sub_82359430(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337bcc
	if (ctx.cr6.eq) goto loc_82337BCC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82337bd0
	goto loc_82337BD0;
loc_82337BCC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82337BD0:
	// lwz r3,28892(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82337c30
	if (!ctx.cr6.gt) goto loc_82337C30;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82337C24;
	sub_82294520(ctx, base);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82337c34
	goto loc_82337C34;
loc_82337C30:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82337C34:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337c44
	if (ctx.cr0.eq) goto loc_82337C44;
	// stfd f31,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f31.u64);
loc_82337C44:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// bge 0x82337b98
	if (!ctx.cr0.lt) goto loc_82337B98;
loc_82337C50:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// bne cr6,0x82337ce8
	if (!ctx.cr6.eq) goto loc_82337CE8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82337ce8
	if (!ctx.cr6.gt) goto loc_82337CE8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r29,r9,23508
	ctx.r29.s64 = ctx.r9.s64 + 23508;
	// addi r28,r10,-12256
	ctx.r28.s64 = ctx.r10.s64 + -12256;
	// addi r27,r11,-10292
	ctx.r27.s64 = ctx.r11.s64 + -10292;
loc_82337C80:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfd f31,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// sth r11,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x82337C9C;
	sub_82CB16F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82347258
	ctx.lr = 0x82337CAC;
	sub_82347258(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82347258
	ctx.lr = 0x82337CC4;
	sub_82347258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235a930
	ctx.lr = 0x82337CD8;
	sub_8235A930(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82337c80
	if (ctx.cr6.lt) goto loc_82337C80;
loc_82337CE8:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82337d00
	if (!ctx.cr6.eq) goto loc_82337D00;
	// bl 0x822900a0
	ctx.lr = 0x82337CFC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82337D00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82293c10
	ctx.lr = 0x82337D24;
	sub_82293C10(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295e20
	ctx.lr = 0x82337D2C;
	sub_82295E20(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82337d5c
	if (ctx.cr6.eq) goto loc_82337D5C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82337d48
	if (!ctx.cr6.eq) goto loc_82337D48;
	// bl 0x822900a0
	ctx.lr = 0x82337D44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82337D48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337D5C:
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337D68"))) PPC_WEAK_FUNC(sub_82337D68);
PPC_FUNC_IMPL(__imp__sub_82337D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337D6C"))) PPC_WEAK_FUNC(sub_82337D6C);
PPC_FUNC_IMPL(__imp__sub_82337D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337D70"))) PPC_WEAK_FUNC(sub_82337D70);
PPC_FUNC_IMPL(__imp__sub_82337D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82337D78;
	__savegprlr_25(ctx, base);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,25392
	ctx.r31.s64 = ctx.r11.s64 + 25392;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x823328b0
	ctx.lr = 0x82337DA8;
	sub_823328B0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x82337df8
	if (ctx.cr6.eq) goto loc_82337DF8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823376a0
	ctx.lr = 0x82337DC0;
	sub_823376A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337dd4
	if (ctx.cr6.eq) goto loc_82337DD4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82337dd8
	goto loc_82337DD8;
loc_82337DD4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82337DD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,-11900
	ctx.r4.s64 = ctx.r11.s64 + -11900;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82347258
	ctx.lr = 0x82337DF0;
	sub_82347258(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82337DF8;
	sub_82299080(ctx, base);
loc_82337DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823328b0
	ctx.lr = 0x82337E0C;
	sub_823328B0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82337e5c
	if (ctx.cr6.eq) goto loc_82337E5C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823376a0
	ctx.lr = 0x82337E1C;
	sub_823376A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337e30
	if (ctx.cr6.eq) goto loc_82337E30;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82337e34
	goto loc_82337E34;
loc_82337E30:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82337E34:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,-23856
	ctx.r7.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-11884
	ctx.r4.s64 = ctx.r10.s64 + -11884;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347258
	ctx.lr = 0x82337E54;
	sub_82347258(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82337E5C;
	sub_82299080(ctx, base);
loc_82337E5C:
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337E64"))) PPC_WEAK_FUNC(sub_82337E64);
PPC_FUNC_IMPL(__imp__sub_82337E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337E68"))) PPC_WEAK_FUNC(sub_82337E68);
PPC_FUNC_IMPL(__imp__sub_82337E68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823376a0
	ctx.lr = 0x82337E8C;
	sub_823376A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337ea0
	if (ctx.cr6.eq) goto loc_82337EA0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82337ea8
	goto loc_82337EA8;
loc_82337EA0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_82337EA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r11,-11864
	ctx.r7.s64 = ctx.r11.s64 + -11864;
	// addi r6,r10,-11856
	ctx.r6.s64 = ctx.r10.s64 + -11856;
	// addi r4,r9,-11884
	ctx.r4.s64 = ctx.r9.s64 + -11884;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82347258
	ctx.lr = 0x82337ECC;
	sub_82347258(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x82337ef4
	if (ctx.cr6.eq) goto loc_82337EF4;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82337EF4;
	sub_82294520(ctx, base);
loc_82337EF4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x82337EFC;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82337F14"))) PPC_WEAK_FUNC(sub_82337F14);
PPC_FUNC_IMPL(__imp__sub_82337F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337F18"))) PPC_WEAK_FUNC(sub_82337F18);
PPC_FUNC_IMPL(__imp__sub_82337F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82337F20;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// addi r7,r10,-3728
	ctx.r7.s64 = ctx.r10.s64 + -3728;
	// addi r5,r9,-11832
	ctx.r5.s64 = ctx.r9.s64 + -11832;
	// addi r4,r8,-11804
	ctx.r4.s64 = ctx.r8.s64 + -11804;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82338240
	if (!ctx.cr6.gt) goto loc_82338240;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// bl 0x82337728
	ctx.lr = 0x82337F84;
	sub_82337728(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337fa0
	if (ctx.cr6.eq) goto loc_82337FA0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82337fa4
	goto loc_82337FA4;
loc_82337FA0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82337FA4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-11784
	ctx.r4.s64 = ctx.r11.s64 + -11784;
	// bl 0x8232e868
	ctx.lr = 0x82337FB4;
	sub_8232E868(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82337fc8
	if (!ctx.cr6.eq) goto loc_82337FC8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82337FC8:
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,28892(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82337FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82337FF4;
	sub_82299080(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82299080
	ctx.lr = 0x82337FFC;
	sub_82299080(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfd f0,-16648(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16648);
	// fmul f31,f12,f0
	ctx.f31.f64 = ctx.f12.f64 * ctx.f0.f64;
	// ble cr6,0x82338238
	if (!ctx.cr6.gt) goto loc_82338238;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r23,r11,-11772
	ctx.r23.s64 = ctx.r11.s64 + -11772;
loc_8233803C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82337728
	ctx.lr = 0x8233804C;
	sub_82337728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x8233805C;
	sub_822952C8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823380b8
	if (ctx.cr6.eq) goto loc_823380B8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823380f4
	if (ctx.cr6.eq) goto loc_823380F4;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338094
	if (!ctx.cr6.eq) goto loc_82338094;
	// bl 0x822900a0
	ctx.lr = 0x82338090;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82338094:
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
	ctx.lr = 0x823380B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// b 0x823380bc
	goto loc_823380BC;
loc_823380B8:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_823380BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823380f4
	if (ctx.cr6.eq) goto loc_823380F4;
	// lwz r11,28888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823380dc
	if (!ctx.cr6.eq) goto loc_823380DC;
	// bl 0x822900a0
	ctx.lr = 0x823380D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_823380DC:
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
	ctx.lr = 0x823380F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823380F4:
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// bne cr6,0x82338118
	if (!ctx.cr6.eq) goto loc_82338118;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82338118:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82cafee0
	ctx.lr = 0x82338120;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823381a0
	if (ctx.cr6.eq) goto loc_823381A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82338138
	if (!ctx.cr6.eq) goto loc_82338138;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82338138:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823381a0
	if (ctx.cr6.eq) goto loc_823381A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82338158
	if (!ctx.cr6.eq) goto loc_82338158;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82338158:
	// lwz r3,28892(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233816C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x823381a0
	if (!ctx.cr6.gt) goto loc_823381A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82338184
	if (!ctx.cr6.eq) goto loc_82338184;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82338184:
	// lwz r3,28892(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28892);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823381A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823381A0:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823381e8
	if (ctx.cr6.eq) goto loc_823381E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338218
	if (ctx.cr6.eq) goto loc_82338218;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823381c8
	if (!ctx.cr6.eq) goto loc_823381C8;
	// bl 0x822900a0
	ctx.lr = 0x823381C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_823381C8:
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
	ctx.lr = 0x823381E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823381E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338218
	if (ctx.cr6.eq) goto loc_82338218;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338204
	if (!ctx.cr6.eq) goto loc_82338204;
	// bl 0x822900a0
	ctx.lr = 0x82338200;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82338204:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82338218:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// blt cr6,0x8233803c
	if (ctx.cr6.lt) goto loc_8233803C;
loc_82338238:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295e20
	ctx.lr = 0x82338240;
	sub_82295E20(ctx, base);
loc_82338240:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233824C"))) PPC_WEAK_FUNC(sub_8233824C);
PPC_FUNC_IMPL(__imp__sub_8233824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338250"))) PPC_WEAK_FUNC(sub_82338250);
PPC_FUNC_IMPL(__imp__sub_82338250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82338258;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// addi r11,r11,-22472
	ctx.r11.s64 = ctx.r11.s64 + -22472;
	// addi r10,r10,-21384
	ctx.r10.s64 = ctx.r10.s64 + -21384;
	// addi r9,r9,-20792
	ctx.r9.s64 = ctx.r9.s64 + -20792;
	// stw r11,28892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28892, ctx.r11.u32);
	// stw r10,28896(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28896, ctx.r10.u32);
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// stw r9,28900(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28900, ctx.r9.u32);
	// bne cr6,0x823382d4
	if (!ctx.cr6.eq) goto loc_823382D4;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823382c4
	if (ctx.cr6.eq) goto loc_823382C4;
loc_823382AC:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x823382c4
	if (ctx.cr6.eq) goto loc_823382C4;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823382ac
	if (!ctx.cr6.eq) goto loc_823382AC;
loc_823382C4:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823382d4
	if (ctx.cr6.eq) goto loc_823382D4;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_823382D4:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823382f8
	if (ctx.cr6.eq) goto loc_823382F8;
loc_823382E0:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x823382f8
	if (ctx.cr6.eq) goto loc_823382F8;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823382e0
	if (!ctx.cr6.eq) goto loc_823382E0;
loc_823382F8:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338308
	if (ctx.cr6.eq) goto loc_82338308;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_82338308:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r27,r11,25392
	ctx.r27.s64 = ctx.r11.s64 + 25392;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb2e40
	ctx.lr = 0x8233831C;
	sub_82CB2E40(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// sth r11,8190(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8190, ctx.r11.u16);
	// addi r4,r10,-11752
	ctx.r4.s64 = ctx.r10.s64 + -11752;
	// addi r3,r9,28936
	ctx.r3.s64 = ctx.r9.s64 + 28936;
	// bl 0x82cafc18
	ctx.lr = 0x8233833C;
	sub_82CAFC18(ctx, base);
	// lwz r3,28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,24952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24952, ctx.r11.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82338360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,68(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82338374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31905
	ctx.r31.s64 = -2090926080;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// addi r10,r11,-21448
	ctx.r10.s64 = ctx.r11.s64 + -21448;
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r7,-23512
	ctx.r4.s64 = ctx.r7.s64 + -23512;
	// stw r11,28884(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28884, ctx.r11.u32);
	// stw r10,28868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28868, ctx.r10.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823383B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823383C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822959a8
	ctx.lr = 0x823383D4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823383f0
	if (ctx.cr6.eq) goto loc_823383F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-10332
	ctx.r10.s64 = ctx.r11.s64 + -10332;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823383f4
	goto loc_823383F4;
loc_823383F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823383F4:
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-21436
	ctx.r11.s64 = ctx.r11.s64 + -21436;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,28872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28872, ctx.r11.u32);
	// addi r4,r9,-11672
	ctx.r4.s64 = ctx.r9.s64 + -11672;
	// bl 0x823329d8
	ctx.lr = 0x82338428;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233843c
	if (!ctx.cr6.eq) goto loc_8233843C;
	// lwz r11,28872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28872);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8233843C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-11636
	ctx.r4.s64 = ctx.r11.s64 + -11636;
	// bl 0x823329d8
	ctx.lr = 0x8233844C;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82338460
	if (!ctx.cr6.eq) goto loc_82338460;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3784, ctx.r11.u32);
loc_82338460:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-11612
	ctx.r4.s64 = ctx.r11.s64 + -11612;
	// bl 0x823329d8
	ctx.lr = 0x82338470;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82338484
	if (!ctx.cr6.eq) goto loc_82338484;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3780, ctx.r11.u32);
loc_82338484:
	// bl 0x8235d0d8
	ctx.lr = 0x82338488;
	sub_8235D0D8(ctx, base);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,28876(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28876, ctx.r11.u32);
	// bl 0x823376a0
	ctx.lr = 0x8233849C;
	sub_823376A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823384b8
	if (ctx.cr6.eq) goto loc_823384B8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823384bc
	goto loc_823384BC;
loc_823384B8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_823384BC:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-23856
	ctx.r31.s64 = ctx.r11.s64 + -23856;
	// addi r30,r10,-11864
	ctx.r30.s64 = ctx.r10.s64 + -11864;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-11596
	ctx.r4.s64 = ctx.r11.s64 + -11596;
	// addi r3,r10,-3728
	ctx.r3.s64 = ctx.r10.s64 + -3728;
	// bl 0x82347258
	ctx.lr = 0x823384E8;
	sub_82347258(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x823384F0;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823376a0
	ctx.lr = 0x823384F8;
	sub_823376A0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233850c
	if (ctx.cr6.eq) goto loc_8233850C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82338510
	goto loc_82338510;
loc_8233850C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82338510:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-11560
	ctx.r4.s64 = ctx.r11.s64 + -11560;
	// addi r3,r10,6512
	ctx.r3.s64 = ctx.r10.s64 + 6512;
	// bl 0x82347258
	ctx.lr = 0x8233852C;
	sub_82347258(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82338534;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823376a0
	ctx.lr = 0x8233853C;
	sub_823376A0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82338550
	if (ctx.cr6.eq) goto loc_82338550;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82338554
	goto loc_82338554;
loc_82338550:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82338554:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-11528
	ctx.r4.s64 = ctx.r11.s64 + -11528;
	// addi r3,r10,4464
	ctx.r3.s64 = ctx.r10.s64 + 4464;
	// bl 0x82347258
	ctx.lr = 0x82338570;
	sub_82347258(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82338578;
	sub_82299080(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r31,r9,-11496
	ctx.r31.s64 = ctx.r9.s64 + -11496;
	// bl 0x823376a0
	ctx.lr = 0x82338588;
	sub_823376A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82338598;
	sub_82295FF0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823385ac
	if (ctx.cr6.eq) goto loc_823385AC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823385b0
	goto loc_823385B0;
loc_823385AC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_823385B0:
	// lwz r3,28876(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823385C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x823385CC;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x823385D4;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb22d8
	ctx.lr = 0x823385DC;
	sub_82CB22D8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82beb120
	ctx.lr = 0x823385E4;
	sub_82BEB120(ctx, base);
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,-23716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23716, ctx.r11.u32);
	// bl 0x82391770
	ctx.lr = 0x823385F4;
	sub_82391770(ctx, base);
	// bl 0x823728e0
	ctx.lr = 0x823385F8;
	sub_823728E0(ctx, base);
	// bl 0x822a15d0
	ctx.lr = 0x823385FC;
	sub_822A15D0(ctx, base);
	// lis r6,-31890
	ctx.r6.s64 = -2089943040;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// addi r5,r6,29152
	ctx.r5.s64 = ctx.r6.s64 + 29152;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// addi r30,r7,14476
	ctx.r30.s64 = ctx.r7.s64 + 14476;
	// stw r8,29152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 29152, ctx.r8.u32);
	// bne cr6,0x82338650
	if (!ctx.cr6.eq) goto loc_82338650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339998
	ctx.lr = 0x82338644;
	sub_82339998(ctx, base);
	// stw r3,-31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31952, ctx.r3.u32);
	// bl 0x82339a50
	ctx.lr = 0x8233864C;
	sub_82339A50(ctx, base);
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
loc_82338650:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82396ef8
	ctx.lr = 0x82338658;
	sub_82396EF8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// bl 0x82299ad8
	ctx.lr = 0x82338670;
	sub_82299AD8(ctx, base);
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338690
	if (!ctx.cr6.eq) goto loc_82338690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339998
	ctx.lr = 0x82338684;
	sub_82339998(ctx, base);
	// stw r3,-31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31952, ctx.r3.u32);
	// bl 0x82339a50
	ctx.lr = 0x8233868C;
	sub_82339A50(ctx, base);
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
loc_82338690:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823386A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e890
	ctx.lr = 0x823386C0;
	sub_8229E890(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r9,-11260
	ctx.r4.s64 = ctx.r9.s64 + -11260;
	// bl 0x823329d8
	ctx.lr = 0x823386D0;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823386fc
	if (ctx.cr6.eq) goto loc_823386FC;
	// addi r4,r29,132
	ctx.r4.s64 = ctx.r29.s64 + 132;
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// bl 0x8233a460
	ctx.lr = 0x823386E4;
	sub_8233A460(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x822936d0
	ctx.lr = 0x823386F0;
	sub_822936D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// bl 0x822936d0
	ctx.lr = 0x823386FC;
	sub_822936D0(ctx, base);
loc_823386FC:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,228
	ctx.r3.s64 = 228;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8233c610
	ctx.lr = 0x82338720;
	sub_8233C610(ctx, base);
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r10,28904
	ctx.r10.s64 = ctx.r10.s64 + 28904;
	// beq cr6,0x82338784
	if (ctx.cr6.eq) goto loc_82338784;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r7,14864
	ctx.r4.s64 = ctx.r7.s64 + 14864;
	// lwz r11,-25660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r7,r6,-7976
	ctx.r7.s64 = ctx.r6.s64 + -7976;
	// addi r6,r5,-7708
	ctx.r6.s64 = ctx.r5.s64 + -7708;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r28.u32);
	// stw r28,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r28.u32);
	// stw r28,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r28.u32);
	// stw r28,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r28.u32);
	// stw r28,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r28.u32);
	// stw r28,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r28.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// b 0x82338788
	goto loc_82338788;
loc_82338784:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82338788:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r8,184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// ori r7,r10,16384
	ctx.r7.u64 = ctx.r10.u64 | 16384;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ble cr6,0x823387ec
	if (!ctx.cr6.gt) goto loc_823387EC;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// rldicr r7,r8,44,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 44) & 0xFFFFFFFFFFFFFFFF;
loc_823387B8:
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,-15944(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15944);
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// ld r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// std r4,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r4.u64);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823387b8
	if (ctx.cr6.lt) goto loc_823387B8;
loc_823387EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-11232
	ctx.r4.s64 = ctx.r11.s64 + -11232;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x823328b0
	ctx.lr = 0x82338804;
	sub_823328B0(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233881c
	if (!ctx.cr6.eq) goto loc_8233881C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822aaad0
	ctx.lr = 0x82338818;
	sub_822AAAD0(ctx, base);
	// b 0x823388e0
	goto loc_823388E0;
loc_8233881C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822bd198
	ctx.lr = 0x82338824;
	sub_822BD198(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82338838
	if (ctx.cr6.eq) goto loc_82338838;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233883c
	goto loc_8233883C;
loc_82338838:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8233883C:
	// bl 0x822aaad0
	ctx.lr = 0x82338840;
	sub_822AAAD0(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233889c
	if (ctx.cr6.eq) goto loc_8233889C;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823388d4
	if (ctx.cr6.eq) goto loc_823388D4;
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82338878
	if (!ctx.cr6.eq) goto loc_82338878;
	// bl 0x822900a0
	ctx.lr = 0x82338874;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82338878:
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
	ctx.lr = 0x82338898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
loc_8233889C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823388d4
	if (ctx.cr6.eq) goto loc_823388D4;
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823388bc
	if (!ctx.cr6.eq) goto loc_823388BC;
	// bl 0x822900a0
	ctx.lr = 0x823388B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823388BC:
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
	ctx.lr = 0x823388D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823388D4:
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
loc_823388E0:
	// lwz r3,28876(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823388F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28876);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233890C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338920
	if (!ctx.cr6.eq) goto loc_82338920;
	// bl 0x822900a0
	ctx.lr = 0x8233891C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82338920:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233897c
	if (ctx.cr6.eq) goto loc_8233897C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-10316
	ctx.r9.s64 = ctx.r11.s64 + -10316;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// b 0x82338980
	goto loc_82338980;
loc_8233897C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82338980:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// addi r11,r11,30976
	ctx.r11.s64 = ctx.r11.s64 + 30976;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233899C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823389A4"))) PPC_WEAK_FUNC(sub_823389A4);
PPC_FUNC_IMPL(__imp__sub_823389A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823389A8"))) PPC_WEAK_FUNC(sub_823389A8);
PPC_FUNC_IMPL(__imp__sub_823389A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-10332
	ctx.r10.s64 = ctx.r11.s64 + -10332;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823389B8"))) PPC_WEAK_FUNC(sub_823389B8);
PPC_FUNC_IMPL(__imp__sub_823389B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-10316
	ctx.r9.s64 = ctx.r10.s64 + -10316;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823389F8"))) PPC_WEAK_FUNC(sub_823389F8);
PPC_FUNC_IMPL(__imp__sub_823389F8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,14848
	ctx.r9.s64 = ctx.r11.s64 + 14848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82338a2c
	if (ctx.cr6.eq) goto loc_82338A2C;
	// bl 0x82294a58
	ctx.lr = 0x82338A28;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82338A2C:
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

__attribute__((alias("__imp__sub_82338A40"))) PPC_WEAK_FUNC(sub_82338A40);
PPC_FUNC_IMPL(__imp__sub_82338A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-10356
	ctx.r10.s64 = ctx.r11.s64 + -10356;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338A50"))) PPC_WEAK_FUNC(sub_82338A50);
PPC_FUNC_IMPL(__imp__sub_82338A50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338A70"))) PPC_WEAK_FUNC(sub_82338A70);
PPC_FUNC_IMPL(__imp__sub_82338A70) {
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
	// bl 0x82294a58
	ctx.lr = 0x82338A8C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8233b070
	ctx.lr = 0x82338AA0;
	sub_8233B070(ctx, base);
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

__attribute__((alias("__imp__sub_82338AB4"))) PPC_WEAK_FUNC(sub_82338AB4);
PPC_FUNC_IMPL(__imp__sub_82338AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338AB8"))) PPC_WEAK_FUNC(sub_82338AB8);
PPC_FUNC_IMPL(__imp__sub_82338AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,14848
	ctx.r10.s64 = ctx.r11.s64 + 14848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338AC8"))) PPC_WEAK_FUNC(sub_82338AC8);
PPC_FUNC_IMPL(__imp__sub_82338AC8) {
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
	// bl 0x822a1a18
	ctx.lr = 0x82338AD8;
	sub_822A1A18(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338af8
	if (ctx.cr6.eq) goto loc_82338AF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82338AF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338B08"))) PPC_WEAK_FUNC(sub_82338B08);
PPC_FUNC_IMPL(__imp__sub_82338B08) {
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
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338b60
	if (ctx.cr6.eq) goto loc_82338B60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338b58
	if (ctx.cr6.eq) goto loc_82338B58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82338B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28876, ctx.r11.u32);
loc_82338B60:
	// bl 0x82343870
	ctx.lr = 0x82338B64;
	sub_82343870(ctx, base);
	// lis r31,-31905
	ctx.r31.s64 = -2090926080;
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82338B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24528, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82338B98"))) PPC_WEAK_FUNC(sub_82338B98);
PPC_FUNC_IMPL(__imp__sub_82338B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x82338bb4
	if (ctx.cr6.eq) goto loc_82338BB4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82338bb8
	goto loc_82338BB8;
loc_82338BB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82338BB8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82338bcc
	if (ctx.cr6.eq) goto loc_82338BCC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82338bd0
	goto loc_82338BD0;
loc_82338BCC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82338BD0:
	// b 0x82cb0328
	sub_82CB0328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338BD4"))) PPC_WEAK_FUNC(sub_82338BD4);
PPC_FUNC_IMPL(__imp__sub_82338BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338BD8"))) PPC_WEAK_FUNC(sub_82338BD8);
PPC_FUNC_IMPL(__imp__sub_82338BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r8,14864
	ctx.r5.s64 = ctx.r8.s64 + 14864;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,-7976
	ctx.r4.s64 = ctx.r7.s64 + -7976;
	// addi r8,r6,-7708
	ctx.r8.s64 = ctx.r6.s64 + -7708;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338C2C"))) PPC_WEAK_FUNC(sub_82338C2C);
PPC_FUNC_IMPL(__imp__sub_82338C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338C30"))) PPC_WEAK_FUNC(sub_82338C30);
PPC_FUNC_IMPL(__imp__sub_82338C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82338C38;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11192
	ctx.r4.s64 = ctx.r11.s64 + -11192;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338C60;
	sub_8233E028(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r28,r10,34,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8233c3c0
	ctx.lr = 0x82338C7C;
	sub_8233C3C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r22,r11,-11160
	ctx.r22.s64 = ctx.r11.s64 + -11160;
	// beq cr6,0x82338cb0
	if (ctx.cr6.eq) goto loc_82338CB0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338CA4;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-9896
	ctx.r10.s64 = ctx.r11.s64 + -9896;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82338CB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11144
	ctx.r4.s64 = ctx.r11.s64 + -11144;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338CD0;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233c230
	ctx.lr = 0x82338CE4;
	sub_8233C230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338d10
	if (ctx.cr6.eq) goto loc_82338D10;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338D04;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-9512
	ctx.r10.s64 = ctx.r11.s64 + -9512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82338D10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338D30;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233c0a0
	ctx.lr = 0x82338D44;
	sub_8233C0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-8744
	ctx.r26.s64 = ctx.r11.s64 + -8744;
	// beq cr6,0x82338d70
	if (ctx.cr6.eq) goto loc_82338D70;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338D6C;
	sub_823C45A0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82338D70:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11080
	ctx.r4.s64 = ctx.r11.s64 + -11080;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338D90;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233c0a0
	ctx.lr = 0x82338DA4;
	sub_8233C0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338dc8
	if (ctx.cr6.eq) goto loc_82338DC8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338DC4;
	sub_823C45A0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82338DC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11060
	ctx.r4.s64 = ctx.r11.s64 + -11060;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338DE8;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233c0a0
	ctx.lr = 0x82338DFC;
	sub_8233C0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338e20
	if (ctx.cr6.eq) goto loc_82338E20;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338E1C;
	sub_823C45A0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82338E20:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11040
	ctx.r4.s64 = ctx.r11.s64 + -11040;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338E40;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233c0a0
	ctx.lr = 0x82338E54;
	sub_8233C0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338e78
	if (ctx.cr6.eq) goto loc_82338E78;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338E74;
	sub_823C45A0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82338E78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11008
	ctx.r4.s64 = ctx.r11.s64 + -11008;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338E98;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x82338EAC;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r24,r11,-8360
	ctx.r24.s64 = ctx.r11.s64 + -8360;
	// beq cr6,0x82338ee0
	if (ctx.cr6.eq) goto loc_82338EE0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338ED8;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82338ee4
	goto loc_82338EE4;
loc_82338EE0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82338EE4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r23,r11,-10996
	ctx.r23.s64 = ctx.r11.s64 + -10996;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338F08;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x82338F1C;
	sub_8233C0A0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338f50
	if (ctx.cr6.eq) goto loc_82338F50;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x82338f54
	goto loc_82338F54;
loc_82338F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82338F54:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10968
	ctx.r4.s64 = ctx.r11.s64 + -10968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338F78;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x82338F8C;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82338fb4
	if (ctx.cr6.eq) goto loc_82338FB4;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82338FAC;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82338fb8
	goto loc_82338FB8;
loc_82338FB4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82338FB8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82338FD4;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x82338FE8;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339014
	if (ctx.cr6.eq) goto loc_82339014;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x82339018
	goto loc_82339018;
loc_82339014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82339018:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10944
	ctx.r4.s64 = ctx.r11.s64 + -10944;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233903C;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x82339050;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339078
	if (ctx.cr6.eq) goto loc_82339078;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82339070;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x8233907c
	goto loc_8233907C;
loc_82339078:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8233907C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339098;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x823390AC;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823390d8
	if (ctx.cr6.eq) goto loc_823390D8;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x823390dc
	goto loc_823390DC;
loc_823390D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823390DC:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-25708
	ctx.r4.s64 = ctx.r11.s64 + -25708;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339100;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x82339114;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233913c
	if (ctx.cr6.eq) goto loc_8233913C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82339134;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82339140
	goto loc_82339140;
loc_8233913C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82339140:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10916
	ctx.r4.s64 = ctx.r11.s64 + -10916;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339160;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233bd38
	ctx.lr = 0x82339174;
	sub_8233BD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823391a8
	if (ctx.cr6.eq) goto loc_823391A8;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// addi r9,r10,-9128
	ctx.r9.s64 = ctx.r10.s64 + -9128;
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x823391ac
	goto loc_823391AC;
loc_823391A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823391AC:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10888
	ctx.r4.s64 = ctx.r11.s64 + -10888;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823391D0;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x823391E4;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233920c
	if (ctx.cr6.eq) goto loc_8233920C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82339204;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82339210
	goto loc_82339210;
loc_8233920C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82339210:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233922C;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x82339240;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233926c
	if (ctx.cr6.eq) goto loc_8233926C;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x82339270
	goto loc_82339270;
loc_8233926C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82339270:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10864
	ctx.r4.s64 = ctx.r11.s64 + -10864;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339294;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x823392A8;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823392d0
	if (ctx.cr6.eq) goto loc_823392D0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x823392C8;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x823392d4
	goto loc_823392D4;
loc_823392D0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_823392D4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823392F0;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x82339304;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339330
	if (ctx.cr6.eq) goto loc_82339330;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x82339334
	goto loc_82339334;
loc_82339330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82339334:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10828
	ctx.r4.s64 = ctx.r11.s64 + -10828;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339358;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x8233936C;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339394
	if (ctx.cr6.eq) goto loc_82339394;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x8233938C;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82339398
	goto loc_82339398;
loc_82339394:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82339398:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823393B4;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x823393C8;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823393f4
	if (ctx.cr6.eq) goto loc_823393F4;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x823393f8
	goto loc_823393F8;
loc_823393F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823393F8:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10800
	ctx.r4.s64 = ctx.r11.s64 + -10800;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233941C;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x82339430;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339458
	if (ctx.cr6.eq) goto loc_82339458;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82339450;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x8233945c
	goto loc_8233945C;
loc_82339458:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8233945C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82339478;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x8233948C;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823394b8
	if (ctx.cr6.eq) goto loc_823394B8;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// b 0x823394bc
	goto loc_823394BC;
loc_823394B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823394BC:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-10756
	ctx.r4.s64 = ctx.r11.s64 + -10756;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823394E0;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8233bfe8
	ctx.lr = 0x823394F4;
	sub_8233BFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233951c
	if (ctx.cr6.eq) goto loc_8233951C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x82339514;
	sub_823C45A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82339520
	goto loc_82339520;
loc_8233951C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82339520:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233953C;
	sub_8233E028(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8233c0a0
	ctx.lr = 0x82339550;
	sub_8233C0A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339584
	if (ctx.cr6.eq) goto loc_82339584;
	// lwz r11,-25660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25660);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r11,-25660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25660, ctx.r11.u32);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82339584:
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339590"))) PPC_WEAK_FUNC(sub_82339590);
PPC_FUNC_IMPL(__imp__sub_82339590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82339598;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10724
	ctx.r4.s64 = ctx.r11.s64 + -10724;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82333168
	ctx.lr = 0x823395B4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823395e4
	if (ctx.cr6.eq) goto loc_823395E4;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823395D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_823395E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10700
	ctx.r4.s64 = ctx.r11.s64 + -10700;
	// bl 0x82333168
	ctx.lr = 0x823395F4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339624
	if (ctx.cr6.eq) goto loc_82339624;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82339618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82339624:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10680
	ctx.r4.s64 = ctx.r11.s64 + -10680;
	// bl 0x82333168
	ctx.lr = 0x82339634;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233997c
	if (!ctx.cr6.eq) goto loc_8233997C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10668
	ctx.r4.s64 = ctx.r11.s64 + -10668;
	// bl 0x82333168
	ctx.lr = 0x8233964C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233997c
	if (!ctx.cr6.eq) goto loc_8233997C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10616
	ctx.r4.s64 = ctx.r11.s64 + -10616;
	// bl 0x82333168
	ctx.lr = 0x82339664;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// beq cr6,0x82339720
	if (ctx.cr6.eq) goto loc_82339720;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-10604
	ctx.r4.s64 = ctx.r11.s64 + -10604;
	// bl 0x82333168
	ctx.lr = 0x8233967C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339988
	if (!ctx.cr6.eq) goto loc_82339988;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10592
	ctx.r4.s64 = ctx.r11.s64 + -10592;
	// bl 0x82333168
	ctx.lr = 0x82339694;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823396b0
	if (ctx.cr6.eq) goto loc_823396B0;
	// li r11,123
	ctx.r11.s64 = 123;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(0)
	PPC_STORE_U32(0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_823396B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10528
	ctx.r4.s64 = ctx.r11.s64 + -10528;
	// bl 0x82333168
	ctx.lr = 0x823396C0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339988
	if (!ctx.cr6.eq) goto loc_82339988;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10512
	ctx.r4.s64 = ctx.r11.s64 + -10512;
	// bl 0x82333168
	ctx.lr = 0x823396D8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823396f4
	if (ctx.cr6.eq) goto loc_823396F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a82b0
	ctx.lr = 0x823396E8;
	sub_822A82B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_823396F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10484
	ctx.r4.s64 = ctx.r11.s64 + -10484;
	// bl 0x82333168
	ctx.lr = 0x82339704;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339714
	if (ctx.cr6.eq) goto loc_82339714;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb1a28
	ctx.lr = 0x82339714;
	sub_82CB1A28(ctx, base);
loc_82339714:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82339720:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-10468
	ctx.r4.s64 = ctx.r11.s64 + -10468;
	// bl 0x82333168
	ctx.lr = 0x8233972C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339888
	if (ctx.cr6.eq) goto loc_82339888;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r31,252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,28892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28892);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233977C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28892);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823397A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8233b680
	ctx.lr = 0x823397AC;
	sub_8233B680(ctx, base);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// addi r31,r9,-10460
	ctx.r31.s64 = ctx.r9.s64 + -10460;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82339810
	if (!ctx.cr6.gt) goto loc_82339810;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_823397D0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823397ec
	if (ctx.cr6.eq) goto loc_823397EC;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823397f0
	goto loc_823397F0;
loc_823397EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823397F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d178
	ctx.lr = 0x823397FC;
	sub_8232D178(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823397d0
	if (ctx.cr6.lt) goto loc_823397D0;
loc_82339810:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8233b680
	ctx.lr = 0x8233981C;
	sub_8233B680(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233986c
	if (!ctx.cr6.gt) goto loc_8233986C;
loc_8233982C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82339848
	if (ctx.cr6.eq) goto loc_82339848;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8233984c
	goto loc_8233984C;
loc_82339848:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8233984C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d178
	ctx.lr = 0x82339858;
	sub_8232D178(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233982c
	if (ctx.cr6.lt) goto loc_8233982C;
loc_8233986C:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82295e20
	ctx.lr = 0x82339874;
	sub_82295E20(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295e20
	ctx.lr = 0x8233987C;
	sub_82295E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82339888:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10448
	ctx.r4.s64 = ctx.r11.s64 + -10448;
	// bl 0x82333168
	ctx.lr = 0x82339898;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823398b4
	if (ctx.cr6.eq) goto loc_823398B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82343970
	ctx.lr = 0x823398A8;
	sub_82343970(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_823398B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-10428
	ctx.r4.s64 = ctx.r11.s64 + -10428;
	// bl 0x82333168
	ctx.lr = 0x823398C4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339714
	if (ctx.cr6.eq) goto loc_82339714;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r11,-10408
	ctx.r4.s64 = ctx.r11.s64 + -10408;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82332f80
	ctx.lr = 0x823398E8;
	sub_82332F80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339988
	if (ctx.cr6.eq) goto loc_82339988;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r11,-15944
	ctx.r29.s64 = ctx.r11.s64 + -15944;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82339988
	if (!ctx.cr6.lt) goto loc_82339988;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
	// addi r30,r10,-10396
	ctx.r30.s64 = ctx.r10.s64 + -10396;
loc_82339920:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8233e1a0
	ctx.lr = 0x82339930;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82339944
	if (ctx.cr6.eq) goto loc_82339944;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82339948
	goto loc_82339948;
loc_82339944:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82339948:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d178
	ctx.lr = 0x82339958;
	sub_8232D178(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x82339960;
	sub_82299080(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82339920
	if (ctx.cr6.lt) goto loc_82339920;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8233997C:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3768, ctx.r11.u32);
loc_82339988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339994"))) PPC_WEAK_FUNC(sub_82339994);
PPC_FUNC_IMPL(__imp__sub_82339994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339998"))) PPC_WEAK_FUNC(sub_82339998);
PPC_FUNC_IMPL(__imp__sub_82339998) {
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
	ctx.lr = 0x823399B0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339a38
	if (ctx.cr6.eq) goto loc_82339A38;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// addi r7,r7,-20912
	ctx.r7.s64 = ctx.r7.s64 + -20912;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,-32204
	ctx.r5.s64 = -2110521344;
	// lis r4,-32204
	ctx.r4.s64 = -2110521344;
	// addi r11,r8,-10380
	ctx.r11.s64 = ctx.r8.s64 + -10380;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r5,r5,-29648
	ctx.r5.s64 = ctx.r5.s64 + -29648;
	// addi r4,r4,-17928
	ctx.r4.s64 = ctx.r4.s64 + -17928;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r10,r9,14488
	ctx.r10.s64 = ctx.r9.s64 + 14488;
	// addi r9,r8,14476
	ctx.r9.s64 = ctx.r8.s64 + 14476;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82339A28;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82339A38:
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

__attribute__((alias("__imp__sub_82339A4C"))) PPC_WEAK_FUNC(sub_82339A4C);
PPC_FUNC_IMPL(__imp__sub_82339A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339A50"))) PPC_WEAK_FUNC(sub_82339A50);
PPC_FUNC_IMPL(__imp__sub_82339A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82339A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339a88
	if (!ctx.cr6.eq) goto loc_82339A88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c20d0
	ctx.lr = 0x82339A7C;
	sub_822C20D0(ctx, base);
	// stw r3,25336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25336, ctx.r3.u32);
	// bl 0x822c2180
	ctx.lr = 0x82339A84;
	sub_822C2180(ctx, base);
	// lwz r10,25336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
loc_82339A88:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31952);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82339aa8
	if (ctx.cr6.eq) goto loc_82339AA8;
	// bl 0x822c6380
	ctx.lr = 0x82339A9C;
	sub_822C6380(ctx, base);
	// lwz r11,-31952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31952);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82339ab0
	goto loc_82339AB0;
loc_82339AA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82339AB0:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339ad8
	if (!ctx.cr6.eq) goto loc_82339AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82339AC8;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82339AD0;
	sub_822AADA8(ctx, base);
	// lwz r11,-31952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31952);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82339AD8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339b04
	if (!ctx.cr6.eq) goto loc_82339B04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x82339AF4;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82339AFC;
	sub_82398640(ctx, base);
	// lwz r11,-31952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31952);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82339B04:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82339b3c
	if (ctx.cr6.eq) goto loc_82339B3C;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82339B20;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82339b3c
	if (!ctx.cr6.eq) goto loc_82339B3C;
	// lwz r3,-31952(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31952);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82339B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339B44"))) PPC_WEAK_FUNC(sub_82339B44);
PPC_FUNC_IMPL(__imp__sub_82339B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339B48"))) PPC_WEAK_FUNC(sub_82339B48);
PPC_FUNC_IMPL(__imp__sub_82339B48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339B50"))) PPC_WEAK_FUNC(sub_82339B50);
PPC_FUNC_IMPL(__imp__sub_82339B50) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82339b94
	if (!ctx.cr6.eq) goto loc_82339B94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822c20d0
	ctx.lr = 0x82339B88;
	sub_822C20D0(ctx, base);
	// stw r3,25336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25336, ctx.r3.u32);
	// bl 0x822c2180
	ctx.lr = 0x82339B90;
	sub_822C2180(ctx, base);
	// lwz r11,25336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
loc_82339B94:
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

__attribute__((alias("__imp__sub_82339BBC"))) PPC_WEAK_FUNC(sub_82339BBC);
PPC_FUNC_IMPL(__imp__sub_82339BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339BC0"))) PPC_WEAK_FUNC(sub_82339BC0);
PPC_FUNC_IMPL(__imp__sub_82339BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r3,r11,-23856
	ctx.r3.s64 = ctx.r11.s64 + -23856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339BCC"))) PPC_WEAK_FUNC(sub_82339BCC);
PPC_FUNC_IMPL(__imp__sub_82339BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339BD0"))) PPC_WEAK_FUNC(sub_82339BD0);
PPC_FUNC_IMPL(__imp__sub_82339BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339BD4"))) PPC_WEAK_FUNC(sub_82339BD4);
PPC_FUNC_IMPL(__imp__sub_82339BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339BD8"))) PPC_WEAK_FUNC(sub_82339BD8);
PPC_FUNC_IMPL(__imp__sub_82339BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r9,r10,-10364
	ctx.r9.s64 = ctx.r10.s64 + -10364;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,25000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25000, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339C04"))) PPC_WEAK_FUNC(sub_82339C04);
PPC_FUNC_IMPL(__imp__sub_82339C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339C08"))) PPC_WEAK_FUNC(sub_82339C08);
PPC_FUNC_IMPL(__imp__sub_82339C08) {
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
	// bl 0x82339c58
	ctx.lr = 0x82339C28;
	sub_82339C58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82339c40
	if (ctx.cr6.eq) goto loc_82339C40;
	// bl 0x82294a58
	ctx.lr = 0x82339C3C;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82339C40:
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

__attribute__((alias("__imp__sub_82339C58"))) PPC_WEAK_FUNC(sub_82339C58);
PPC_FUNC_IMPL(__imp__sub_82339C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82339C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,-10364
	ctx.r9.s64 = ctx.r11.s64 + -10364;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82339cc4
	if (!ctx.cr6.gt) goto loc_82339CC4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82339C8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339cb0
	if (ctx.cr6.eq) goto loc_82339CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82339CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339CB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82339c8c
	if (ctx.cr6.lt) goto loc_82339C8C;
loc_82339CC4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82339d20
	if (ctx.cr6.eq) goto loc_82339D20;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339d20
	if (ctx.cr6.eq) goto loc_82339D20;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339d00
	if (!ctx.cr6.eq) goto loc_82339D00;
	// bl 0x822900a0
	ctx.lr = 0x82339CFC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82339D00:
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
	ctx.lr = 0x82339D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82339D20:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,25000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25000, ctx.r11.u32);
	// beq cr6,0x82339d60
	if (ctx.cr6.eq) goto loc_82339D60;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339d4c
	if (!ctx.cr6.eq) goto loc_82339D4C;
	// bl 0x822900a0
	ctx.lr = 0x82339D48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82339D4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82339D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339D60:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339D74"))) PPC_WEAK_FUNC(sub_82339D74);
PPC_FUNC_IMPL(__imp__sub_82339D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339D78"))) PPC_WEAK_FUNC(sub_82339D78);
PPC_FUNC_IMPL(__imp__sub_82339D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339D94"))) PPC_WEAK_FUNC(sub_82339D94);
PPC_FUNC_IMPL(__imp__sub_82339D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339D98"))) PPC_WEAK_FUNC(sub_82339D98);
PPC_FUNC_IMPL(__imp__sub_82339D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82339DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82339df0
	if (!ctx.cr6.gt) goto loc_82339DF0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82339DC4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82339DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82339dc4
	if (ctx.cr6.lt) goto loc_82339DC4;
loc_82339DF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339DF8"))) PPC_WEAK_FUNC(sub_82339DF8);
PPC_FUNC_IMPL(__imp__sub_82339DF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339E04"))) PPC_WEAK_FUNC(sub_82339E04);
PPC_FUNC_IMPL(__imp__sub_82339E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339E08"))) PPC_WEAK_FUNC(sub_82339E08);
PPC_FUNC_IMPL(__imp__sub_82339E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82339E10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82339e68
	if (!ctx.cr6.gt) goto loc_82339E68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82339E30:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82339E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82339e74
	if (ctx.cr6.eq) goto loc_82339E74;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82339e30
	if (ctx.cr6.lt) goto loc_82339E30;
loc_82339E68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82339E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339E80"))) PPC_WEAK_FUNC(sub_82339E80);
PPC_FUNC_IMPL(__imp__sub_82339E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x827ea2d8
	ctx.lr = 0x82339EB8;
	sub_827EA2D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339EDC"))) PPC_WEAK_FUNC(sub_82339EDC);
PPC_FUNC_IMPL(__imp__sub_82339EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339EE0"))) PPC_WEAK_FUNC(sub_82339EE0);
PPC_FUNC_IMPL(__imp__sub_82339EE0) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827ea3d8
	ctx.lr = 0x82339EF8;
	sub_827EA3D8(ctx, base);
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

__attribute__((alias("__imp__sub_82339F10"))) PPC_WEAK_FUNC(sub_82339F10);
PPC_FUNC_IMPL(__imp__sub_82339F10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// b 0x822959a8
	sub_822959A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339F20"))) PPC_WEAK_FUNC(sub_82339F20);
PPC_FUNC_IMPL(__imp__sub_82339F20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82294a58
	sub_82294A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339F28"))) PPC_WEAK_FUNC(sub_82339F28);
PPC_FUNC_IMPL(__imp__sub_82339F28) {
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
	// lwz r3,17900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339f58
	if (!ctx.cr6.eq) goto loc_82339F58;
	// li r4,8
	ctx.r4.s64 = 8;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x822959a8
	ctx.lr = 0x82339F54;
	sub_822959A8(ctx, base);
	// stw r3,17900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17900, ctx.r3.u32);
loc_82339F58:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x82339F64;
	sub_82E640B8(ctx, base);
	// lwz r3,17900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17900);
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

__attribute__((alias("__imp__sub_82339F7C"))) PPC_WEAK_FUNC(sub_82339F7C);
PPC_FUNC_IMPL(__imp__sub_82339F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339F80"))) PPC_WEAK_FUNC(sub_82339F80);
PPC_FUNC_IMPL(__imp__sub_82339F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82339F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31881
	ctx.r29.s64 = -2089353216;
	// lwz r11,-28404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28404);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82339fbc
	if (!ctx.cr6.eq) goto loc_82339FBC;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r9,-28404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28404, ctx.r9.u32);
	// stw r11,-28408(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28408, ctx.r11.u32);
	// b 0x82339fc0
	goto loc_82339FC0;
loc_82339FBC:
	// lwz r11,-28408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28408);
loc_82339FC0:
	// lis r30,-31882
	ctx.r30.s64 = -2089418752;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// lwz r3,17904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339fe4
	if (ctx.cr6.eq) goto loc_82339FE4;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233a00c
	if (!ctx.cr6.gt) goto loc_8233A00C;
	// bl 0x82294a58
	ctx.lr = 0x82339FE4;
	sub_82294A58(ctx, base);
loc_82339FE4:
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822959a8
	ctx.lr = 0x82339FF4;
	sub_822959A8(ctx, base);
	// stw r31,-28408(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28408, ctx.r31.u32);
	// stw r3,17904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17904, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x8233A008;
	sub_82E640B8(ctx, base);
	// lwz r3,17904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17904);
loc_8233A00C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A014"))) PPC_WEAK_FUNC(sub_8233A014);
PPC_FUNC_IMPL(__imp__sub_8233A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A018"))) PPC_WEAK_FUNC(sub_8233A018);
PPC_FUNC_IMPL(__imp__sub_8233A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233A020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r30,-31881
	ctx.r30.s64 = -2089353216;
	// lwz r11,-28412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28412);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233a054
	if (!ctx.cr6.eq) goto loc_8233A054;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r9,-28412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28412, ctx.r9.u32);
	// stw r11,-28416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28416, ctx.r11.u32);
	// b 0x8233a058
	goto loc_8233A058;
loc_8233A054:
	// lwz r11,-28416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28416);
loc_8233A058:
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// lwz r3,17908(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a07c
	if (ctx.cr6.eq) goto loc_8233A07C;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233a094
	if (!ctx.cr6.gt) goto loc_8233A094;
	// bl 0x82294a58
	ctx.lr = 0x8233A07C;
	sub_82294A58(ctx, base);
loc_8233A07C:
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822959a8
	ctx.lr = 0x8233A08C;
	sub_822959A8(ctx, base);
	// stw r31,-28416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28416, ctx.r31.u32);
	// stw r3,17908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17908, ctx.r3.u32);
loc_8233A094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A09C"))) PPC_WEAK_FUNC(sub_8233A09C);
PPC_FUNC_IMPL(__imp__sub_8233A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A0A0"))) PPC_WEAK_FUNC(sub_8233A0A0);
PPC_FUNC_IMPL(__imp__sub_8233A0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8233A0A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8233a018
	ctx.lr = 0x8233A0C8;
	sub_8233A018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339f80
	ctx.lr = 0x8233A0D4;
	sub_82339F80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bea998
	ctx.lr = 0x8233A0E4;
	sub_82BEA998(ctx, base);
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a110
	if (ctx.cr6.eq) goto loc_8233A110;
	// bl 0x82339f28
	ctx.lr = 0x8233A0F4;
	sub_82339F28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ea8a8
	ctx.lr = 0x8233A10C;
	sub_827EA8A8(ctx, base);
	// b 0x8233a15c
	goto loc_8233A15C;
loc_8233A110:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a140
	if (ctx.cr6.eq) goto loc_8233A140;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r11,25296
	ctx.r7.s64 = ctx.r11.s64 + 25296;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ef6f0
	ctx.lr = 0x8233A13C;
	sub_827EF6F0(ctx, base);
	// b 0x8233a15c
	goto loc_8233A15C;
loc_8233A140:
	// bl 0x82339f28
	ctx.lr = 0x8233A144;
	sub_82339F28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827efcf8
	ctx.lr = 0x8233A15C;
	sub_827EFCF8(ctx, base);
loc_8233A15C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8233A16C;
	sub_82E640B8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233a1a0
	if (ctx.cr6.gt) goto loc_8233A1A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bea998
	ctx.lr = 0x8233A190;
	sub_82BEA998(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8233A1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A1B0"))) PPC_WEAK_FUNC(sub_8233A1B0);
PPC_FUNC_IMPL(__imp__sub_8233A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A1B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82339f28
	ctx.lr = 0x8233A1CC;
	sub_82339F28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827efe30
	ctx.lr = 0x8233A1E4;
	sub_827EFE30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A1F4"))) PPC_WEAK_FUNC(sub_8233A1F4);
PPC_FUNC_IMPL(__imp__sub_8233A1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A1F8"))) PPC_WEAK_FUNC(sub_8233A1F8);
PPC_FUNC_IMPL(__imp__sub_8233A1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,25020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25020);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233a21c
	if (ctx.cr6.eq) goto loc_8233A21C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r3,r10,2,28,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
loc_8233A21C:
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233a234
	if (ctx.cr6.eq) goto loc_8233A234;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82339e80
	sub_82339E80(ctx, base);
	return;
loc_8233A234:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8233a0a0
	sub_8233A0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A244"))) PPC_WEAK_FUNC(sub_8233A244);
PPC_FUNC_IMPL(__imp__sub_8233A244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A248"))) PPC_WEAK_FUNC(sub_8233A248);
PPC_FUNC_IMPL(__imp__sub_8233A248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A250;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a294
	if (ctx.cr6.eq) goto loc_8233A294;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ea3d8
	ctx.lr = 0x8233A284;
	sub_827EA3D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8233A294:
	// bl 0x82339f28
	ctx.lr = 0x8233A298;
	sub_82339F28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827efe30
	ctx.lr = 0x8233A2B0;
	sub_827EFE30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A2C0"))) PPC_WEAK_FUNC(sub_8233A2C0);
PPC_FUNC_IMPL(__imp__sub_8233A2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A2D8"))) PPC_WEAK_FUNC(sub_8233A2D8);
PPC_FUNC_IMPL(__imp__sub_8233A2D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233A300"))) PPC_WEAK_FUNC(sub_8233A300);
PPC_FUNC_IMPL(__imp__sub_8233A300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A31C"))) PPC_WEAK_FUNC(sub_8233A31C);
PPC_FUNC_IMPL(__imp__sub_8233A31C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A320"))) PPC_WEAK_FUNC(sub_8233A320);
PPC_FUNC_IMPL(__imp__sub_8233A320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233A328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8233a3b8
	if (ctx.cr6.eq) goto loc_8233A3B8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8233a3ac
	if (!ctx.cr6.gt) goto loc_8233A3AC;
	// bl 0x822936d0
	ctx.lr = 0x8233A35C;
	sub_822936D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a3b4
	if (!ctx.cr6.gt) goto loc_8233A3B4;
loc_8233A36C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8233A378;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a38c
	if (ctx.cr6.eq) goto loc_8233A38C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233A38C;
	sub_82294BB8(ctx, base);
loc_8233A38C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a36c
	if (ctx.cr6.lt) goto loc_8233A36C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8233A3AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822936d0
	ctx.lr = 0x8233A3B4;
	sub_822936D0(ctx, base);
loc_8233A3B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8233A3B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A3C0"))) PPC_WEAK_FUNC(sub_8233A3C0);
PPC_FUNC_IMPL(__imp__sub_8233A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233A3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8233a454
	if (ctx.cr6.eq) goto loc_8233A454;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a454
	if (!ctx.cr6.gt) goto loc_8233A454;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8233a40c
	if (!ctx.cr6.gt) goto loc_8233A40C;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8233A40C;
	sub_82294520(ctx, base);
loc_8233A40C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a454
	if (!ctx.cr6.gt) goto loc_8233A454;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233A420:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8233A42C;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a440
	if (ctx.cr6.eq) goto loc_8233A440;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233A440;
	sub_82294BB8(ctx, base);
loc_8233A440:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a420
	if (ctx.cr6.lt) goto loc_8233A420;
loc_8233A454:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A460"))) PPC_WEAK_FUNC(sub_8233A460);
PPC_FUNC_IMPL(__imp__sub_8233A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233A468;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8233a4ec
	if (ctx.cr6.eq) goto loc_8233A4EC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8233a4e0
	if (!ctx.cr6.gt) goto loc_8233A4E0;
	// bl 0x822936d0
	ctx.lr = 0x8233A48C;
	sub_822936D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a4e8
	if (!ctx.cr6.gt) goto loc_8233A4E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233A4A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8233A4AC;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a4c0
	if (ctx.cr6.eq) goto loc_8233A4C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233A4C0;
	sub_82294BB8(ctx, base);
loc_8233A4C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a4a0
	if (ctx.cr6.lt) goto loc_8233A4A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8233A4E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822936d0
	ctx.lr = 0x8233A4E8;
	sub_822936D0(ctx, base);
loc_8233A4E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8233A4EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A4F4"))) PPC_WEAK_FUNC(sub_8233A4F4);
PPC_FUNC_IMPL(__imp__sub_8233A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A4F8"))) PPC_WEAK_FUNC(sub_8233A4F8);
PPC_FUNC_IMPL(__imp__sub_8233A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233A51C;
	sub_82294AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8233A548;
	sub_82E640B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A554"))) PPC_WEAK_FUNC(sub_8233A554);
PPC_FUNC_IMPL(__imp__sub_8233A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A558"))) PPC_WEAK_FUNC(sub_8233A558);
PPC_FUNC_IMPL(__imp__sub_8233A558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A55C"))) PPC_WEAK_FUNC(sub_8233A55C);
PPC_FUNC_IMPL(__imp__sub_8233A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A560"))) PPC_WEAK_FUNC(sub_8233A560);
PPC_FUNC_IMPL(__imp__sub_8233A560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8233a5ac
	if (!ctx.cr6.gt) goto loc_8233A5AC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8233A58C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233a604
	if (ctx.cr6.eq) goto loc_8233A604;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8233a58c
	if (ctx.cr6.lt) goto loc_8233A58C;
loc_8233A5AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8233a5e4
	if (!ctx.cr6.gt) goto loc_8233A5E4;
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
	ctx.lr = 0x8233A5E4;
	sub_82294520(ctx, base);
loc_8233A5E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233a5fc
	if (ctx.cr0.eq) goto loc_8233A5FC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8233A5FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8233A604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A60C"))) PPC_WEAK_FUNC(sub_8233A60C);
PPC_FUNC_IMPL(__imp__sub_8233A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A610"))) PPC_WEAK_FUNC(sub_8233A610);
PPC_FUNC_IMPL(__imp__sub_8233A610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233A618;
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
	// ble cr6,0x8233a680
	if (!ctx.cr6.gt) goto loc_8233A680;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233A638:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233a66c
	if (!ctx.cr6.eq) goto loc_8233A66C;
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
	ctx.lr = 0x8233A664;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8233A66C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a638
	if (ctx.cr6.lt) goto loc_8233A638;
loc_8233A680:
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

__attribute__((alias("__imp__sub_8233A690"))) PPC_WEAK_FUNC(sub_8233A690);
PPC_FUNC_IMPL(__imp__sub_8233A690) {
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

__attribute__((alias("__imp__sub_8233A6A4"))) PPC_WEAK_FUNC(sub_8233A6A4);
PPC_FUNC_IMPL(__imp__sub_8233A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A6A8"))) PPC_WEAK_FUNC(sub_8233A6A8);
PPC_FUNC_IMPL(__imp__sub_8233A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A6B0;
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
	// beq cr6,0x8233a6f0
	if (ctx.cr6.eq) goto loc_8233A6F0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233a6dc
	if (!ctx.cr6.eq) goto loc_8233A6DC;
	// bl 0x822900a0
	ctx.lr = 0x8233A6D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233A6DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233A6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A6F0:
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

__attribute__((alias("__imp__sub_8233A708"))) PPC_WEAK_FUNC(sub_8233A708);
PPC_FUNC_IMPL(__imp__sub_8233A708) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A72C"))) PPC_WEAK_FUNC(sub_8233A72C);
PPC_FUNC_IMPL(__imp__sub_8233A72C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A730"))) PPC_WEAK_FUNC(sub_8233A730);
PPC_FUNC_IMPL(__imp__sub_8233A730) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233adf8
	ctx.lr = 0x8233A74C;
	sub_8233ADF8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82294a58
	ctx.lr = 0x8233A75C;
	sub_82294A58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8233A778"))) PPC_WEAK_FUNC(sub_8233A778);
PPC_FUNC_IMPL(__imp__sub_8233A778) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x8233A7A8;
	sub_82294520(ctx, base);
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

__attribute__((alias("__imp__sub_8233A7C0"))) PPC_WEAK_FUNC(sub_8233A7C0);
PPC_FUNC_IMPL(__imp__sub_8233A7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233A7C8;
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
	// beq cr6,0x8233a808
	if (ctx.cr6.eq) goto loc_8233A808;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233a7f4
	if (!ctx.cr6.eq) goto loc_8233A7F4;
	// bl 0x822900a0
	ctx.lr = 0x8233A7F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233A7F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233A808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A808:
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

__attribute__((alias("__imp__sub_8233A820"))) PPC_WEAK_FUNC(sub_8233A820);
PPC_FUNC_IMPL(__imp__sub_8233A820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A82C"))) PPC_WEAK_FUNC(sub_8233A82C);
PPC_FUNC_IMPL(__imp__sub_8233A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A830"))) PPC_WEAK_FUNC(sub_8233A830);
PPC_FUNC_IMPL(__imp__sub_8233A830) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A850"))) PPC_WEAK_FUNC(sub_8233A850);
PPC_FUNC_IMPL(__imp__sub_8233A850) {
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
	// bl 0x82294a58
	ctx.lr = 0x8233A86C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8233b070
	ctx.lr = 0x8233A880;
	sub_8233B070(ctx, base);
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

__attribute__((alias("__imp__sub_8233A894"))) PPC_WEAK_FUNC(sub_8233A894);
PPC_FUNC_IMPL(__imp__sub_8233A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A898"))) PPC_WEAK_FUNC(sub_8233A898);
PPC_FUNC_IMPL(__imp__sub_8233A898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8233A8A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233a8c0
	if (!ctx.cr6.eq) goto loc_8233A8C0;
	// bl 0x8233b1e8
	ctx.lr = 0x8233A8C0;
	sub_8233B1E8(ctx, base);
loc_8233A8C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a940
	if (!ctx.cr6.gt) goto loc_8233A940;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822946f0
	ctx.lr = 0x8233A8D4;
	sub_822946F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8233a940
	if (ctx.cr6.eq) goto loc_8233A940;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
loc_8233A8FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r29,r30,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233a91c
	if (ctx.cr6.eq) goto loc_8233A91C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8233a920
	goto loc_8233A920;
loc_8233A91C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8233A920:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8233A928;
	sub_82CB0328(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233a958
	if (ctx.cr6.eq) goto loc_8233A958;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8233a8fc
	if (!ctx.cr6.eq) goto loc_8233A8FC;
loc_8233A940:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233af80
	ctx.lr = 0x8233A950;
	sub_8233AF80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8233A958:
	// rlwinm r29,r30,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82295908
	ctx.lr = 0x8233A96C;
	sub_82295908(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A988"))) PPC_WEAK_FUNC(sub_8233A988);
PPC_FUNC_IMPL(__imp__sub_8233A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233A990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233aa20
	if (ctx.cr6.eq) goto loc_8233AA20;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233aa20
	if (!ctx.cr6.gt) goto loc_8233AA20;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a9c8
	if (ctx.cr6.eq) goto loc_8233A9C8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8233a9d0
	goto loc_8233A9D0;
loc_8233A9C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_8233A9D0:
	// bl 0x822946f0
	ctx.lr = 0x8233A9D4;
	sub_822946F0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8233aa20
	if (ctx.cr6.eq) goto loc_8233AA20;
loc_8233A9F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822b21c0
	ctx.lr = 0x8233AA08;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233aa2c
	if (!ctx.cr6.eq) goto loc_8233AA2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8233a9f0
	if (!ctx.cr6.eq) goto loc_8233A9F0;
loc_8233AA20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8233AA2C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AA44"))) PPC_WEAK_FUNC(sub_8233AA44);
PPC_FUNC_IMPL(__imp__sub_8233AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AA48"))) PPC_WEAK_FUNC(sub_8233AA48);
PPC_FUNC_IMPL(__imp__sub_8233AA48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA60"))) PPC_WEAK_FUNC(sub_8233AA60);
PPC_FUNC_IMPL(__imp__sub_8233AA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233ae88
	sub_8233AE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AA74"))) PPC_WEAK_FUNC(sub_8233AA74);
PPC_FUNC_IMPL(__imp__sub_8233AA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA78"))) PPC_WEAK_FUNC(sub_8233AA78);
PPC_FUNC_IMPL(__imp__sub_8233AA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA88"))) PPC_WEAK_FUNC(sub_8233AA88);
PPC_FUNC_IMPL(__imp__sub_8233AA88) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8233aed8
	ctx.lr = 0x8233AAB0;
	sub_8233AED8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8233AAD0"))) PPC_WEAK_FUNC(sub_8233AAD0);
PPC_FUNC_IMPL(__imp__sub_8233AAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8233aaf0
	if (ctx.cr6.lt) goto loc_8233AAF0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8233AAF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AAF8"))) PPC_WEAK_FUNC(sub_8233AAF8);
PPC_FUNC_IMPL(__imp__sub_8233AAF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AB14"))) PPC_WEAK_FUNC(sub_8233AB14);
PPC_FUNC_IMPL(__imp__sub_8233AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AB18"))) PPC_WEAK_FUNC(sub_8233AB18);
PPC_FUNC_IMPL(__imp__sub_8233AB18) {
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

__attribute__((alias("__imp__sub_8233AB2C"))) PPC_WEAK_FUNC(sub_8233AB2C);
PPC_FUNC_IMPL(__imp__sub_8233AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AB30"))) PPC_WEAK_FUNC(sub_8233AB30);
PPC_FUNC_IMPL(__imp__sub_8233AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233AB38;
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
	// beq cr6,0x8233ab78
	if (ctx.cr6.eq) goto loc_8233AB78;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ab64
	if (!ctx.cr6.eq) goto loc_8233AB64;
	// bl 0x822900a0
	ctx.lr = 0x8233AB60;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233AB64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233AB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233AB78:
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

__attribute__((alias("__imp__sub_8233AB90"))) PPC_WEAK_FUNC(sub_8233AB90);
PPC_FUNC_IMPL(__imp__sub_8233AB90) {
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

__attribute__((alias("__imp__sub_8233ABA0"))) PPC_WEAK_FUNC(sub_8233ABA0);
PPC_FUNC_IMPL(__imp__sub_8233ABA0) {
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
	ctx.lr = 0x8233ABD0;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233abe8
	if (ctx.cr0.eq) goto loc_8233ABE8;
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
loc_8233ABE8:
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

__attribute__((alias("__imp__sub_8233AC08"))) PPC_WEAK_FUNC(sub_8233AC08);
PPC_FUNC_IMPL(__imp__sub_8233AC08) {
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
	// bl 0x82295908
	ctx.lr = 0x8233AC28;
	sub_82295908(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8233AC4C"))) PPC_WEAK_FUNC(sub_8233AC4C);
PPC_FUNC_IMPL(__imp__sub_8233AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AC50"))) PPC_WEAK_FUNC(sub_8233AC50);
PPC_FUNC_IMPL(__imp__sub_8233AC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233AC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8233acd4
	if (ctx.cr6.eq) goto loc_8233ACD4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8233accc
	if (!ctx.cr6.gt) goto loc_8233ACCC;
	// bl 0x822936d0
	ctx.lr = 0x8233AC7C;
	sub_822936D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233acd4
	if (!ctx.cr6.gt) goto loc_8233ACD4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233AC90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8233AC9C;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233acb0
	if (ctx.cr6.eq) goto loc_8233ACB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233ACB0;
	sub_82294BB8(ctx, base);
loc_8233ACB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233ac90
	if (ctx.cr6.lt) goto loc_8233AC90;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8233ACCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822936d0
	ctx.lr = 0x8233ACD4;
	sub_822936D0(ctx, base);
loc_8233ACD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233ACDC"))) PPC_WEAK_FUNC(sub_8233ACDC);
PPC_FUNC_IMPL(__imp__sub_8233ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233ACE0"))) PPC_WEAK_FUNC(sub_8233ACE0);
PPC_FUNC_IMPL(__imp__sub_8233ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233ACE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8233ad74
	if (ctx.cr6.eq) goto loc_8233AD74;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233ad74
	if (!ctx.cr6.gt) goto loc_8233AD74;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8233ad2c
	if (!ctx.cr6.gt) goto loc_8233AD2C;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8233AD2C;
	sub_82294520(ctx, base);
loc_8233AD2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233ad74
	if (!ctx.cr6.gt) goto loc_8233AD74;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233AD40:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8233AD4C;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ad60
	if (ctx.cr6.eq) goto loc_8233AD60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233AD60;
	sub_82294BB8(ctx, base);
loc_8233AD60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233ad40
	if (ctx.cr6.lt) goto loc_8233AD40;
loc_8233AD74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AD7C"))) PPC_WEAK_FUNC(sub_8233AD7C);
PPC_FUNC_IMPL(__imp__sub_8233AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AD80"))) PPC_WEAK_FUNC(sub_8233AD80);
PPC_FUNC_IMPL(__imp__sub_8233AD80) {
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

__attribute__((alias("__imp__sub_8233AD90"))) PPC_WEAK_FUNC(sub_8233AD90);
PPC_FUNC_IMPL(__imp__sub_8233AD90) {
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
	ctx.lr = 0x8233ADC0;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233add8
	if (ctx.cr0.eq) goto loc_8233ADD8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8233ADD8:
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

__attribute__((alias("__imp__sub_8233ADF8"))) PPC_WEAK_FUNC(sub_8233ADF8);
PPC_FUNC_IMPL(__imp__sub_8233ADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233AE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233ae40
	if (!ctx.cr6.gt) goto loc_8233AE40;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8233AE20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82294170
	ctx.lr = 0x8233AE2C;
	sub_82294170(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233ae20
	if (ctx.cr6.lt) goto loc_8233AE20;
loc_8233AE40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8233ae68
	if (ctx.cr6.eq) goto loc_8233AE68;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233AE68;
	sub_82294520(ctx, base);
loc_8233AE68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AE70"))) PPC_WEAK_FUNC(sub_8233AE70);
PPC_FUNC_IMPL(__imp__sub_8233AE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8233b1e8
	sub_8233B1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AE80"))) PPC_WEAK_FUNC(sub_8233AE80);
PPC_FUNC_IMPL(__imp__sub_8233AE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AE84"))) PPC_WEAK_FUNC(sub_8233AE84);
PPC_FUNC_IMPL(__imp__sub_8233AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AE88"))) PPC_WEAK_FUNC(sub_8233AE88);
PPC_FUNC_IMPL(__imp__sub_8233AE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8233AEA4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8233aea4
	if (ctx.cr6.gt) goto loc_8233AEA4;
	// b 0x8233b1e8
	sub_8233B1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AED4"))) PPC_WEAK_FUNC(sub_8233AED4);
PPC_FUNC_IMPL(__imp__sub_8233AED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AED8"))) PPC_WEAK_FUNC(sub_8233AED8);
PPC_FUNC_IMPL(__imp__sub_8233AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233AEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233af0c
	if (ctx.cr6.eq) goto loc_8233AF0C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8233af14
	goto loc_8233AF14;
loc_8233AF0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_8233AF14:
	// bl 0x822946f0
	ctx.lr = 0x8233AF18;
	sub_822946F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8233af74
	if (ctx.cr6.eq) goto loc_8233AF74;
loc_8233AF3C:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8233af68
	if (ctx.cr6.eq) goto loc_8233AF68;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8233af3c
	if (!ctx.cr6.eq) goto loc_8233AF3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8233AF68:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b2e0
	ctx.lr = 0x8233AF74;
	sub_8233B2E0(ctx, base);
loc_8233AF74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AF7C"))) PPC_WEAK_FUNC(sub_8233AF7C);
PPC_FUNC_IMPL(__imp__sub_8233AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AF80"))) PPC_WEAK_FUNC(sub_8233AF80);
PPC_FUNC_IMPL(__imp__sub_8233AF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233AF88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233AFAC;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233afd0
	if (ctx.cr0.eq) goto loc_8233AFD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233b380
	ctx.lr = 0x8233AFC8;
	sub_8233B380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8233afd4
	goto loc_8233AFD4;
loc_8233AFD0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233AFD4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233afe8
	if (ctx.cr6.eq) goto loc_8233AFE8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8233aff0
	goto loc_8233AFF0;
loc_8233AFE8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_8233AFF0:
	// bl 0x822946f0
	ctx.lr = 0x8233AFF4;
	sub_822946F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r4,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8233b048
	if (!ctx.cr6.lt) goto loc_8233B048;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8233b1e8
	ctx.lr = 0x8233B048;
	sub_8233B1E8(ctx, base);
loc_8233B048:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B054"))) PPC_WEAK_FUNC(sub_8233B054);
PPC_FUNC_IMPL(__imp__sub_8233B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B058"))) PPC_WEAK_FUNC(sub_8233B058);
PPC_FUNC_IMPL(__imp__sub_8233B058) {
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

__attribute__((alias("__imp__sub_8233B06C"))) PPC_WEAK_FUNC(sub_8233B06C);
PPC_FUNC_IMPL(__imp__sub_8233B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B070"))) PPC_WEAK_FUNC(sub_8233B070);
PPC_FUNC_IMPL(__imp__sub_8233B070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233B078;
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
	// ble cr6,0x8233b0b8
	if (!ctx.cr6.gt) goto loc_8233B0B8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8233B098:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8233b148
	ctx.lr = 0x8233B0A4;
	sub_8233B148(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233b098
	if (ctx.cr6.lt) goto loc_8233B098;
loc_8233B0B8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b0f0
	if (ctx.cr6.eq) goto loc_8233B0F0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233b0dc
	if (!ctx.cr6.eq) goto loc_8233B0DC;
	// bl 0x822900a0
	ctx.lr = 0x8233B0D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233B0DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233B0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B0F0:
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

__attribute__((alias("__imp__sub_8233B104"))) PPC_WEAK_FUNC(sub_8233B104);
PPC_FUNC_IMPL(__imp__sub_8233B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B108"))) PPC_WEAK_FUNC(sub_8233B108);
PPC_FUNC_IMPL(__imp__sub_8233B108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B118"))) PPC_WEAK_FUNC(sub_8233B118);
PPC_FUNC_IMPL(__imp__sub_8233B118) {
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
	// bl 0x8233b148
	ctx.lr = 0x8233B130;
	sub_8233B148(ctx, base);
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

__attribute__((alias("__imp__sub_8233B148"))) PPC_WEAK_FUNC(sub_8233B148);
PPC_FUNC_IMPL(__imp__sub_8233B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233B150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b184
	if (ctx.cr6.eq) goto loc_8233B184;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233B184;
	sub_82294520(ctx, base);
loc_8233B184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233B18C;
	sub_82294CC8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b1b4
	if (ctx.cr6.eq) goto loc_8233B1B4;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233B1B4;
	sub_82294520(ctx, base);
loc_8233B1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233B1BC;
	sub_82294CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B1C4"))) PPC_WEAK_FUNC(sub_8233B1C4);
PPC_FUNC_IMPL(__imp__sub_8233B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B1C8"))) PPC_WEAK_FUNC(sub_8233B1C8);
PPC_FUNC_IMPL(__imp__sub_8233B1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B1E4"))) PPC_WEAK_FUNC(sub_8233B1E4);
PPC_FUNC_IMPL(__imp__sub_8233B1E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B1E8"))) PPC_WEAK_FUNC(sub_8233B1E8);
PPC_FUNC_IMPL(__imp__sub_8233B1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233B1F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8233B200;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8233b21c
	if (!ctx.cr6.gt) goto loc_8233B21C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8233B21C:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x8233B224;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8233b25c
	if (!ctx.cr6.gt) goto loc_8233B25C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8233B240:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8233b240
	if (ctx.cr6.lt) goto loc_8233B240;
loc_8233B25C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233b2d4
	if (!ctx.cr6.gt) goto loc_8233B2D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
loc_8233B278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b294
	if (ctx.cr6.eq) goto loc_8233B294;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8233b298
	goto loc_8233B298;
loc_8233B294:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8233B298:
	// bl 0x822946f0
	ctx.lr = 0x8233B29C;
	sub_822946F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r30,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8233b278
	if (ctx.cr6.lt) goto loc_8233B278;
loc_8233B2D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B2DC"))) PPC_WEAK_FUNC(sub_8233B2DC);
PPC_FUNC_IMPL(__imp__sub_8233B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B2E0"))) PPC_WEAK_FUNC(sub_8233B2E0);
PPC_FUNC_IMPL(__imp__sub_8233B2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233B2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bl 0x8233b420
	ctx.lr = 0x8233B304;
	sub_8233B420(ctx, base);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8233b374
	if (ctx.cr6.eq) goto loc_8233B374;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233b32c
	if (ctx.cr6.eq) goto loc_8233B32C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8233b334
	goto loc_8233B334;
loc_8233B32C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_8233B334:
	// bl 0x822946f0
	ctx.lr = 0x8233B338;
	sub_822946F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8233b370
	if (ctx.cr6.eq) goto loc_8233B370;
loc_8233B35C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8233b35c
	if (!ctx.cr6.eq) goto loc_8233B35C;
loc_8233B370:
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
loc_8233B374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B37C"))) PPC_WEAK_FUNC(sub_8233B37C);
PPC_FUNC_IMPL(__imp__sub_8233B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B380"))) PPC_WEAK_FUNC(sub_8233B380);
PPC_FUNC_IMPL(__imp__sub_8233B380) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822960c0
	ctx.lr = 0x8233B3A4;
	sub_822960C0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8233B3B0;
	sub_82294BB8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8233B3D4"))) PPC_WEAK_FUNC(sub_8233B3D4);
PPC_FUNC_IMPL(__imp__sub_8233B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B3D8"))) PPC_WEAK_FUNC(sub_8233B3D8);
PPC_FUNC_IMPL(__imp__sub_8233B3D8) {
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
	// bl 0x82294bb8
	ctx.lr = 0x8233B3F8;
	sub_82294BB8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8233B41C"))) PPC_WEAK_FUNC(sub_8233B41C);
PPC_FUNC_IMPL(__imp__sub_8233B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B420"))) PPC_WEAK_FUNC(sub_8233B420);
PPC_FUNC_IMPL(__imp__sub_8233B420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233B428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233b460
	if (!ctx.cr6.lt) goto loc_8233B460;
	// rlwinm r30,r29,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_8233B448:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8233b148
	ctx.lr = 0x8233B454;
	sub_8233B148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x8233b448
	if (!ctx.cr0.eq) goto loc_8233B448;
loc_8233B460:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d230
	ctx.lr = 0x8233B478;
	sub_8232D230(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B480"))) PPC_WEAK_FUNC(sub_8233B480);
PPC_FUNC_IMPL(__imp__sub_8233B480) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r4,r11,-13192
	ctx.r4.s64 = ctx.r11.s64 + -13192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232e868
	ctx.lr = 0x8233B4A4;
	sub_8232E868(ctx, base);
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

__attribute__((alias("__imp__sub_8233B4BC"))) PPC_WEAK_FUNC(sub_8233B4BC);
PPC_FUNC_IMPL(__imp__sub_8233B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B4C0"))) PPC_WEAK_FUNC(sub_8233B4C0);
PPC_FUNC_IMPL(__imp__sub_8233B4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-13176
	ctx.r4.s64 = ctx.r10.s64 + -13176;
	// lwz r3,28868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x8232d178
	ctx.lr = 0x8233B4E0;
	sub_8232D178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B4F0"))) PPC_WEAK_FUNC(sub_8233B4F0);
PPC_FUNC_IMPL(__imp__sub_8233B4F0) {
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
	// bl 0x82347258
	ctx.lr = 0x8233B500;
	sub_82347258(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B510"))) PPC_WEAK_FUNC(sub_8233B510);
PPC_FUNC_IMPL(__imp__sub_8233B510) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-12656
	ctx.r4.s64 = ctx.r11.s64 + -12656;
	// bl 0x822bc6c8
	ctx.lr = 0x8233B52C;
	sub_822BC6C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B53C"))) PPC_WEAK_FUNC(sub_8233B53C);
PPC_FUNC_IMPL(__imp__sub_8233B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B540"))) PPC_WEAK_FUNC(sub_8233B540);
PPC_FUNC_IMPL(__imp__sub_8233B540) {
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
	// bl 0x8232e868
	ctx.lr = 0x8233B558;
	sub_8232E868(ctx, base);
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

__attribute__((alias("__imp__sub_8233B570"))) PPC_WEAK_FUNC(sub_8233B570);
PPC_FUNC_IMPL(__imp__sub_8233B570) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-10292
	ctx.r4.s64 = ctx.r11.s64 + -10292;
	// bl 0x82347258
	ctx.lr = 0x8233B588;
	sub_82347258(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B598"))) PPC_WEAK_FUNC(sub_8233B598);
PPC_FUNC_IMPL(__imp__sub_8233B598) {
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
	// bl 0x822bc6c8
	ctx.lr = 0x8233B5A8;
	sub_822BC6C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B5B8"))) PPC_WEAK_FUNC(sub_8233B5B8);
PPC_FUNC_IMPL(__imp__sub_8233B5B8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-11900
	ctx.r4.s64 = ctx.r11.s64 + -11900;
	// bl 0x82347258
	ctx.lr = 0x8233B5D0;
	sub_82347258(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B5E0"))) PPC_WEAK_FUNC(sub_8233B5E0);
PPC_FUNC_IMPL(__imp__sub_8233B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,-23856
	ctx.r7.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-11884
	ctx.r4.s64 = ctx.r10.s64 + -11884;
	// bl 0x82347258
	ctx.lr = 0x8233B600;
	sub_82347258(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B610"))) PPC_WEAK_FUNC(sub_8233B610);
PPC_FUNC_IMPL(__imp__sub_8233B610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r11,-11864
	ctx.r7.s64 = ctx.r11.s64 + -11864;
	// addi r6,r10,-11856
	ctx.r6.s64 = ctx.r10.s64 + -11856;
	// addi r4,r9,-11884
	ctx.r4.s64 = ctx.r9.s64 + -11884;
	// bl 0x82347258
	ctx.lr = 0x8233B638;
	sub_82347258(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B648"))) PPC_WEAK_FUNC(sub_8233B648);
PPC_FUNC_IMPL(__imp__sub_8233B648) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,-23856
	ctx.r7.s64 = ctx.r11.s64 + -23856;
	// addi r6,r10,-11864
	ctx.r6.s64 = ctx.r10.s64 + -11864;
	// bl 0x82347258
	ctx.lr = 0x8233B668;
	sub_82347258(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B678"))) PPC_WEAK_FUNC(sub_8233B678);
PPC_FUNC_IMPL(__imp__sub_8233B678) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82396ef8
	sub_82396EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B680"))) PPC_WEAK_FUNC(sub_8233B680);
PPC_FUNC_IMPL(__imp__sub_8233B680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8233B688;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8233b8e0
	if (ctx.cr6.lt) goto loc_8233B8E0;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8233B6C4;
	sub_82CB16F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// li r24,12
	ctx.r24.s64 = 12;
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
loc_8233B6D4:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r10,r24
	ctx.r11.s32 = ctx.r10.s32 / ctx.r24.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8233b850
	if (!ctx.cr6.gt) goto loc_8233B850;
loc_8233B6F8:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8230f118
	ctx.lr = 0x8233B718;
	sub_8230F118(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
loc_8233B720:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8233b768
	if (ctx.cr6.gt) goto loc_8233B768;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b740
	if (ctx.cr6.eq) goto loc_8233B740;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8233b744
	goto loc_8233B744;
loc_8233B740:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8233B744:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b758
	if (ctx.cr6.eq) goto loc_8233B758;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b75c
	goto loc_8233B75C;
loc_8233B758:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8233B75C:
	// bl 0x82cb0328
	ctx.lr = 0x8233B760;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233b720
	if (!ctx.cr6.gt) goto loc_8233B720;
loc_8233B768:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8233b7b0
	if (!ctx.cr6.gt) goto loc_8233B7B0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b788
	if (ctx.cr6.eq) goto loc_8233B788;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8233b78c
	goto loc_8233B78C;
loc_8233B788:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8233B78C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b7a0
	if (ctx.cr6.eq) goto loc_8233B7A0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8233b7a4
	goto loc_8233B7A4;
loc_8233B7A0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8233B7A4:
	// bl 0x82cb0328
	ctx.lr = 0x8233B7A8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8233b768
	if (!ctx.cr6.lt) goto loc_8233B768;
loc_8233B7B0:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bgt cr6,0x8233b7c8
	if (ctx.cr6.gt) goto loc_8233B7C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f118
	ctx.lr = 0x8233B7C4;
	sub_8230F118(ctx, base);
	// b 0x8233b720
	goto loc_8233B720;
loc_8233B7C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230f118
	ctx.lr = 0x8233B7D0;
	sub_8230F118(ctx, base);
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r10,r30,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// divw r8,r10,r24
	ctx.r8.s32 = ctx.r10.s32 / ctx.r24.s32;
	// divw r7,r9,r24
	ctx.r7.s32 = ctx.r9.s32 / ctx.r24.s32;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8233b818
	if (ctx.cr6.lt) goto loc_8233B818;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8233b808
	if (!ctx.cr6.lt) goto loc_8233B808;
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_8233B808:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8233b8d0
	if (!ctx.cr6.gt) goto loc_8233B8D0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x8233b83c
	goto loc_8233B83C;
loc_8233B818:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8233b82c
	if (!ctx.cr6.gt) goto loc_8233B82C;
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_8233B82C:
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8233b8d0
	if (!ctx.cr6.lt) goto loc_8233B8D0;
	// addi r27,r31,-12
	ctx.r27.s64 = ctx.r31.s64 + -12;
loc_8233B83C:
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r11,r24
	ctx.r11.s32 = ctx.r11.s32 / ctx.r24.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8233b6f8
	if (ctx.cr6.gt) goto loc_8233B6F8;
loc_8233B850:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8233b8d0
	if (!ctx.cr6.gt) goto loc_8233B8D0;
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
loc_8233B85C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8233b8b8
	if (ctx.cr6.gt) goto loc_8233B8B8;
loc_8233B86C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b880
	if (ctx.cr6.eq) goto loc_8233B880;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b884
	goto loc_8233B884;
loc_8233B880:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8233B884:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b898
	if (ctx.cr6.eq) goto loc_8233B898;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8233b89c
	goto loc_8233B89C;
loc_8233B898:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8233B89C:
	// bl 0x82cb0328
	ctx.lr = 0x8233B8A0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233b8ac
	if (!ctx.cr6.gt) goto loc_8233B8AC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8233B8AC:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8233b86c
	if (!ctx.cr6.gt) goto loc_8233B86C;
loc_8233B8B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f118
	ctx.lr = 0x8233B8C4;
	sub_8230F118(ctx, base);
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8233b85c
	if (ctx.cr6.gt) goto loc_8233B85C;
loc_8233B8D0:
	// addi r25,r25,-8
	ctx.r25.s64 = ctx.r25.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233b6d4
	if (!ctx.cr6.lt) goto loc_8233B6D4;
loc_8233B8E0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B8E8"))) PPC_WEAK_FUNC(sub_8233B8E8);
PPC_FUNC_IMPL(__imp__sub_8233B8E8) {
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
	ctx.lr = 0x8233B914;
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

__attribute__((alias("__imp__sub_8233B934"))) PPC_WEAK_FUNC(sub_8233B934);
PPC_FUNC_IMPL(__imp__sub_8233B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B938"))) PPC_WEAK_FUNC(sub_8233B938);
PPC_FUNC_IMPL(__imp__sub_8233B938) {
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
	ctx.lr = 0x8233B964;
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

__attribute__((alias("__imp__sub_8233B984"))) PPC_WEAK_FUNC(sub_8233B984);
PPC_FUNC_IMPL(__imp__sub_8233B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B988"))) PPC_WEAK_FUNC(sub_8233B988);
PPC_FUNC_IMPL(__imp__sub_8233B988) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233B9B4;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
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

__attribute__((alias("__imp__sub_8233B9D4"))) PPC_WEAK_FUNC(sub_8233B9D4);
PPC_FUNC_IMPL(__imp__sub_8233B9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B9D8"))) PPC_WEAK_FUNC(sub_8233B9D8);
PPC_FUNC_IMPL(__imp__sub_8233B9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B9DC"))) PPC_WEAK_FUNC(sub_8233B9DC);
PPC_FUNC_IMPL(__imp__sub_8233B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B9E0"))) PPC_WEAK_FUNC(sub_8233B9E0);
PPC_FUNC_IMPL(__imp__sub_8233B9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B9E4"))) PPC_WEAK_FUNC(sub_8233B9E4);
PPC_FUNC_IMPL(__imp__sub_8233B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B9E8"))) PPC_WEAK_FUNC(sub_8233B9E8);
PPC_FUNC_IMPL(__imp__sub_8233B9E8) {
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

