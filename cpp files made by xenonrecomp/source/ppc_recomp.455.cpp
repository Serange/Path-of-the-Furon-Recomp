#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E48C68"))) PPC_WEAK_FUNC(sub_82E48C68);
PPC_FUNC_IMPL(__imp__sub_82E48C68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48c78
	if (!ctx.cr6.eq) goto loc_82E48C78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48C78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48C88"))) PPC_WEAK_FUNC(sub_82E48C88);
PPC_FUNC_IMPL(__imp__sub_82E48C88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48c98
	if (!ctx.cr6.eq) goto loc_82E48C98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48C98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48CA8"))) PPC_WEAK_FUNC(sub_82E48CA8);
PPC_FUNC_IMPL(__imp__sub_82E48CA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48cb8
	if (!ctx.cr6.eq) goto loc_82E48CB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48CB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48CC8"))) PPC_WEAK_FUNC(sub_82E48CC8);
PPC_FUNC_IMPL(__imp__sub_82E48CC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48cd8
	if (!ctx.cr6.eq) goto loc_82E48CD8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48CD8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48CE8"))) PPC_WEAK_FUNC(sub_82E48CE8);
PPC_FUNC_IMPL(__imp__sub_82E48CE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48cf8
	if (!ctx.cr6.eq) goto loc_82E48CF8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48CF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48D08"))) PPC_WEAK_FUNC(sub_82E48D08);
PPC_FUNC_IMPL(__imp__sub_82E48D08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48d18
	if (!ctx.cr6.eq) goto loc_82E48D18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48D18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48D28"))) PPC_WEAK_FUNC(sub_82E48D28);
PPC_FUNC_IMPL(__imp__sub_82E48D28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48d38
	if (!ctx.cr6.eq) goto loc_82E48D38;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48D38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48D48"))) PPC_WEAK_FUNC(sub_82E48D48);
PPC_FUNC_IMPL(__imp__sub_82E48D48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48d58
	if (!ctx.cr6.eq) goto loc_82E48D58;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48D58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48D68"))) PPC_WEAK_FUNC(sub_82E48D68);
PPC_FUNC_IMPL(__imp__sub_82E48D68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48d78
	if (!ctx.cr6.eq) goto loc_82E48D78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48D78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48D88"))) PPC_WEAK_FUNC(sub_82E48D88);
PPC_FUNC_IMPL(__imp__sub_82E48D88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48d98
	if (!ctx.cr6.eq) goto loc_82E48D98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48D98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48DB4"))) PPC_WEAK_FUNC(sub_82E48DB4);
PPC_FUNC_IMPL(__imp__sub_82E48DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48DB8"))) PPC_WEAK_FUNC(sub_82E48DB8);
PPC_FUNC_IMPL(__imp__sub_82E48DB8) {
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
	// bne cr6,0x82e48ddc
	if (!ctx.cr6.eq) goto loc_82E48DDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e48e14
	goto loc_82E48E14;
loc_82E48DDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E48DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e48e14
	if (!ctx.cr0.eq) goto loc_82E48E14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e48e14
	if (ctx.cr6.eq) goto loc_82E48E14;
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
loc_82E48E14:
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

__attribute__((alias("__imp__sub_82E48E28"))) PPC_WEAK_FUNC(sub_82E48E28);
PPC_FUNC_IMPL(__imp__sub_82E48E28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48e38
	if (!ctx.cr6.eq) goto loc_82E48E38;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48E38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48E54"))) PPC_WEAK_FUNC(sub_82E48E54);
PPC_FUNC_IMPL(__imp__sub_82E48E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48E58"))) PPC_WEAK_FUNC(sub_82E48E58);
PPC_FUNC_IMPL(__imp__sub_82E48E58) {
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
	// bne cr6,0x82e48e7c
	if (!ctx.cr6.eq) goto loc_82E48E7C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e48eb4
	goto loc_82E48EB4;
loc_82E48E7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E48E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e48eb4
	if (!ctx.cr0.eq) goto loc_82E48EB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e48eb4
	if (ctx.cr6.eq) goto loc_82E48EB4;
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
loc_82E48EB4:
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

__attribute__((alias("__imp__sub_82E48EC8"))) PPC_WEAK_FUNC(sub_82E48EC8);
PPC_FUNC_IMPL(__imp__sub_82E48EC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48ed8
	if (!ctx.cr6.eq) goto loc_82E48ED8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48ED8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48EE8"))) PPC_WEAK_FUNC(sub_82E48EE8);
PPC_FUNC_IMPL(__imp__sub_82E48EE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48ef8
	if (!ctx.cr6.eq) goto loc_82E48EF8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48EF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48F08"))) PPC_WEAK_FUNC(sub_82E48F08);
PPC_FUNC_IMPL(__imp__sub_82E48F08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48f18
	if (!ctx.cr6.eq) goto loc_82E48F18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48F18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48F28"))) PPC_WEAK_FUNC(sub_82E48F28);
PPC_FUNC_IMPL(__imp__sub_82E48F28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48f38
	if (!ctx.cr6.eq) goto loc_82E48F38;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48F38:
	// b 0x82e40850
	sub_82E40850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48F3C"))) PPC_WEAK_FUNC(sub_82E48F3C);
PPC_FUNC_IMPL(__imp__sub_82E48F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48F40"))) PPC_WEAK_FUNC(sub_82E48F40);
PPC_FUNC_IMPL(__imp__sub_82E48F40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48f50
	if (!ctx.cr6.eq) goto loc_82E48F50;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48F50:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40890
	sub_82E40890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48F60"))) PPC_WEAK_FUNC(sub_82E48F60);
PPC_FUNC_IMPL(__imp__sub_82E48F60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48f70
	if (!ctx.cr6.eq) goto loc_82E48F70;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48F70:
	// b 0x82e40800
	sub_82E40800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48F74"))) PPC_WEAK_FUNC(sub_82E48F74);
PPC_FUNC_IMPL(__imp__sub_82E48F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48F78"))) PPC_WEAK_FUNC(sub_82E48F78);
PPC_FUNC_IMPL(__imp__sub_82E48F78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48f88
	if (!ctx.cr6.eq) goto loc_82E48F88;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48F88:
	// b 0x82e41040
	sub_82E41040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48F8C"))) PPC_WEAK_FUNC(sub_82E48F8C);
PPC_FUNC_IMPL(__imp__sub_82E48F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48F90"))) PPC_WEAK_FUNC(sub_82E48F90);
PPC_FUNC_IMPL(__imp__sub_82E48F90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48fa0
	if (!ctx.cr6.eq) goto loc_82E48FA0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48FA0:
	// b 0x82e41088
	sub_82E41088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48FA4"))) PPC_WEAK_FUNC(sub_82E48FA4);
PPC_FUNC_IMPL(__imp__sub_82E48FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48FA8"))) PPC_WEAK_FUNC(sub_82E48FA8);
PPC_FUNC_IMPL(__imp__sub_82E48FA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48fb8
	if (!ctx.cr6.eq) goto loc_82E48FB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48FB8:
	// b 0x82e410d0
	sub_82E410D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48FBC"))) PPC_WEAK_FUNC(sub_82E48FBC);
PPC_FUNC_IMPL(__imp__sub_82E48FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48FC0"))) PPC_WEAK_FUNC(sub_82E48FC0);
PPC_FUNC_IMPL(__imp__sub_82E48FC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48fd0
	if (!ctx.cr6.eq) goto loc_82E48FD0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48FD0:
	// b 0x82e40b80
	sub_82E40B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48FD4"))) PPC_WEAK_FUNC(sub_82E48FD4);
PPC_FUNC_IMPL(__imp__sub_82E48FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48FD8"))) PPC_WEAK_FUNC(sub_82E48FD8);
PPC_FUNC_IMPL(__imp__sub_82E48FD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48fe8
	if (!ctx.cr6.eq) goto loc_82E48FE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48FE8:
	// b 0x82e408d8
	sub_82E408D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E48FEC"))) PPC_WEAK_FUNC(sub_82E48FEC);
PPC_FUNC_IMPL(__imp__sub_82E48FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E48FF0"))) PPC_WEAK_FUNC(sub_82E48FF0);
PPC_FUNC_IMPL(__imp__sub_82E48FF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49000
	if (!ctx.cr6.eq) goto loc_82E49000;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49000:
	// b 0x82e40920
	sub_82E40920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49004"))) PPC_WEAK_FUNC(sub_82E49004);
PPC_FUNC_IMPL(__imp__sub_82E49004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49008"))) PPC_WEAK_FUNC(sub_82E49008);
PPC_FUNC_IMPL(__imp__sub_82E49008) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49018
	if (!ctx.cr6.eq) goto loc_82E49018;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49018:
	// b 0x82e40968
	sub_82E40968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4901C"))) PPC_WEAK_FUNC(sub_82E4901C);
PPC_FUNC_IMPL(__imp__sub_82E4901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49020"))) PPC_WEAK_FUNC(sub_82E49020);
PPC_FUNC_IMPL(__imp__sub_82E49020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49030
	if (!ctx.cr6.eq) goto loc_82E49030;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49030:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e409b0
	sub_82E409B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49040"))) PPC_WEAK_FUNC(sub_82E49040);
PPC_FUNC_IMPL(__imp__sub_82E49040) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49050
	if (!ctx.cr6.eq) goto loc_82E49050;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49050:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40a00
	sub_82E40A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49060"))) PPC_WEAK_FUNC(sub_82E49060);
PPC_FUNC_IMPL(__imp__sub_82E49060) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49070
	if (!ctx.cr6.eq) goto loc_82E49070;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49070:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40a50
	sub_82E40A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49080"))) PPC_WEAK_FUNC(sub_82E49080);
PPC_FUNC_IMPL(__imp__sub_82E49080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49090
	if (!ctx.cr6.eq) goto loc_82E49090;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49090:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40aa0
	sub_82E40AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E490A0"))) PPC_WEAK_FUNC(sub_82E490A0);
PPC_FUNC_IMPL(__imp__sub_82E490A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e490b0
	if (!ctx.cr6.eq) goto loc_82E490B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E490B0:
	// b 0x82e40af0
	sub_82E40AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E490B4"))) PPC_WEAK_FUNC(sub_82E490B4);
PPC_FUNC_IMPL(__imp__sub_82E490B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E490B8"))) PPC_WEAK_FUNC(sub_82E490B8);
PPC_FUNC_IMPL(__imp__sub_82E490B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e490c8
	if (!ctx.cr6.eq) goto loc_82E490C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E490C8:
	// b 0x82e40b38
	sub_82E40B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E490CC"))) PPC_WEAK_FUNC(sub_82E490CC);
PPC_FUNC_IMPL(__imp__sub_82E490CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E490D0"))) PPC_WEAK_FUNC(sub_82E490D0);
PPC_FUNC_IMPL(__imp__sub_82E490D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e490e0
	if (!ctx.cr6.eq) goto loc_82E490E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E490E0:
	// b 0x82e40bc8
	sub_82E40BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E490E4"))) PPC_WEAK_FUNC(sub_82E490E4);
PPC_FUNC_IMPL(__imp__sub_82E490E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E490E8"))) PPC_WEAK_FUNC(sub_82E490E8);
PPC_FUNC_IMPL(__imp__sub_82E490E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e490f8
	if (!ctx.cr6.eq) goto loc_82E490F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E490F8:
	// b 0x82e40c08
	sub_82E40C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E490FC"))) PPC_WEAK_FUNC(sub_82E490FC);
PPC_FUNC_IMPL(__imp__sub_82E490FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49100"))) PPC_WEAK_FUNC(sub_82E49100);
PPC_FUNC_IMPL(__imp__sub_82E49100) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49110
	if (!ctx.cr6.eq) goto loc_82E49110;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49110:
	// b 0x82e40c50
	sub_82E40C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49114"))) PPC_WEAK_FUNC(sub_82E49114);
PPC_FUNC_IMPL(__imp__sub_82E49114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49118"))) PPC_WEAK_FUNC(sub_82E49118);
PPC_FUNC_IMPL(__imp__sub_82E49118) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49128
	if (!ctx.cr6.eq) goto loc_82E49128;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49128:
	// b 0x82e40c90
	sub_82E40C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4912C"))) PPC_WEAK_FUNC(sub_82E4912C);
PPC_FUNC_IMPL(__imp__sub_82E4912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49130"))) PPC_WEAK_FUNC(sub_82E49130);
PPC_FUNC_IMPL(__imp__sub_82E49130) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49140
	if (!ctx.cr6.eq) goto loc_82E49140;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49140:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40cd8
	sub_82E40CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49150"))) PPC_WEAK_FUNC(sub_82E49150);
PPC_FUNC_IMPL(__imp__sub_82E49150) {
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
	// bne cr6,0x82e49174
	if (!ctx.cr6.eq) goto loc_82E49174;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e491a0
	goto loc_82E491A0;
loc_82E49174:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40d20
	ctx.lr = 0x82E4917C;
	sub_82E40D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e491a0
	if (!ctx.cr0.eq) goto loc_82E491A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e491a0
	if (ctx.cr6.eq) goto loc_82E491A0;
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
loc_82E491A0:
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

__attribute__((alias("__imp__sub_82E491B4"))) PPC_WEAK_FUNC(sub_82E491B4);
PPC_FUNC_IMPL(__imp__sub_82E491B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E491B8"))) PPC_WEAK_FUNC(sub_82E491B8);
PPC_FUNC_IMPL(__imp__sub_82E491B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e491c8
	if (!ctx.cr6.eq) goto loc_82E491C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E491C8:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e40d68
	sub_82E40D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E491D8"))) PPC_WEAK_FUNC(sub_82E491D8);
PPC_FUNC_IMPL(__imp__sub_82E491D8) {
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
	// bne cr6,0x82e491fc
	if (!ctx.cr6.eq) goto loc_82E491FC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49228
	goto loc_82E49228;
loc_82E491FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40db0
	ctx.lr = 0x82E49204;
	sub_82E40DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49228
	if (!ctx.cr0.eq) goto loc_82E49228;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e49228
	if (ctx.cr6.eq) goto loc_82E49228;
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
loc_82E49228:
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

__attribute__((alias("__imp__sub_82E4923C"))) PPC_WEAK_FUNC(sub_82E4923C);
PPC_FUNC_IMPL(__imp__sub_82E4923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49240"))) PPC_WEAK_FUNC(sub_82E49240);
PPC_FUNC_IMPL(__imp__sub_82E49240) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49250
	if (!ctx.cr6.eq) goto loc_82E49250;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49250:
	// b 0x82e40df8
	sub_82E40DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49254"))) PPC_WEAK_FUNC(sub_82E49254);
PPC_FUNC_IMPL(__imp__sub_82E49254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49258"))) PPC_WEAK_FUNC(sub_82E49258);
PPC_FUNC_IMPL(__imp__sub_82E49258) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49268
	if (!ctx.cr6.eq) goto loc_82E49268;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49268:
	// b 0x82e40e48
	sub_82E40E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4926C"))) PPC_WEAK_FUNC(sub_82E4926C);
PPC_FUNC_IMPL(__imp__sub_82E4926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49270"))) PPC_WEAK_FUNC(sub_82E49270);
PPC_FUNC_IMPL(__imp__sub_82E49270) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49280
	if (!ctx.cr6.eq) goto loc_82E49280;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49280:
	// b 0x82e40e98
	sub_82E40E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49284"))) PPC_WEAK_FUNC(sub_82E49284);
PPC_FUNC_IMPL(__imp__sub_82E49284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49288"))) PPC_WEAK_FUNC(sub_82E49288);
PPC_FUNC_IMPL(__imp__sub_82E49288) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49298
	if (!ctx.cr6.eq) goto loc_82E49298;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49298:
	// b 0x82e40ed8
	sub_82E40ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4929C"))) PPC_WEAK_FUNC(sub_82E4929C);
PPC_FUNC_IMPL(__imp__sub_82E4929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E492A0"))) PPC_WEAK_FUNC(sub_82E492A0);
PPC_FUNC_IMPL(__imp__sub_82E492A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e492b0
	if (!ctx.cr6.eq) goto loc_82E492B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E492B0:
	// b 0x82e40f20
	sub_82E40F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E492B4"))) PPC_WEAK_FUNC(sub_82E492B4);
PPC_FUNC_IMPL(__imp__sub_82E492B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E492B8"))) PPC_WEAK_FUNC(sub_82E492B8);
PPC_FUNC_IMPL(__imp__sub_82E492B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e492c8
	if (!ctx.cr6.eq) goto loc_82E492C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E492C8:
	// b 0x82e40f68
	sub_82E40F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E492CC"))) PPC_WEAK_FUNC(sub_82E492CC);
PPC_FUNC_IMPL(__imp__sub_82E492CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E492D0"))) PPC_WEAK_FUNC(sub_82E492D0);
PPC_FUNC_IMPL(__imp__sub_82E492D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e492e0
	if (!ctx.cr6.eq) goto loc_82E492E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E492E0:
	// b 0x82e40fb0
	sub_82E40FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E492E4"))) PPC_WEAK_FUNC(sub_82E492E4);
PPC_FUNC_IMPL(__imp__sub_82E492E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E492E8"))) PPC_WEAK_FUNC(sub_82E492E8);
PPC_FUNC_IMPL(__imp__sub_82E492E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e492f8
	if (!ctx.cr6.eq) goto loc_82E492F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E492F8:
	// b 0x82e40ff8
	sub_82E40FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E492FC"))) PPC_WEAK_FUNC(sub_82E492FC);
PPC_FUNC_IMPL(__imp__sub_82E492FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49300"))) PPC_WEAK_FUNC(sub_82E49300);
PPC_FUNC_IMPL(__imp__sub_82E49300) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49310
	if (!ctx.cr6.eq) goto loc_82E49310;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49310:
	// b 0x82e47300
	sub_82E47300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49314"))) PPC_WEAK_FUNC(sub_82E49314);
PPC_FUNC_IMPL(__imp__sub_82E49314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49318"))) PPC_WEAK_FUNC(sub_82E49318);
PPC_FUNC_IMPL(__imp__sub_82E49318) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49328
	if (!ctx.cr6.eq) goto loc_82E49328;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49328:
	// b 0x82e47360
	sub_82E47360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4932C"))) PPC_WEAK_FUNC(sub_82E4932C);
PPC_FUNC_IMPL(__imp__sub_82E4932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49330"))) PPC_WEAK_FUNC(sub_82E49330);
PPC_FUNC_IMPL(__imp__sub_82E49330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49340
	if (!ctx.cr6.eq) goto loc_82E49340;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49340:
	// b 0x82e473c0
	sub_82E473C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49344"))) PPC_WEAK_FUNC(sub_82E49344);
PPC_FUNC_IMPL(__imp__sub_82E49344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49348"))) PPC_WEAK_FUNC(sub_82E49348);
PPC_FUNC_IMPL(__imp__sub_82E49348) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49358
	if (!ctx.cr6.eq) goto loc_82E49358;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49358:
	// b 0x82e47410
	sub_82E47410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4935C"))) PPC_WEAK_FUNC(sub_82E4935C);
PPC_FUNC_IMPL(__imp__sub_82E4935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49360"))) PPC_WEAK_FUNC(sub_82E49360);
PPC_FUNC_IMPL(__imp__sub_82E49360) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49370
	if (!ctx.cr6.eq) goto loc_82E49370;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49370:
	// b 0x82e47460
	sub_82E47460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49374"))) PPC_WEAK_FUNC(sub_82E49374);
PPC_FUNC_IMPL(__imp__sub_82E49374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49378"))) PPC_WEAK_FUNC(sub_82E49378);
PPC_FUNC_IMPL(__imp__sub_82E49378) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49388
	if (!ctx.cr6.eq) goto loc_82E49388;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49388:
	// b 0x82e474b0
	sub_82E474B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4938C"))) PPC_WEAK_FUNC(sub_82E4938C);
PPC_FUNC_IMPL(__imp__sub_82E4938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49390"))) PPC_WEAK_FUNC(sub_82E49390);
PPC_FUNC_IMPL(__imp__sub_82E49390) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e493a0
	if (!ctx.cr6.eq) goto loc_82E493A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E493A0:
	// b 0x82e47500
	sub_82E47500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E493A4"))) PPC_WEAK_FUNC(sub_82E493A4);
PPC_FUNC_IMPL(__imp__sub_82E493A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E493A8"))) PPC_WEAK_FUNC(sub_82E493A8);
PPC_FUNC_IMPL(__imp__sub_82E493A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e493b8
	if (!ctx.cr6.eq) goto loc_82E493B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E493B8:
	// b 0x82e47550
	sub_82E47550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E493BC"))) PPC_WEAK_FUNC(sub_82E493BC);
PPC_FUNC_IMPL(__imp__sub_82E493BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E493C0"))) PPC_WEAK_FUNC(sub_82E493C0);
PPC_FUNC_IMPL(__imp__sub_82E493C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e493d0
	if (!ctx.cr6.eq) goto loc_82E493D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E493D0:
	// b 0x82e475a0
	sub_82E475A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E493D4"))) PPC_WEAK_FUNC(sub_82E493D4);
PPC_FUNC_IMPL(__imp__sub_82E493D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E493D8"))) PPC_WEAK_FUNC(sub_82E493D8);
PPC_FUNC_IMPL(__imp__sub_82E493D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e493e8
	if (!ctx.cr6.eq) goto loc_82E493E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E493E8:
	// b 0x82e475f0
	sub_82E475F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E493EC"))) PPC_WEAK_FUNC(sub_82E493EC);
PPC_FUNC_IMPL(__imp__sub_82E493EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E493F0"))) PPC_WEAK_FUNC(sub_82E493F0);
PPC_FUNC_IMPL(__imp__sub_82E493F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49400
	if (!ctx.cr6.eq) goto loc_82E49400;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49400:
	// b 0x82e47640
	sub_82E47640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49404"))) PPC_WEAK_FUNC(sub_82E49404);
PPC_FUNC_IMPL(__imp__sub_82E49404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49408"))) PPC_WEAK_FUNC(sub_82E49408);
PPC_FUNC_IMPL(__imp__sub_82E49408) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49418
	if (!ctx.cr6.eq) goto loc_82E49418;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49418:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49428"))) PPC_WEAK_FUNC(sub_82E49428);
PPC_FUNC_IMPL(__imp__sub_82E49428) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49438
	if (!ctx.cr6.eq) goto loc_82E49438;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49438:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49448"))) PPC_WEAK_FUNC(sub_82E49448);
PPC_FUNC_IMPL(__imp__sub_82E49448) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49458
	if (!ctx.cr6.eq) goto loc_82E49458;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49458:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49468"))) PPC_WEAK_FUNC(sub_82E49468);
PPC_FUNC_IMPL(__imp__sub_82E49468) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49478
	if (!ctx.cr6.eq) goto loc_82E49478;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49478:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49488"))) PPC_WEAK_FUNC(sub_82E49488);
PPC_FUNC_IMPL(__imp__sub_82E49488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49498
	if (!ctx.cr6.eq) goto loc_82E49498;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49498:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E494A8"))) PPC_WEAK_FUNC(sub_82E494A8);
PPC_FUNC_IMPL(__imp__sub_82E494A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e494b8
	if (!ctx.cr6.eq) goto loc_82E494B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E494B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E494D4"))) PPC_WEAK_FUNC(sub_82E494D4);
PPC_FUNC_IMPL(__imp__sub_82E494D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E494D8"))) PPC_WEAK_FUNC(sub_82E494D8);
PPC_FUNC_IMPL(__imp__sub_82E494D8) {
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
	// bne cr6,0x82e494fc
	if (!ctx.cr6.eq) goto loc_82E494FC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49534
	goto loc_82E49534;
loc_82E494FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E49510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49534
	if (!ctx.cr0.eq) goto loc_82E49534;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e49534
	if (ctx.cr6.eq) goto loc_82E49534;
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
loc_82E49534:
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

__attribute__((alias("__imp__sub_82E49548"))) PPC_WEAK_FUNC(sub_82E49548);
PPC_FUNC_IMPL(__imp__sub_82E49548) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49558
	if (!ctx.cr6.eq) goto loc_82E49558;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49558:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49568"))) PPC_WEAK_FUNC(sub_82E49568);
PPC_FUNC_IMPL(__imp__sub_82E49568) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49578
	if (!ctx.cr6.eq) goto loc_82E49578;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49578:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49588"))) PPC_WEAK_FUNC(sub_82E49588);
PPC_FUNC_IMPL(__imp__sub_82E49588) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49598
	if (!ctx.cr6.eq) goto loc_82E49598;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49598:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E495A8"))) PPC_WEAK_FUNC(sub_82E495A8);
PPC_FUNC_IMPL(__imp__sub_82E495A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e495b8
	if (!ctx.cr6.eq) goto loc_82E495B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E495B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E495C8"))) PPC_WEAK_FUNC(sub_82E495C8);
PPC_FUNC_IMPL(__imp__sub_82E495C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e495d8
	if (!ctx.cr6.eq) goto loc_82E495D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E495D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E495E8"))) PPC_WEAK_FUNC(sub_82E495E8);
PPC_FUNC_IMPL(__imp__sub_82E495E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e495f8
	if (!ctx.cr6.eq) goto loc_82E495F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E495F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49614"))) PPC_WEAK_FUNC(sub_82E49614);
PPC_FUNC_IMPL(__imp__sub_82E49614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49618"))) PPC_WEAK_FUNC(sub_82E49618);
PPC_FUNC_IMPL(__imp__sub_82E49618) {
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
	// bne cr6,0x82e4963c
	if (!ctx.cr6.eq) goto loc_82E4963C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49674
	goto loc_82E49674;
loc_82E4963C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E49650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49674
	if (!ctx.cr0.eq) goto loc_82E49674;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e49674
	if (ctx.cr6.eq) goto loc_82E49674;
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
loc_82E49674:
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

__attribute__((alias("__imp__sub_82E49688"))) PPC_WEAK_FUNC(sub_82E49688);
PPC_FUNC_IMPL(__imp__sub_82E49688) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49698
	if (!ctx.cr6.eq) goto loc_82E49698;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49698:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E496B4"))) PPC_WEAK_FUNC(sub_82E496B4);
PPC_FUNC_IMPL(__imp__sub_82E496B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E496B8"))) PPC_WEAK_FUNC(sub_82E496B8);
PPC_FUNC_IMPL(__imp__sub_82E496B8) {
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
	// bne cr6,0x82e496dc
	if (!ctx.cr6.eq) goto loc_82E496DC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49714
	goto loc_82E49714;
loc_82E496DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E496F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49714
	if (!ctx.cr0.eq) goto loc_82E49714;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e49714
	if (ctx.cr6.eq) goto loc_82E49714;
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
loc_82E49714:
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

__attribute__((alias("__imp__sub_82E49728"))) PPC_WEAK_FUNC(sub_82E49728);
PPC_FUNC_IMPL(__imp__sub_82E49728) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49738
	if (!ctx.cr6.eq) goto loc_82E49738;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49738:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49748"))) PPC_WEAK_FUNC(sub_82E49748);
PPC_FUNC_IMPL(__imp__sub_82E49748) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49758
	if (!ctx.cr6.eq) goto loc_82E49758;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49758:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49768"))) PPC_WEAK_FUNC(sub_82E49768);
PPC_FUNC_IMPL(__imp__sub_82E49768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49778
	if (!ctx.cr6.eq) goto loc_82E49778;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49778:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49788"))) PPC_WEAK_FUNC(sub_82E49788);
PPC_FUNC_IMPL(__imp__sub_82E49788) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e49798
	if (!ctx.cr6.eq) goto loc_82E49798;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E49798:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E497A8"))) PPC_WEAK_FUNC(sub_82E497A8);
PPC_FUNC_IMPL(__imp__sub_82E497A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e497b8
	if (!ctx.cr6.eq) goto loc_82E497B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E497B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E497C8"))) PPC_WEAK_FUNC(sub_82E497C8);
PPC_FUNC_IMPL(__imp__sub_82E497C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e497d8
	if (!ctx.cr6.eq) goto loc_82E497D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E497D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E497E8"))) PPC_WEAK_FUNC(sub_82E497E8);
PPC_FUNC_IMPL(__imp__sub_82E497E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e497f8
	if (!ctx.cr6.eq) goto loc_82E497F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E497F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E49808"))) PPC_WEAK_FUNC(sub_82E49808);
PPC_FUNC_IMPL(__imp__sub_82E49808) {
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
	// bne cr6,0x82e4982c
	if (!ctx.cr6.eq) goto loc_82E4982C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49864
	goto loc_82E49864;
loc_82E4982C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E49840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49864
	if (!ctx.cr0.eq) goto loc_82E49864;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e49864
	if (ctx.cr6.eq) goto loc_82E49864;
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
loc_82E49864:
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

__attribute__((alias("__imp__sub_82E49878"))) PPC_WEAK_FUNC(sub_82E49878);
PPC_FUNC_IMPL(__imp__sub_82E49878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E49888"))) PPC_WEAK_FUNC(sub_82E49888);
PPC_FUNC_IMPL(__imp__sub_82E49888) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e498b4
	if (ctx.cr0.eq) goto loc_82E498B4;
	// bl 0x822990f0
	ctx.lr = 0x82E498B4;
	sub_822990F0(ctx, base);
loc_82E498B4:
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

__attribute__((alias("__imp__sub_82E498CC"))) PPC_WEAK_FUNC(sub_82E498CC);
PPC_FUNC_IMPL(__imp__sub_82E498CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E498D0"))) PPC_WEAK_FUNC(sub_82E498D0);
PPC_FUNC_IMPL(__imp__sub_82E498D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E498E0"))) PPC_WEAK_FUNC(sub_82E498E0);
PPC_FUNC_IMPL(__imp__sub_82E498E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E49928"))) PPC_WEAK_FUNC(sub_82E49928);
PPC_FUNC_IMPL(__imp__sub_82E49928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E49930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e49970
	if (ctx.cr0.eq) goto loc_82E49970;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394d0
	ctx.lr = 0x82E4995C;
	sub_82E394D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x82e49974
	if (!ctx.cr0.eq) goto loc_82E49974;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e499b4
	goto loc_82E499B4;
loc_82E49970:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82E49974:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// sth r30,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r30.u16);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82E499B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E499BC"))) PPC_WEAK_FUNC(sub_82E499BC);
PPC_FUNC_IMPL(__imp__sub_82E499BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E499C0"))) PPC_WEAK_FUNC(sub_82E499C0);
PPC_FUNC_IMPL(__imp__sub_82E499C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E499C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e499f0
	if (ctx.cr6.eq) goto loc_82E499F0;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
loc_82E499F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e49a0c
	if (ctx.cr6.eq) goto loc_82E49A0C;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// b 0x82e49a0c
	goto loc_82E49A0C;
loc_82E49A00:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e49a18
	if (ctx.cr6.eq) goto loc_82E49A18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82E49A0C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e49a00
	if (!ctx.cr0.eq) goto loc_82E49A00;
loc_82E49A18:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82e49ae4
	if (!ctx.cr6.eq) goto loc_82E49AE4;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e49ae4
	if (ctx.cr0.eq) goto loc_82E49AE4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82E49A38:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e49a4c
	if (!ctx.cr0.eq) goto loc_82E49A4C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49A4C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e49ad8
	if (ctx.cr6.eq) goto loc_82E49AD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49a64
	if (!ctx.cr6.eq) goto loc_82E49A64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49A64:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49abc
	if (ctx.cr6.eq) goto loc_82E49ABC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49a80
	if (!ctx.cr6.eq) goto loc_82E49A80;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49A80:
	// subf r5,r28,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E49A90;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49abc
	if (!ctx.cr0.eq) goto loc_82E49ABC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49aa8
	if (!ctx.cr6.eq) goto loc_82E49AA8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49AA8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49ac4
	if (ctx.cr6.eq) goto loc_82E49AC4;
loc_82E49ABC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e49a38
	goto loc_82E49A38;
loc_82E49AC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r31,-4
	ctx.r27.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49ad4
	if (!ctx.cr6.eq) goto loc_82E49AD4;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82E49AD4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E49AD8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e49b4c
	if (ctx.cr0.eq) goto loc_82E49B4C;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
loc_82E49AE4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82e49a0c
	if (ctx.cr6.eq) goto loc_82E49A0C;
	// lwz r31,48(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r30,r27,48
	ctx.r30.s64 = ctx.r27.s64 + 48;
	// b 0x82e49b44
	goto loc_82E49B44;
loc_82E49B00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e49b10
	if (!ctx.cr6.eq) goto loc_82E49B10;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49B10:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49b40
	if (ctx.cr6.eq) goto loc_82E49B40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e49b2c
	if (!ctx.cr6.eq) goto loc_82E49B2C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49B2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x82da4630
	ctx.lr = 0x82E49B38;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e49b58
	if (ctx.cr0.eq) goto loc_82E49B58;
loc_82E49B40:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E49B44:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e49b00
	if (!ctx.cr6.eq) goto loc_82E49B00;
loc_82E49B4C:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82E49B50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E49B58:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e49b74
	if (ctx.cr6.eq) goto loc_82E49B74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e49b70
	if (!ctx.cr6.eq) goto loc_82E49B70;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E49B70:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82E49B74:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e49b80
	if (ctx.cr6.eq) goto loc_82E49B80;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_82E49B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e49b50
	goto loc_82E49B50;
}

__attribute__((alias("__imp__sub_82E49B88"))) PPC_WEAK_FUNC(sub_82E49B88);
PPC_FUNC_IMPL(__imp__sub_82E49B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E49B90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e49c98
	if (ctx.cr6.eq) goto loc_82E49C98;
loc_82E49BA4:
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e49c98
	if (ctx.cr0.eq) goto loc_82E49C98;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82e49bcc
	goto loc_82E49BCC;
loc_82E49BBC:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e49bd4
	if (ctx.cr6.eq) goto loc_82E49BD4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82E49BCC:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e49bbc
	if (!ctx.cr0.eq) goto loc_82E49BBC;
loc_82E49BD4:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82E49BD8:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e49bec
	if (!ctx.cr0.eq) goto loc_82E49BEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E49BEC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e49c98
	if (ctx.cr6.eq) goto loc_82E49C98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49c04
	if (!ctx.cr6.eq) goto loc_82E49C04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E49C04:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49c5c
	if (ctx.cr6.eq) goto loc_82E49C5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49c20
	if (!ctx.cr6.eq) goto loc_82E49C20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E49C20:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E49C30;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49c5c
	if (!ctx.cr0.eq) goto loc_82E49C5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49c48
	if (!ctx.cr6.eq) goto loc_82E49C48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E49C48:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49c64
	if (ctx.cr6.eq) goto loc_82E49C64;
loc_82E49C5C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e49bd8
	goto loc_82E49BD8;
loc_82E49C64:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e49c8c
	if (ctx.cr6.eq) goto loc_82E49C8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49c80
	if (!ctx.cr6.eq) goto loc_82E49C80;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E49C80:
	// addic. r30,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r30.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e49ba4
	if (!ctx.cr0.eq) goto loc_82E49BA4;
	// b 0x82e49c98
	goto loc_82E49C98;
loc_82E49C8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e49c9c
	if (!ctx.cr6.eq) goto loc_82E49C9C;
loc_82E49C98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E49C9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E49CA4"))) PPC_WEAK_FUNC(sub_82E49CA4);
PPC_FUNC_IMPL(__imp__sub_82E49CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49CA8"))) PPC_WEAK_FUNC(sub_82E49CA8);
PPC_FUNC_IMPL(__imp__sub_82E49CA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e49cf8
	if (ctx.cr0.eq) goto loc_82E49CF8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82e499c0
	ctx.lr = 0x82E49CDC;
	sub_82E499C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e49cf8
	if (!ctx.cr0.eq) goto loc_82E49CF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e49cf8
	if (!ctx.cr6.eq) goto loc_82E49CF8;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e49d1c
	goto loc_82E49D1C;
loc_82E49CF8:
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82E49D1C:
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

__attribute__((alias("__imp__sub_82E49D34"))) PPC_WEAK_FUNC(sub_82E49D34);
PPC_FUNC_IMPL(__imp__sub_82E49D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E49D38"))) PPC_WEAK_FUNC(sub_82E49D38);
PPC_FUNC_IMPL(__imp__sub_82E49D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E49D40;
	__savegprlr_25(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
	// addi r26,r11,23024
	ctx.r26.s64 = ctx.r11.s64 + 23024;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e49d80
	if (ctx.cr0.eq) goto loc_82E49D80;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r6,244
	ctx.r6.s64 = 244;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E49D78;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
loc_82E49D80:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb16f0
	ctx.lr = 0x82E49D90;
	sub_82CB16F0(ctx, base);
	// lwz r29,48(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r25,r28,48
	ctx.r25.s64 = ctx.r28.s64 + 48;
	// b 0x82e49e3c
	goto loc_82E49E3C;
loc_82E49D9C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-8
	ctx.r31.s64 = ctx.r29.s64 + -8;
	// bne cr6,0x82e49dac
	if (!ctx.cr6.eq) goto loc_82E49DAC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E49DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3e288
	ctx.lr = 0x82E49DB4;
	sub_82E3E288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a094
	if (!ctx.cr0.eq) goto loc_82E4A094;
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x82e49e38
	if (!ctx.cr0.gt) goto loc_82E49E38;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
loc_82E49DD0:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82E49DE0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e49e1c
	if (ctx.cr6.eq) goto loc_82E49E1C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e49e08
	if (ctx.cr6.eq) goto loc_82E49E08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82e49de0
	if (ctx.cr6.lt) goto loc_82E49DE0;
	// b 0x82e49e20
	goto loc_82E49E20;
loc_82E49E08:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
loc_82E49E1C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E49E20:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e49f2c
	if (ctx.cr0.eq) goto loc_82E49F2C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82e49dd0
	if (ctx.cr6.lt) goto loc_82E49DD0;
loc_82E49E38:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E49E3C:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e49d9c
	if (!ctx.cr6.eq) goto loc_82E49D9C;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,293
	ctx.r6.s64 = 293;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e39480
	ctx.lr = 0x82E49E60;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r3.u32);
	// beq 0x82e49f2c
	if (ctx.cr0.eq) goto loc_82E49F2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb1160
	ctx.lr = 0x82E49E78;
	sub_82CB1160(ctx, base);
	// stw r30,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r30.u32);
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r6,304
	ctx.r6.s64 = 304;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E49E94;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r3.u32);
	// beq 0x82e49f2c
	if (ctx.cr0.eq) goto loc_82E49F2C;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4a038
	if (!ctx.cr6.gt) goto loc_82E4A038;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E49EB4:
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82E49ED0;
	sub_82CB16F0(ctx, base);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,-4716(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
loc_82E49ED8:
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e49fe8
	if (ctx.cr6.eq) goto loc_82E49FE8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// bne cr6,0x82e49ef0
	if (!ctx.cr6.eq) goto loc_82E49EF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E49EF0:
	// lwz r7,384(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble 0x82e49fe0
	if (!ctx.cr0.gt) goto loc_82E49FE0;
	// lwz r8,84(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwzx r8,r30,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
loc_82E49F0C:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e49f34
	if (ctx.cr6.eq) goto loc_82E49F34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e49f0c
	if (ctx.cr6.lt) goto loc_82E49F0C;
	// b 0x82e49fe0
	goto loc_82E49FE0;
loc_82E49F2C:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4a094
	goto loc_82E4A094;
loc_82E49F34:
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,224(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e49fe0
	if (ctx.cr6.eq) goto loc_82E49FE0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82E49F58:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82e49fa0
	if (ctx.cr6.eq) goto loc_82E49FA0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82E49F70:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e49fa0
	if (ctx.cr6.eq) goto loc_82E49FA0;
	// lwz r9,228(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e49fa0
	if (!ctx.cr6.lt) goto loc_82E49FA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e49f70
	if (!ctx.cr6.eq) goto loc_82E49F70;
loc_82E49FA0:
	// lwz r9,228(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e4a088
	if (!ctx.cr6.lt) goto loc_82E4A088;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82e49fc8
	if (!ctx.cr6.eq) goto loc_82E49FC8;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r4,-4716(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
loc_82E49FC8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82e49f58
	if (!ctx.cr6.eq) goto loc_82E49F58;
loc_82E49FE0:
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82e49ed8
	goto loc_82E49ED8;
loc_82E49FE8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r6,356
	ctx.r6.s64 = 356;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r4,196
	ctx.r4.s64 = ctx.r4.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e39460
	ctx.lr = 0x82E4A004;
	sub_82E39460(ctx, base);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82cb1160
	ctx.lr = 0x82E4A024;
	sub_82CB1160(ctx, base);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e49eb4
	if (ctx.cr6.lt) goto loc_82E49EB4;
loc_82E4A038:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4a090
	if (ctx.cr0.eq) goto loc_82E4A090;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4A048:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4a05c
	if (!ctx.cr0.eq) goto loc_82E4A05C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4A05C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4a090
	if (ctx.cr6.eq) goto loc_82E4A090;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4a074
	if (!ctx.cr6.eq) goto loc_82E4A074;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4A074:
	// bl 0x82e49d38
	ctx.lr = 0x82E4A078;
	sub_82E49D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a094
	if (!ctx.cr0.eq) goto loc_82E4A094;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4a048
	goto loc_82E4A048;
loc_82E4A088:
	// li r3,83
	ctx.r3.s64 = 83;
	// b 0x82e4a094
	goto loc_82E4A094;
loc_82E4A090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4A094:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4A09C"))) PPC_WEAK_FUNC(sub_82E4A09C);
PPC_FUNC_IMPL(__imp__sub_82E4A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A0A0"))) PPC_WEAK_FUNC(sub_82E4A0A0);
PPC_FUNC_IMPL(__imp__sub_82E4A0A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,30(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r10,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r10.u16);
	// b 0x82e4a0c4
	goto loc_82E4A0C4;
loc_82E4A0B4:
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82E4A0C4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e4a0b4
	if (!ctx.cr0.eq) goto loc_82E4A0B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A0D4"))) PPC_WEAK_FUNC(sub_82E4A0D4);
PPC_FUNC_IMPL(__imp__sub_82E4A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A0D8"))) PPC_WEAK_FUNC(sub_82E4A0D8);
PPC_FUNC_IMPL(__imp__sub_82E4A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E4A0E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a108
	if (ctx.cr0.eq) goto loc_82E4A108;
	// bl 0x82e39ea8
	ctx.lr = 0x82E4A104;
	sub_82E39EA8(ctx, base);
	// b 0x82e4a158
	goto loc_82E4A158;
loc_82E4A108:
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4736);
	// bl 0x82da41c0
	ctx.lr = 0x82E4A114;
	sub_82DA41C0(ctx, base);
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,11576
	ctx.r11.s64 = ctx.r11.s64 + 11576;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e4a138
	if (!ctx.cr6.eq) goto loc_82E4A138;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82e4a13c
	if (ctx.cr6.eq) goto loc_82E4A13C;
loc_82E4A138:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E4A13C:
	// lwz r3,-4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4736);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4a154
	if (!ctx.cr0.eq) goto loc_82E4A154;
	// bl 0x82da4200
	ctx.lr = 0x82E4A14C;
	sub_82DA4200(ctx, base);
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82e4a3e4
	goto loc_82E4A3E4;
loc_82E4A154:
	// bl 0x82da4200
	ctx.lr = 0x82E4A158;
	sub_82DA4200(ctx, base);
loc_82E4A158:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4a190
	if (ctx.cr6.eq) goto loc_82E4A190;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e406b8
	ctx.lr = 0x82E4A16C;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4a194
	if (ctx.cr6.eq) goto loc_82E4A194;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// b 0x82e4a194
	goto loc_82E4A194;
loc_82E4A190:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E4A194:
	// lwz r28,48(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r26,r24,48
	ctx.r26.s64 = ctx.r24.s64 + 48;
	// b 0x82e4a234
	goto loc_82E4A234;
loc_82E4A1A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// bne cr6,0x82e4a1b0
	if (!ctx.cr6.eq) goto loc_82E4A1B0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E4A1B0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4a1c0
	if (ctx.cr6.eq) goto loc_82E4A1C0;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4a230
	if (!ctx.cr6.eq) goto loc_82E4A230;
loc_82E4A1C0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4a214
	if (!ctx.cr6.gt) goto loc_82E4A214;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4A1D4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4a200
	if (ctx.cr6.eq) goto loc_82E4A200;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e44760
	ctx.lr = 0x82E4A1F0;
	sub_82E44760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stwx r25,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r25.u32);
loc_82E4A200:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4a1d4
	if (ctx.cr6.lt) goto loc_82E4A1D4;
loc_82E4A214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3ced8
	ctx.lr = 0x82E4A21C;
	sub_82E3CED8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a244
	if (!ctx.cr6.eq) goto loc_82E4A244;
loc_82E4A230:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82E4A234:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4a1a0
	if (!ctx.cr6.eq) goto loc_82E4A1A0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4a2c8
	if (ctx.cr6.eq) goto loc_82E4A2C8;
loc_82E4A244:
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a374
	if (ctx.cr0.eq) goto loc_82E4A374;
	// lwz r11,384(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4a2b4
	if (!ctx.cr6.gt) goto loc_82E4A2B4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4A264:
	// lwz r11,388(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a2a0
	if (ctx.cr0.eq) goto loc_82E4A2A0;
	// bl 0x82e413d0
	ctx.lr = 0x82E4A27C;
	sub_82E413D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,388(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e41c08
	ctx.lr = 0x82E4A294;
	sub_82E41C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E4A2A0:
	// lwz r11,384(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4a264
	if (ctx.cr6.lt) goto loc_82E4A264;
loc_82E4A2B4:
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,312(r4)
	PPC_STORE_U32(ctx.r4.u32 + 312, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82e4a374
	goto loc_82E4A374;
loc_82E4A2C8:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82e4a370
	if (ctx.cr6.eq) goto loc_82E4A370;
loc_82E4A2D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r31,r28,-8
	ctx.r31.s64 = ctx.r28.s64 + -8;
	// bne cr6,0x82e4a2e4
	if (!ctx.cr6.eq) goto loc_82E4A2E4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4A2E4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a360
	if (ctx.cr0.eq) goto loc_82E4A360;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4a354
	if (!ctx.cr6.gt) goto loc_82E4A354;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E4A304:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a340
	if (ctx.cr0.eq) goto loc_82E4A340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e413d0
	ctx.lr = 0x82E4A320;
	sub_82E413D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82e41c08
	ctx.lr = 0x82E4A338;
	sub_82E41C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
loc_82E4A340:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4a304
	if (ctx.cr6.lt) goto loc_82E4A304;
loc_82E4A354:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E4A360:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4a2d4
	if (!ctx.cr6.eq) goto loc_82E4A2D4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E4A370:
	// sth r25,30(r24)
	PPC_STORE_U16(ctx.r24.u32 + 30, ctx.r25.u16);
loc_82E4A374:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a3e0
	if (!ctx.cr6.eq) goto loc_82E4A3E0;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4a3e0
	if (ctx.cr0.eq) goto loc_82E4A3E0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4A38C:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4a3a0
	if (!ctx.cr0.eq) goto loc_82E4A3A0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E4A3A0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4a3e0
	if (ctx.cr6.eq) goto loc_82E4A3E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4a3b8
	if (!ctx.cr6.eq) goto loc_82E4A3B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82E4A3B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4A3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a3e4
	if (!ctx.cr0.eq) goto loc_82E4A3E4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4a38c
	goto loc_82E4A38C;
loc_82E4A3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4A3E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4A3EC"))) PPC_WEAK_FUNC(sub_82E4A3EC);
PPC_FUNC_IMPL(__imp__sub_82E4A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A3F0"))) PPC_WEAK_FUNC(sub_82E4A3F0);
PPC_FUNC_IMPL(__imp__sub_82E4A3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E4A3F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4A41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a69c
	if (!ctx.cr0.eq) goto loc_82E4A69C;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r26,r27,48
	ctx.r26.s64 = ctx.r27.s64 + 48;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82e4a4c0
	if (ctx.cr6.eq) goto loc_82E4A4C0;
loc_82E4A438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82e4a448
	if (!ctx.cr6.eq) goto loc_82E4A448;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E4A448:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e4a4a0
	if (!ctx.cr6.gt) goto loc_82E4A4A0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4A460:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4a48c
	if (ctx.cr6.eq) goto loc_82E4A48C;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e44760
	ctx.lr = 0x82E4A47C;
	sub_82E44760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a69c
	if (!ctx.cr0.eq) goto loc_82E4A69C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stwx r25,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r25.u32);
loc_82E4A48C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4a460
	if (ctx.cr6.lt) goto loc_82E4A460;
loc_82E4A4A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e44760
	ctx.lr = 0x82E4A4AC;
	sub_82E44760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4a69c
	if (!ctx.cr0.eq) goto loc_82E4A69C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4a438
	if (!ctx.cr6.eq) goto loc_82E4A438;
loc_82E4A4C0:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4a514
	if (ctx.cr0.eq) goto loc_82E4A514;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4A4D0:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4a4e4
	if (!ctx.cr0.eq) goto loc_82E4A4E4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E4A4E4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4a514
	if (ctx.cr6.eq) goto loc_82E4A514;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4a4fc
	if (!ctx.cr6.eq) goto loc_82E4A4FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82E4A4FC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e4a3f0
	ctx.lr = 0x82E4A508;
	sub_82E4A3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4a4d0
	if (ctx.cr0.eq) goto loc_82E4A4D0;
	// b 0x82e4a69c
	goto loc_82E4A69C;
loc_82E4A514:
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4a52c
	if (ctx.cr0.eq) goto loc_82E4A52C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e4a3f0
	ctx.lr = 0x82E4A528;
	sub_82E4A3F0(ctx, base);
	// stw r25,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r25.u32);
loc_82E4A52C:
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r30,r27,60
	ctx.r30.s64 = ctx.r27.s64 + 60;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e4a570
	if (ctx.cr6.eq) goto loc_82E4A570;
loc_82E4A53C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// bl 0x82e39b10
	ctx.lr = 0x82E4A564;
	sub_82E39B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4a53c
	if (!ctx.cr6.eq) goto loc_82E4A53C;
loc_82E4A570:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,23024
	ctx.r30.s64 = ctx.r11.s64 + 23024;
	// beq 0x82e4a59c
	if (ctx.cr0.eq) goto loc_82E4A59C;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,856
	ctx.r6.s64 = 856;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A59C;
	sub_82E394B8(ctx, base);
loc_82E4A59C:
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4a5bc
	if (ctx.cr0.eq) goto loc_82E4A5BC;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,861
	ctx.r6.s64 = 861;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A5BC;
	sub_82E394B8(ctx, base);
loc_82E4A5BC:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4a630
	if (ctx.cr6.eq) goto loc_82E4A630;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4a618
	if (!ctx.cr6.gt) goto loc_82E4A618;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4A5DC:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4a604
	if (ctx.cr6.eq) goto loc_82E4A604;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,870
	ctx.r6.s64 = 870;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A604;
	sub_82E394B8(ctx, base);
loc_82E4A604:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4a5dc
	if (ctx.cr6.lt) goto loc_82E4A5DC;
loc_82E4A618:
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,874
	ctx.r6.s64 = 874;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A630;
	sub_82E394B8(ctx, base);
loc_82E4A630:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4a678
	if (ctx.cr0.eq) goto loc_82E4A678;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,881
	ctx.r6.s64 = 881;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A678;
	sub_82E394B8(ctx, base);
loc_82E4A678:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a698
	if (ctx.cr0.eq) goto loc_82E4A698;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,886
	ctx.r6.s64 = 886;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e394b8
	ctx.lr = 0x82E4A698;
	sub_82E394B8(ctx, base);
loc_82E4A698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4A69C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4A6A4"))) PPC_WEAK_FUNC(sub_82E4A6A4);
PPC_FUNC_IMPL(__imp__sub_82E4A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A6A8"))) PPC_WEAK_FUNC(sub_82E4A6A8);
PPC_FUNC_IMPL(__imp__sub_82E4A6A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e4a6b8
	if (ctx.cr6.eq) goto loc_82E4A6B8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E4A6B8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4a6c8
	if (ctx.cr6.eq) goto loc_82E4A6C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E4A6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A6D0"))) PPC_WEAK_FUNC(sub_82E4A6D0);
PPC_FUNC_IMPL(__imp__sub_82E4A6D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a6e0
	if (!ctx.cr6.eq) goto loc_82E4A6E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4A6E0:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A6F0"))) PPC_WEAK_FUNC(sub_82E4A6F0);
PPC_FUNC_IMPL(__imp__sub_82E4A6F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a700
	if (!ctx.cr6.eq) goto loc_82E4A700;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4A700:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A710"))) PPC_WEAK_FUNC(sub_82E4A710);
PPC_FUNC_IMPL(__imp__sub_82E4A710) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a720
	if (!ctx.cr6.eq) goto loc_82E4A720;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4A720:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4a74c
	if (ctx.cr0.eq) goto loc_82E4A74C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e4a744
	goto loc_82E4A744;
loc_82E4A73C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4A744:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4a73c
	if (!ctx.cr6.eq) goto loc_82E4A73C;
loc_82E4A74C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A758"))) PPC_WEAK_FUNC(sub_82E4A758);
PPC_FUNC_IMPL(__imp__sub_82E4A758) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a768
	if (!ctx.cr6.eq) goto loc_82E4A768;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4A768:
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e4a780
	goto loc_82E4A780;
loc_82E4A778:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4A780:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4a778
	if (!ctx.cr6.eq) goto loc_82E4A778;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A794"))) PPC_WEAK_FUNC(sub_82E4A794);
PPC_FUNC_IMPL(__imp__sub_82E4A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A798"))) PPC_WEAK_FUNC(sub_82E4A798);
PPC_FUNC_IMPL(__imp__sub_82E4A798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E4A7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4a7e0
	if (ctx.cr6.eq) goto loc_82E4A7E0;
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// b 0x82e4a7d8
	goto loc_82E4A7D8;
loc_82E4A7C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82da4630
	ctx.lr = 0x82E4A7CC;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4a7ec
	if (ctx.cr0.eq) goto loc_82E4A7EC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4A7D8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4a7c0
	if (!ctx.cr6.eq) goto loc_82E4A7C0;
loc_82E4A7E0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4A7E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E4A7EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e4a804
	if (ctx.cr6.lt) goto loc_82E4A804;
	// beq cr6,0x82e4a814
	if (ctx.cr6.eq) goto loc_82E4A814;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82e4a80c
	if (!ctx.cr6.lt) goto loc_82E4A80C;
loc_82E4A804:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E4A80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4a7e4
	goto loc_82E4A7E4;
loc_82E4A814:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82e4a80c
	goto loc_82E4A80C;
}

__attribute__((alias("__imp__sub_82E4A820"))) PPC_WEAK_FUNC(sub_82E4A820);
PPC_FUNC_IMPL(__imp__sub_82E4A820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e4a898
	if (ctx.cr6.lt) goto loc_82E4A898;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e4a898
	if (ctx.cr6.eq) goto loc_82E4A898;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4a898
	if (ctx.cr6.eq) goto loc_82E4A898;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e4a85c
	if (!ctx.cr6.gt) goto loc_82E4A85C;
loc_82E4A84C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4a898
	if (ctx.cr6.eq) goto loc_82E4A898;
	// bdnz 0x82e4a84c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E4A84C;
loc_82E4A85C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4a898
	if (ctx.cr6.eq) goto loc_82E4A898;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82e4a87c
	if (ctx.cr6.lt) goto loc_82E4A87C;
	// beq cr6,0x82e4a88c
	if (ctx.cr6.eq) goto loc_82E4A88C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82e4a884
	if (!ctx.cr6.lt) goto loc_82E4A884;
loc_82E4A87C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E4A884:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E4A88C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82e4a884
	goto loc_82E4A884;
loc_82E4A898:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A8A0"))) PPC_WEAK_FUNC(sub_82E4A8A0);
PPC_FUNC_IMPL(__imp__sub_82E4A8A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4a8b0
	if (!ctx.cr6.eq) goto loc_82E4A8B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4A8B0:
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e4a8c8
	goto loc_82E4A8C8;
loc_82E4A8C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4A8C8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4a8c0
	if (!ctx.cr6.eq) goto loc_82E4A8C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4A8DC"))) PPC_WEAK_FUNC(sub_82E4A8DC);
PPC_FUNC_IMPL(__imp__sub_82E4A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4A8E0"))) PPC_WEAK_FUNC(sub_82E4A8E0);
PPC_FUNC_IMPL(__imp__sub_82E4A8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82E4A8E8;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x82e4a90c
	if (!ctx.cr6.eq) goto loc_82E4A90C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4b234
	goto loc_82E4B234;
loc_82E4A90C:
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// addi r16,r11,23024
	ctx.r16.s64 = ctx.r11.s64 + 23024;
	// beq cr6,0x82e4a98c
	if (ctx.cr6.eq) goto loc_82E4A98C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1361
	ctx.r6.s64 = 1361;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E4A94C;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4a960
	if (ctx.cr0.eq) goto loc_82E4A960;
	// bl 0x82e54178
	ctx.lr = 0x82E4A958;
	sub_82E54178(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// b 0x82e4a964
	goto loc_82E4A964;
loc_82E4A960:
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
loc_82E4A964:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82e4a974
	if (!ctx.cr6.eq) goto loc_82E4A974;
loc_82E4A96C:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4b234
	goto loc_82E4B234;
loc_82E4A974:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,420(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e541f8
	ctx.lr = 0x82E4A984;
	sub_82E541F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4a96c
	if (ctx.cr0.eq) goto loc_82E4A96C;
loc_82E4A98C:
	// li r6,1374
	ctx.r6.s64 = 1374;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,432
	ctx.r4.s64 = 432;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E4A9A0;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4a9b4
	if (ctx.cr0.eq) goto loc_82E4A9B4;
	// bl 0x82e427d8
	ctx.lr = 0x82E4A9AC;
	sub_82E427D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4a9b8
	goto loc_82E4A9B8;
loc_82E4A9B4:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82E4A9B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3bb40
	ctx.lr = 0x82E4A9C8;
	sub_82E3BB40(ctx, base);
	// stw r17,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r17.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r19.u32);
	// stw r19,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r19.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4aa18
	if (ctx.cr0.eq) goto loc_82E4AA18;
	// li r6,1398
	ctx.r6.s64 = 1398;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54370
	ctx.lr = 0x82E4AA08;
	sub_82E54370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bne 0x82e4aa1c
	if (!ctx.cr0.eq) goto loc_82E4AA1C;
	// b 0x82e4a96c
	goto loc_82E4A96C;
loc_82E4AA18:
	// stw r19,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r19.u32);
loc_82E4AA1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,92(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r10,r28,128
	ctx.r10.s64 = ctx.r28.s64 + 128;
	// addi r9,r28,156
	ctx.r9.s64 = ctx.r28.s64 + 156;
	// addi r22,r28,332
	ctx.r22.s64 = ctx.r28.s64 + 332;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r28,116
	ctx.r11.s64 = ctx.r28.s64 + 116;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,104(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f0,108(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r8,112(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lwz r8,152(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lfs f0,184(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f0,188(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f0,192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f0,196(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f0,200(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f0,204(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f0,240(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f0,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stw r19,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r19.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f0,252(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f0,256(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f0,288(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f0,292(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lhz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 320);
	// sth r11,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r11.u16);
	// lhz r11,322(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 322);
	// sth r11,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r11.u16);
	// lfs f0,300(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// addi r11,r28,208
	ctx.r11.s64 = ctx.r28.s64 + 208;
	// lfs f0,304(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f0,308(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// sth r19,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r19.u16);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stw r19,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r19.u32);
	// stw r19,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r19.u32);
	// stw r19,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r19.u32);
	// stw r19,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r19.u32);
	// stw r19,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r19.u32);
	// stw r19,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r19.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r11.u64);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// rlwinm r11,r11,0,20,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lhz r11,326(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 326);
	// sth r11,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r11.u16);
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// stw r19,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r19.u32);
	// stw r19,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r19.u32);
	// stw r19,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r19.u32);
	// stw r19,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r19.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82e4abd8
	goto loc_82E4ABD8;
loc_82E4ABD0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82E4ABD8:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82e4abd0
	if (!ctx.cr6.eq) goto loc_82E4ABD0;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82e4afb8
	if (!ctx.cr6.gt) goto loc_82E4AFB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82E4ABF4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82e4ac0c
	if (!ctx.cr6.eq) goto loc_82E4AC0C;
loc_82E4AC04:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// b 0x82e4ac2c
	goto loc_82E4AC2C;
loc_82E4AC0C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82e4ac28
	if (!ctx.cr6.gt) goto loc_82E4AC28;
loc_82E4AC14:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82e4ac04
	if (ctx.cr6.eq) goto loc_82E4AC04;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82e4ac14
	if (ctx.cr0.gt) goto loc_82E4AC14;
loc_82E4AC28:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82E4AC2C:
	// li r6,1481
	ctx.r6.s64 = 1481;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E4AC40;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ac54
	if (ctx.cr0.eq) goto loc_82E4AC54;
	// bl 0x82e426f8
	ctx.lr = 0x82E4AC4C;
	sub_82E426F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4ac58
	goto loc_82E4AC58;
loc_82E4AC54:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82E4AC58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3ae20
	ctx.lr = 0x82E4AC68;
	sub_82E3AE20(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r26,r24,84
	ctx.r26.s64 = ctx.r24.s64 + 84;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stfs f31,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stw r19,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r19.u32);
	// stw r19,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r19.u32);
	// stw r19,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r19.u32);
	// stw r19,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r19,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r19.u32);
	// stw r19,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r19.u32);
	// stw r19,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r19.u32);
	// stw r19,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r19.u32);
	// stw r19,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r19.u32);
	// stw r19,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r19.u32);
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// stw r19,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r19.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82e4acd4
	goto loc_82E4ACD4;
loc_82E4ACCC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82E4ACD4:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4accc
	if (!ctx.cr6.eq) goto loc_82E4ACCC;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82e4ade4
	if (!ctx.cr6.gt) goto loc_82E4ADE4;
loc_82E4ACE8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4ad00
	if (!ctx.cr6.eq) goto loc_82E4AD00;
loc_82E4ACF8:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x82e4ad20
	goto loc_82E4AD20;
loc_82E4AD00:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e4ad1c
	if (!ctx.cr6.gt) goto loc_82E4AD1C;
loc_82E4AD08:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82e4acf8
	if (ctx.cr6.eq) goto loc_82E4ACF8;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82e4ad08
	if (ctx.cr0.gt) goto loc_82E4AD08;
loc_82E4AD1C:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E4AD20:
	// li r6,1515
	ctx.r6.s64 = 1515;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E4AD34;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ad48
	if (ctx.cr0.eq) goto loc_82E4AD48;
	// bl 0x82e422b0
	ctx.lr = 0x82E4AD40;
	sub_82E422B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82e4ad4c
	goto loc_82E4AD4C;
loc_82E4AD48:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82E4AD4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82e3a780
	ctx.lr = 0x82E4AD60;
	sub_82E3A780(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e4ad90
	if (!ctx.cr6.eq) goto loc_82E4AD90;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
loc_82E4AD90:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4adbc
	if (ctx.cr0.eq) goto loc_82E4ADBC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e42408
	ctx.lr = 0x82E4ADB4;
	sub_82E42408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b234
	if (!ctx.cr0.eq) goto loc_82E4B234;
loc_82E4ADBC:
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// blt cr6,0x82e4ace8
	if (ctx.cr6.lt) goto loc_82E4ACE8;
loc_82E4ADE4:
	// addi r25,r24,96
	ctx.r25.s64 = ctx.r24.s64 + 96;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82e4adfc
	goto loc_82E4ADFC;
loc_82E4ADF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82E4ADFC:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e4adf4
	if (!ctx.cr6.eq) goto loc_82E4ADF4;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82e4af80
	if (!ctx.cr6.gt) goto loc_82E4AF80;
loc_82E4AE10:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e4ae28
	if (!ctx.cr6.eq) goto loc_82E4AE28;
loc_82E4AE20:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x82e4ae48
	goto loc_82E4AE48;
loc_82E4AE28:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82e4ae44
	if (!ctx.cr6.gt) goto loc_82E4AE44;
loc_82E4AE30:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e4ae20
	if (ctx.cr6.eq) goto loc_82E4AE20;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82e4ae30
	if (ctx.cr0.gt) goto loc_82E4AE30;
loc_82E4AE44:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E4AE48:
	// li r6,1560
	ctx.r6.s64 = 1560;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E4AE5C;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ae70
	if (ctx.cr0.eq) goto loc_82E4AE70;
	// bl 0x82e42178
	ctx.lr = 0x82E4AE68;
	sub_82E42178(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82e4ae74
	goto loc_82E4AE74;
loc_82E4AE70:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82E4AE74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82e3a2f0
	ctx.lr = 0x82E4AE88;
	sub_82E3A2F0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4aeb0
	if (ctx.cr0.eq) goto loc_82E4AEB0;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AEB0:
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4aec0
	if (ctx.cr0.eq) goto loc_82E4AEC0;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AEC0:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4aed0
	if (ctx.cr0.eq) goto loc_82E4AED0;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AED0:
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4aee0
	if (ctx.cr0.eq) goto loc_82E4AEE0;
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AEE0:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4aefc
	if (!ctx.cr0.eq) goto loc_82E4AEFC;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4aefc
	if (ctx.cr0.eq) goto loc_82E4AEFC;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AEFC:
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4af0c
	if (ctx.cr0.eq) goto loc_82E4AF0C;
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AF0C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e4af3c
	if (!ctx.cr6.eq) goto loc_82E4AF3C;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4af24
	if (ctx.cr0.eq) goto loc_82E4AF24;
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AF24:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e4af3c
	if (!ctx.cr6.eq) goto loc_82E4AF3C;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4af3c
	if (ctx.cr0.eq) goto loc_82E4AF3C;
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AF3C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4af4c
	if (ctx.cr0.eq) goto loc_82E4AF4C;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// b 0x82e4af58
	goto loc_82E4AF58;
loc_82E4AF4C:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4af58
	if (ctx.cr0.eq) goto loc_82E4AF58;
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
loc_82E4AF58:
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// blt cr6,0x82e4ae10
	if (ctx.cr6.lt) goto loc_82E4AE10;
loc_82E4AF80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3aef0
	ctx.lr = 0x82E4AF88;
	sub_82E3AEF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b234
	if (!ctx.cr0.eq) goto loc_82E4B234;
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// blt cr6,0x82e4abf4
	if (ctx.cr6.lt) goto loc_82E4ABF4;
loc_82E4AFB8:
	// addi r20,r28,344
	ctx.r20.s64 = ctx.r28.s64 + 344;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x82e4afd0
	goto loc_82E4AFD0;
loc_82E4AFC8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82E4AFD0:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82e4afc8
	if (!ctx.cr6.eq) goto loc_82E4AFC8;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82e4b13c
	if (!ctx.cr6.gt) goto loc_82E4B13C;
loc_82E4AFE4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82e4b01c
	if (ctx.cr6.eq) goto loc_82E4B01C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82e4b010
	if (!ctx.cr6.gt) goto loc_82E4B010;
loc_82E4AFFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82e4b01c
	if (ctx.cr6.eq) goto loc_82E4B01C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82e4affc
	if (ctx.cr0.gt) goto loc_82E4AFFC;
loc_82E4B010:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r21,r11,-4
	ctx.r21.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e4b020
	if (!ctx.cr6.eq) goto loc_82E4B020;
loc_82E4B01C:
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82E4B020:
	// li r6,1631
	ctx.r6.s64 = 1631;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E4B034;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4b048
	if (ctx.cr0.eq) goto loc_82E4B048;
	// bl 0x82e47680
	ctx.lr = 0x82E4B040;
	sub_82E47680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4b04c
	goto loc_82E4B04C;
loc_82E4B048:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82E4B04C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// bl 0x82e46be0
	ctx.lr = 0x82E4B060;
	sub_82E46BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b234
	if (!ctx.cr0.eq) goto loc_82E4B234;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4b090
	if (ctx.cr0.eq) goto loc_82E4B090;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82E4B090:
	// lwz r27,332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r23,r31,332
	ctx.r23.s64 = ctx.r31.s64 + 332;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// b 0x82e4b108
	goto loc_82E4B108;
loc_82E4B0A0:
	// lwz r29,96(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// addi r24,r27,96
	ctx.r24.s64 = ctx.r27.s64 + 96;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82e4b0f4
	if (ctx.cr6.eq) goto loc_82E4B0F4;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E4B0B4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B0CC;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b0e8
	if (!ctx.cr0.eq) goto loc_82E4B0E8;
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stwx r29,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r29.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82E4B0E8:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82e4b0b4
	if (!ctx.cr6.eq) goto loc_82E4B0B4;
loc_82E4B0F4:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82e4b104
	if (!ctx.cr6.eq) goto loc_82E4B104;
	// stw r30,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r30.u32);
loc_82E4B104:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82E4B108:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82e4b0a0
	if (!ctx.cr6.eq) goto loc_82E4B0A0;
	// addi r10,r31,344
	ctx.r10.s64 = ctx.r31.s64 + 344;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82e4afe4
	if (ctx.cr6.lt) goto loc_82E4AFE4;
loc_82E4B13C:
	// addi r26,r28,356
	ctx.r26.s64 = ctx.r28.s64 + 356;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82e4b154
	goto loc_82E4B154;
loc_82E4B14C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82E4B154:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4b14c
	if (!ctx.cr6.eq) goto loc_82E4B14C;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e4b218
	if (!ctx.cr6.gt) goto loc_82E4B218;
	// lis r24,-31890
	ctx.r24.s64 = -2089943040;
loc_82E4B16C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4b184
	if (!ctx.cr6.eq) goto loc_82E4B184;
loc_82E4B17C:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x82e4b1a4
	goto loc_82E4B1A4;
loc_82E4B184:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e4b1a0
	if (!ctx.cr6.gt) goto loc_82E4B1A0;
loc_82E4B18C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82e4b17c
	if (ctx.cr6.eq) goto loc_82E4B17C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82e4b18c
	if (ctx.cr0.gt) goto loc_82E4B18C;
loc_82E4B1A0:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E4B1A4:
	// lwz r11,-4716(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4716);
	// li r6,1688
	ctx.r6.s64 = 1688;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82e39460
	ctx.lr = 0x82E4B1BC;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4b1d0
	if (ctx.cr0.eq) goto loc_82E4B1D0;
	// bl 0x82e41148
	ctx.lr = 0x82E4B1C8;
	sub_82E41148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4b1d4
	goto loc_82E4B1D4;
loc_82E4B1D0:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82E4B1D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4a96c
	if (ctx.cr6.eq) goto loc_82E4A96C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e39a70
	ctx.lr = 0x82E4B1E8;
	sub_82E39A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b234
	if (!ctx.cr0.eq) goto loc_82E4B234;
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// blt cr6,0x82e4b16c
	if (ctx.cr6.lt) goto loc_82E4B16C;
loc_82E4B218:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r31,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r31.u32);
loc_82E4B234:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4B240"))) PPC_WEAK_FUNC(sub_82E4B240);
PPC_FUNC_IMPL(__imp__sub_82E4B240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E4B248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e4b298
	if (!ctx.cr6.eq) goto loc_82E4B298;
	// lwz r31,48(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// b 0x82e4b28c
	goto loc_82E4B28C;
loc_82E4B268:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e4b278
	if (!ctx.cr6.eq) goto loc_82E4B278;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4B278:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4b240
	ctx.lr = 0x82E4B280;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b300
	if (!ctx.cr0.eq) goto loc_82E4B300;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4B28C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4b268
	if (!ctx.cr6.eq) goto loc_82E4B268;
	// b 0x82e4b2fc
	goto loc_82E4B2FC;
loc_82E4B298:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4b2fc
	if (!ctx.cr6.gt) goto loc_82E4B2FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E4B2AC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4b2e8
	if (!ctx.cr6.eq) goto loc_82E4B2E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4a8e0
	ctx.lr = 0x82E4B2CC;
	sub_82E4A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b300
	if (!ctx.cr0.eq) goto loc_82E4B300;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82e42b30
	ctx.lr = 0x82E4B2E0;
	sub_82E42B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b300
	if (!ctx.cr0.eq) goto loc_82E4B300;
loc_82E4B2E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4b2ac
	if (ctx.cr6.lt) goto loc_82E4B2AC;
loc_82E4B2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4B300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4B308"))) PPC_WEAK_FUNC(sub_82E4B308);
PPC_FUNC_IMPL(__imp__sub_82E4B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E4B310;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// rlwinm r5,r17,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E4B338;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r16,r1,80
	ctx.r16.s64 = ctx.r1.s64 + 80;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E4B350;
	sub_82CB16F0(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// ble cr6,0x82e4ba6c
	if (!ctx.cr6.gt) goto loc_82E4BA6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r23,-31890
	ctx.r23.s64 = -2089943040;
	// addi r22,r11,22904
	ctx.r22.s64 = ctx.r11.s64 + 22904;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r15,39
	ctx.r15.s64 = 2555904;
	// addi r21,r11,23024
	ctx.r21.s64 = ctx.r11.s64 + 23024;
loc_82E4B378:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2993
	ctx.r6.s64 = 2993;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82e39460
	ctx.lr = 0x82E4B390;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4b3a4
	if (ctx.cr0.eq) goto loc_82E4B3A4;
	// bl 0x82e42260
	ctx.lr = 0x82E4B39C;
	sub_82E42260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4b3a8
	goto loc_82E4B3A8;
loc_82E4B3A4:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_82E4B3A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4ba78
	if (ctx.cr6.eq) goto loc_82E4BA78;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,3000
	ctx.r6.s64 = 3000;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82e39460
	ctx.lr = 0x82E4B3C8;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4b3dc
	if (ctx.cr0.eq) goto loc_82E4B3DC;
	// bl 0x82e42178
	ctx.lr = 0x82E4B3D4;
	sub_82E42178(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82e4b3e0
	goto loc_82E4B3E0;
loc_82E4B3DC:
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
loc_82E4B3E0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e4ba78
	if (ctx.cr6.eq) goto loc_82E4BA78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3a318
	ctx.lr = 0x82E4B3F4;
	sub_82E3A318(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e3a2f0
	ctx.lr = 0x82E4B400;
	sub_82E3A2F0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r18,r15
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r15.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// blt cr6,0x82e4b448
	if (ctx.cr6.lt) goto loc_82E4B448;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B43C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// b 0x82e4b55c
	goto loc_82E4B55C;
loc_82E4B448:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B450;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E4B468;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r4,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	ctx.r4.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r4,r10,r16
	PPC_STORE_U32(ctx.r10.u32 + ctx.r16.u32, ctx.r4.u32);
	// beq 0x82e4ba78
	if (ctx.cr0.eq) goto loc_82E4BA78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B490;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B4B0;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e4b554
	if (ctx.cr6.eq) goto loc_82E4B554;
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E4B4D0;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r26,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	ctx.r26.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82e4ba78
	if (ctx.cr0.eq) goto loc_82E4BA78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B4F4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82e4b544
	if (!ctx.cr6.gt) goto loc_82E4B544;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82E4B510:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B51C;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4b538
	if (ctx.cr0.eq) goto loc_82E4B538;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82e4b510
	if (ctx.cr6.lt) goto loc_82E4B510;
	// b 0x82e4b544
	goto loc_82E4B544;
loc_82E4B538:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82E4B544:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4b55c
	if (!ctx.cr0.eq) goto loc_82E4B55C;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e4ba70
	goto loc_82E4BA70;
loc_82E4B554:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82E4B55C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B574;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e4b780
	if (ctx.cr6.eq) goto loc_82E4B780;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,3087
	ctx.r6.s64 = 3087;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4B59C;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// beq 0x82e4ba78
	if (ctx.cr0.eq) goto loc_82E4BA78;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B5BC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// cmplw cr6,r18,r15
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82e4b780
	if (!ctx.cr6.lt) goto loc_82E4B780;
	// addi r4,r22,-96
	ctx.r4.s64 = ctx.r22.s64 + -96;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B5D8;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b614
	if (!ctx.cr0.eq) goto loc_82E4B614;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,3108
	ctx.r6.s64 = 3108;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4B5F8;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// addi r3,r22,-80
	ctx.r3.s64 = ctx.r22.s64 + -80;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394d0
	ctx.lr = 0x82E4B608;
	sub_82E394D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// beq 0x82e4ba78
	if (ctx.cr0.eq) goto loc_82E4BA78;
loc_82E4B614:
	// addi r4,r22,-132
	ctx.r4.s64 = ctx.r22.s64 + -132;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B624;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b638
	if (!ctx.cr0.eq) goto loc_82E4B638;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B638:
	// addi r4,r22,-124
	ctx.r4.s64 = ctx.r22.s64 + -124;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B644;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b658
	if (!ctx.cr0.eq) goto loc_82E4B658;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B658:
	// addi r4,r22,-116
	ctx.r4.s64 = ctx.r22.s64 + -116;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B664;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b678
	if (!ctx.cr0.eq) goto loc_82E4B678;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B678:
	// addi r4,r22,-12
	ctx.r4.s64 = ctx.r22.s64 + -12;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B684;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b698
	if (!ctx.cr0.eq) goto loc_82E4B698;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B698:
	// addi r4,r22,-112
	ctx.r4.s64 = ctx.r22.s64 + -112;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B6A4;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b6b8
	if (!ctx.cr0.eq) goto loc_82E4B6B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B6B8:
	// addi r4,r22,-80
	ctx.r4.s64 = ctx.r22.s64 + -80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B6C4;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b6d8
	if (!ctx.cr0.eq) goto loc_82E4B6D8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B6D8:
	// addi r4,r22,-60
	ctx.r4.s64 = ctx.r22.s64 + -60;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B6E4;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b6f8
	if (!ctx.cr0.eq) goto loc_82E4B6F8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B6F8:
	// addi r4,r22,-44
	ctx.r4.s64 = ctx.r22.s64 + -44;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B704;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b718
	if (!ctx.cr0.eq) goto loc_82E4B718;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B718:
	// addi r4,r22,-28
	ctx.r4.s64 = ctx.r22.s64 + -28;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B724;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b738
	if (!ctx.cr0.eq) goto loc_82E4B738;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82e4b754
	goto loc_82E4B754;
loc_82E4B738:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82da45b0
	ctx.lr = 0x82E4B744;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4b758
	if (!ctx.cr0.eq) goto loc_82E4B758;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
loc_82E4B754:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82E4B758:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4b780
	if (ctx.cr6.eq) goto loc_82E4B780;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,3166
	ctx.r6.s64 = 3166;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4B77C;
	sub_82E394B8(ctx, base);
	// stw r14,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r14.u32);
loc_82E4B780:
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B79C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lis r11,38
	ctx.r11.s64 = 2490368;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4b7e8
	if (ctx.cr6.lt) goto loc_82E4B7E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B7C8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82E4B7E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b7fc
	if (ctx.cr0.eq) goto loc_82E4B7FC;
	// stw r25,32(r20)
	PPC_STORE_U32(ctx.r20.u32 + 32, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B7FC:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b80c
	if (ctx.cr0.eq) goto loc_82E4B80C;
	// stw r25,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B80C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b81c
	if (ctx.cr0.eq) goto loc_82E4B81C;
	// stw r25,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B81C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b82c
	if (ctx.cr0.eq) goto loc_82E4B82C;
	// stw r25,64(r20)
	PPC_STORE_U32(ctx.r20.u32 + 64, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B82C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4b848
	if (!ctx.cr0.eq) goto loc_82E4B848;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4b848
	if (ctx.cr0.eq) goto loc_82E4B848;
	// stw r25,44(r20)
	PPC_STORE_U32(ctx.r20.u32 + 44, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B848:
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4b858
	if (ctx.cr0.eq) goto loc_82E4B858;
	// stw r25,48(r20)
	PPC_STORE_U32(ctx.r20.u32 + 48, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B858:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e4b888
	if (!ctx.cr6.eq) goto loc_82E4B888;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4b870
	if (ctx.cr0.eq) goto loc_82E4B870;
	// stw r25,52(r20)
	PPC_STORE_U32(ctx.r20.u32 + 52, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B870:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e4b888
	if (!ctx.cr6.eq) goto loc_82E4B888;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b888
	if (ctx.cr0.eq) goto loc_82E4B888;
	// stw r25,56(r20)
	PPC_STORE_U32(ctx.r20.u32 + 56, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B888:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4b898
	if (ctx.cr0.eq) goto loc_82E4B898;
	// stw r25,60(r20)
	PPC_STORE_U32(ctx.r20.u32 + 60, ctx.r25.u32);
	// b 0x82e4b8a4
	goto loc_82E4B8A4;
loc_82E4B898:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4b8a4
	if (ctx.cr0.eq) goto loc_82E4B8A4;
	// stw r25,68(r20)
	PPC_STORE_U32(ctx.r20.u32 + 68, ctx.r25.u32);
loc_82E4B8A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B8BC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4b9b0
	if (ctx.cr6.eq) goto loc_82E4B9B0;
loc_82E4B8D4:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,3227
	ctx.r6.s64 = 3227;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82e39460
	ctx.lr = 0x82E4B8EC;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4b900
	if (ctx.cr0.eq) goto loc_82E4B900;
	// bl 0x82e42148
	ctx.lr = 0x82E4B8F8;
	sub_82E42148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82e4b904
	goto loc_82E4B904;
loc_82E4B900:
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_82E4B904:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4ba78
	if (ctx.cr6.eq) goto loc_82E4BA78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B924;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B944;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lis r11,13
	ctx.r11.s64 = 851968;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4b97c
	if (ctx.cr6.lt) goto loc_82E4B97C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B970;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// b 0x82e4b984
	goto loc_82E4B984;
loc_82E4B97C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_82E4B984:
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4b8d4
	if (ctx.cr6.lt) goto loc_82E4B8D4;
loc_82E4B9B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4B9C8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// blt cr6,0x82e4ba40
	if (ctx.cr6.lt) goto loc_82E4BA40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4BA20;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ba70
	if (!ctx.cr0.eq) goto loc_82E4BA70;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82e4ba44
	goto loc_82E4BA44;
loc_82E4BA40:
	// stw r14,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r14.u32);
loc_82E4BA44:
	// addi r11,r20,96
	ctx.r11.s64 = ctx.r20.s64 + 96;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r17.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// blt cr6,0x82e4b378
	if (ctx.cr6.lt) goto loc_82E4B378;
loc_82E4BA6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4BA70:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E4BA78:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4ba70
	goto loc_82E4BA70;
}

__attribute__((alias("__imp__sub_82E4BA80"))) PPC_WEAK_FUNC(sub_82E4BA80);
PPC_FUNC_IMPL(__imp__sub_82E4BA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4BA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4bae8
	if (ctx.cr0.eq) goto loc_82E4BAE8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4BAA4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4bab8
	if (!ctx.cr0.eq) goto loc_82E4BAB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4BAB8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4bae8
	if (ctx.cr6.eq) goto loc_82E4BAE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4bad0
	if (!ctx.cr6.eq) goto loc_82E4BAD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4BAD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e4ba80
	ctx.lr = 0x82E4BAD8;
	sub_82E4BA80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4bb24
	if (!ctx.cr0.eq) goto loc_82E4BB24;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4baa4
	goto loc_82E4BAA4;
loc_82E4BAE8:
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// b 0x82e4bb18
	goto loc_82E4BB18;
loc_82E4BAF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e4bb04
	if (!ctx.cr6.eq) goto loc_82E4BB04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4BB04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e461b0
	ctx.lr = 0x82E4BB0C;
	sub_82E461B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4bb24
	if (!ctx.cr0.eq) goto loc_82E4BB24;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4BB18:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4baf4
	if (!ctx.cr6.eq) goto loc_82E4BAF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4BB24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4BB2C"))) PPC_WEAK_FUNC(sub_82E4BB2C);
PPC_FUNC_IMPL(__imp__sub_82E4BB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4BB30"))) PPC_WEAK_FUNC(sub_82E4BB30);
PPC_FUNC_IMPL(__imp__sub_82E4BB30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4bb40
	if (!ctx.cr6.eq) goto loc_82E4BB40;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4BB40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e4bb64
	if (ctx.cr6.eq) goto loc_82E4BB64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
loc_82E4BB64:
	// lha r11,28(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 28));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e4bb78
	if (!ctx.cr0.gt) goto loc_82E4BB78;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E4BB78:
	// lha r11,30(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 30));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e4bb90
	if (!ctx.cr0.gt) goto loc_82E4BB90;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E4BB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4BB98"))) PPC_WEAK_FUNC(sub_82E4BB98);
PPC_FUNC_IMPL(__imp__sub_82E4BB98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4BBA8"))) PPC_WEAK_FUNC(sub_82E4BBA8);
PPC_FUNC_IMPL(__imp__sub_82E4BBA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4bbb8
	if (!ctx.cr6.eq) goto loc_82E4BBB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4BBB8:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4BBC8"))) PPC_WEAK_FUNC(sub_82E4BBC8);
PPC_FUNC_IMPL(__imp__sub_82E4BBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r7,r11,23112
	ctx.r7.s64 = ctx.r11.s64 + 23112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 + 60;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4BC44"))) PPC_WEAK_FUNC(sub_82E4BC44);
PPC_FUNC_IMPL(__imp__sub_82E4BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4BC48"))) PPC_WEAK_FUNC(sub_82E4BC48);
PPC_FUNC_IMPL(__imp__sub_82E4BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4BC58"))) PPC_WEAK_FUNC(sub_82E4BC58);
PPC_FUNC_IMPL(__imp__sub_82E4BC58) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e4bc84
	if (ctx.cr0.eq) goto loc_82E4BC84;
	// bl 0x822990f0
	ctx.lr = 0x82E4BC84;
	sub_822990F0(ctx, base);
loc_82E4BC84:
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

__attribute__((alias("__imp__sub_82E4BC9C"))) PPC_WEAK_FUNC(sub_82E4BC9C);
PPC_FUNC_IMPL(__imp__sub_82E4BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4BCA0"))) PPC_WEAK_FUNC(sub_82E4BCA0);
PPC_FUNC_IMPL(__imp__sub_82E4BCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4BCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e4bd08
	if (!ctx.cr0.eq) goto loc_82E4BD08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,207
	ctx.r6.s64 = 207;
	// addi r5,r11,23024
	ctx.r5.s64 = ctx.r11.s64 + 23024;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,92
	ctx.r3.s64 = 92;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4BCE0;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4bcf0
	if (ctx.cr0.eq) goto loc_82E4BCF0;
	// bl 0x82e4bbc8
	ctx.lr = 0x82E4BCEC;
	sub_82E4BBC8(ctx, base);
	// b 0x82e4bcf4
	goto loc_82E4BCF4;
loc_82E4BCF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4BCF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// bne cr6,0x82e4bd84
	if (!ctx.cr6.eq) goto loc_82E4BD84;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4bde4
	goto loc_82E4BDE4;
loc_82E4BD08:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4bd84
	if (ctx.cr6.eq) goto loc_82E4BD84;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4BD18:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4bd2c
	if (!ctx.cr0.eq) goto loc_82E4BD2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4BD2C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4bd84
	if (ctx.cr6.eq) goto loc_82E4BD84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4bd44
	if (!ctx.cr6.eq) goto loc_82E4BD44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4BD44:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4bd74
	if (ctx.cr6.eq) goto loc_82E4BD74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4bd60
	if (!ctx.cr6.eq) goto loc_82E4BD60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4BD60:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82da4630
	ctx.lr = 0x82E4BD6C;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4bd7c
	if (ctx.cr0.eq) goto loc_82E4BD7C;
loc_82E4BD74:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4bd18
	goto loc_82E4BD18;
loc_82E4BD7C:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4bde4
	goto loc_82E4BDE4;
loc_82E4BD84:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4bd98
	if (!ctx.cr0.eq) goto loc_82E4BD98;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4BD98:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e4bdd0
	goto loc_82E4BDD0;
loc_82E4BDC8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4BDD0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e4bdc8
	if (!ctx.cr6.eq) goto loc_82E4BDC8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_82E4BDE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4BDEC"))) PPC_WEAK_FUNC(sub_82E4BDEC);
PPC_FUNC_IMPL(__imp__sub_82E4BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4BDF0"))) PPC_WEAK_FUNC(sub_82E4BDF0);
PPC_FUNC_IMPL(__imp__sub_82E4BDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E4BDF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4bef8
	if (!ctx.cr0.eq) goto loc_82E4BEF8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// beq cr6,0x82e4bf00
	if (ctx.cr6.eq) goto loc_82E4BF00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4b240
	ctx.lr = 0x82E4BE40;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4be58
	if (ctx.cr6.eq) goto loc_82E4BE58;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82e4be6c
	if (!ctx.cr6.eq) goto loc_82E4BE6C;
loc_82E4BE58:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e46648
	ctx.lr = 0x82E4BE64;
	sub_82E46648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
loc_82E4BE6C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4be88
	if (ctx.cr6.eq) goto loc_82E4BE88;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82e4beec
	if (!ctx.cr6.eq) goto loc_82E4BEEC;
loc_82E4BE88:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4bee0
	if (!ctx.cr6.gt) goto loc_82E4BEE0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E4BE9C:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4becc
	if (ctx.cr0.eq) goto loc_82E4BECC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e413d8
	ctx.lr = 0x82E4BEC4;
	sub_82E413D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
loc_82E4BECC:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4be9c
	if (ctx.cr6.lt) goto loc_82E4BE9C;
loc_82E4BEE0:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E4BEEC:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
loc_82E4BEF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E4BF00:
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 + 48;
	// b 0x82e4bf88
	goto loc_82E4BF88;
loc_82E4BF0C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// bne cr6,0x82e4bf1c
	if (!ctx.cr6.eq) goto loc_82E4BF1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4BF1C:
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// rlwinm. r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e4bf84
	if (!ctx.cr0.eq) goto loc_82E4BF84;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4bf40
	if (ctx.cr6.eq) goto loc_82E4BF40;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82e4bf84
	if (!ctx.cr6.eq) goto loc_82E4BF84;
loc_82E4BF40:
	// lwz r9,384(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e4bf84
	if (!ctx.cr6.gt) goto loc_82E4BF84;
	// lwz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
loc_82E4BF54:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm. r7,r7,0,22,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e4bf70
	if (ctx.cr0.eq) goto loc_82E4BF70;
	// lwz r7,312(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// oris r7,r7,8192
	ctx.r7.u64 = ctx.r7.u64 | 536870912;
	// stw r7,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r7.u32);
loc_82E4BF70:
	// lwz r7,384(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e4bf54
	if (ctx.cr6.lt) goto loc_82E4BF54;
loc_82E4BF84:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82E4BF88:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4bf0c
	if (!ctx.cr6.eq) goto loc_82E4BF0C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4bfa0
	if (ctx.cr6.eq) goto loc_82E4BFA0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82e4bff8
	if (!ctx.cr6.eq) goto loc_82E4BFF8;
loc_82E4BFA0:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4bff8
	if (!ctx.cr6.gt) goto loc_82E4BFF8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4BFB4:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4bfe4
	if (ctx.cr0.eq) goto loc_82E4BFE4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e413d8
	ctx.lr = 0x82E4BFDC;
	sub_82E413D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
loc_82E4BFE4:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4bfb4
	if (ctx.cr6.lt) goto loc_82E4BFB4;
loc_82E4BFF8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e4c070
	goto loc_82E4C070;
loc_82E4C000:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// bne cr6,0x82e4c010
	if (!ctx.cr6.eq) goto loc_82E4C010;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4C010:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4b240
	ctx.lr = 0x82E4C01C;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4c034
	if (ctx.cr6.eq) goto loc_82E4C034;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82e4c048
	if (!ctx.cr6.eq) goto loc_82E4C048;
loc_82E4C034:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e46648
	ctx.lr = 0x82E4C040;
	sub_82E46648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
loc_82E4C048:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4c06c
	if (!ctx.cr0.eq) goto loc_82E4C06C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e4c064
	if (ctx.cr6.eq) goto loc_82E4C064;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82e4c06c
	if (!ctx.cr6.eq) goto loc_82E4C06C;
loc_82E4C064:
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E4C06C:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E4C070:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4c000
	if (!ctx.cr6.eq) goto loc_82E4C000;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4beec
	if (ctx.cr0.eq) goto loc_82E4BEEC;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4C088:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4c09c
	if (!ctx.cr0.eq) goto loc_82E4C09C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C09C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4beec
	if (ctx.cr6.eq) goto loc_82E4BEEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c0b4
	if (!ctx.cr6.eq) goto loc_82E4C0B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4C0B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4C0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4beec
	if (!ctx.cr0.eq) goto loc_82E4BEEC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4c088
	goto loc_82E4C088;
}

__attribute__((alias("__imp__sub_82E4C0DC"))) PPC_WEAK_FUNC(sub_82E4C0DC);
PPC_FUNC_IMPL(__imp__sub_82E4C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4C0E0"))) PPC_WEAK_FUNC(sub_82E4C0E0);
PPC_FUNC_IMPL(__imp__sub_82E4C0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E4C0E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4c258
	if (ctx.cr6.eq) goto loc_82E4C258;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e4c258
	if (ctx.cr6.eq) goto loc_82E4C258;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c258
	if (ctx.cr6.eq) goto loc_82E4C258;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x82e4c13c
	goto loc_82E4C13C;
loc_82E4C12C:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e4c144
	if (ctx.cr6.eq) goto loc_82E4C144;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82E4C13C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4c12c
	if (!ctx.cr0.eq) goto loc_82E4C12C;
loc_82E4C144:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4C14C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4c160
	if (!ctx.cr0.eq) goto loc_82E4C160;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C160:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4c258
	if (ctx.cr6.eq) goto loc_82E4C258;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c178
	if (!ctx.cr6.eq) goto loc_82E4C178;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C178:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c1d0
	if (ctx.cr6.eq) goto loc_82E4C1D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c194
	if (!ctx.cr6.eq) goto loc_82E4C194;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C194:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E4C1A4;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c1d0
	if (!ctx.cr0.eq) goto loc_82E4C1D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c1bc
	if (!ctx.cr6.eq) goto loc_82E4C1BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C1BC:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c1d8
	if (ctx.cr6.eq) goto loc_82E4C1D8;
loc_82E4C1D0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4c14c
	goto loc_82E4C14C;
loc_82E4C1D8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c214
	if (ctx.cr6.eq) goto loc_82E4C214;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c1f4
	if (!ctx.cr6.eq) goto loc_82E4C1F4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4C1F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4C210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e4c25c
	goto loc_82E4C25C;
loc_82E4C214:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c224
	if (!ctx.cr6.eq) goto loc_82E4C224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4C224:
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq 0x82e4c250
	if (ctx.cr0.eq) goto loc_82E4C250;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4c240
	if (!ctx.cr6.eq) goto loc_82E4C240;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4C240:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e4b240
	ctx.lr = 0x82E4C248;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c25c
	if (!ctx.cr0.eq) goto loc_82E4C25C;
loc_82E4C250:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4c25c
	goto loc_82E4C25C;
loc_82E4C258:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4C25C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4C264"))) PPC_WEAK_FUNC(sub_82E4C264);
PPC_FUNC_IMPL(__imp__sub_82E4C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4C268"))) PPC_WEAK_FUNC(sub_82E4C268);
PPC_FUNC_IMPL(__imp__sub_82E4C268) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e4c28c
	if (!ctx.cr6.eq) goto loc_82E4C28C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4c340
	goto loc_82E4C340;
loc_82E4C28C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4c328
	if (ctx.cr0.eq) goto loc_82E4C328;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4c328
	if (ctx.cr6.eq) goto loc_82E4C328;
loc_82E4C2B4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e4c2b4
	if (!ctx.cr6.eq) goto loc_82E4C2B4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e4c328
	if (ctx.cr6.eq) goto loc_82E4C328;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4c300
	if (ctx.cr6.eq) goto loc_82E4C300;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e4c2f4
	if (!ctx.cr6.gt) goto loc_82E4C2F4;
loc_82E4C2E4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4c300
	if (ctx.cr6.eq) goto loc_82E4C300;
	// bdnz 0x82e4c2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E4C2E4;
loc_82E4C2F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82e4c304
	if (!ctx.cr6.eq) goto loc_82E4C304;
loc_82E4C300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4C304:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e4c328
	if (ctx.cr6.eq) goto loc_82E4C328;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c328
	if (ctx.cr0.eq) goto loc_82E4C328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e4b240
	ctx.lr = 0x82E4C320;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c340
	if (!ctx.cr0.eq) goto loc_82E4C340;
loc_82E4C328:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,37
	ctx.r3.s64 = ctx.r11.s64 + 37;
loc_82E4C340:
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

__attribute__((alias("__imp__sub_82E4C354"))) PPC_WEAK_FUNC(sub_82E4C354);
PPC_FUNC_IMPL(__imp__sub_82E4C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4C358"))) PPC_WEAK_FUNC(sub_82E4C358);
PPC_FUNC_IMPL(__imp__sub_82E4C358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E4C360;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4c830
	if (ctx.cr6.eq) goto loc_82E4C830;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e4c830
	if (ctx.cr6.eq) goto loc_82E4C830;
	// bl 0x82e4b240
	ctx.lr = 0x82E4C39C;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4bdf0
	ctx.lr = 0x82E4C3B8;
	sub_82E4BDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82e4c44c
	if (!ctx.cr6.gt) goto loc_82E4C44C;
loc_82E4C3DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4c3f0
	if (ctx.cr6.lt) goto loc_82E4C3F0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82E4C3F0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4C410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c438
	if (ctx.cr0.eq) goto loc_82E4C438;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4c3dc
	if (ctx.cr6.lt) goto loc_82E4C3DC;
	// b 0x82e4c44c
	goto loc_82E4C44C;
loc_82E4C438:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e4c66c
	if (!ctx.cr0.eq) goto loc_82E4C66C;
loc_82E4C44C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e4c478
	if (!ctx.cr6.eq) goto loc_82E4C478;
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e4c478
	if (!ctx.cr0.eq) goto loc_82E4C478;
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4c478
	if (!ctx.cr0.eq) goto loc_82E4C478;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82e4c660
	goto loc_82E4C660;
loc_82E4C478:
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4c490
	if (ctx.cr0.eq) goto loc_82E4C490;
loc_82E4C484:
	// li r3,81
	ctx.r3.s64 = 81;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// b 0x82e4c834
	goto loc_82E4C834;
loc_82E4C490:
	// rlwinm. r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4c4a0
	if (ctx.cr0.eq) goto loc_82E4C4A0;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x82e4c660
	goto loc_82E4C660;
loc_82E4C4A0:
	// rlwinm. r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c584
	if (ctx.cr0.eq) goto loc_82E4C584;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lfs f30,-16112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16112);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x82e4c534
	if (!ctx.cr6.gt) goto loc_82E4C534;
loc_82E4C4C4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c4e8
	if (ctx.cr0.eq) goto loc_82E4C4E8;
	// bl 0x82e432d0
	ctx.lr = 0x82E4C4E4;
	sub_82E432D0(ctx, base);
	// b 0x82e4c4ec
	goto loc_82E4C4EC;
loc_82E4C4E8:
	// bl 0x82e3ed10
	ctx.lr = 0x82E4C4EC;
	sub_82E3ED10(ctx, base);
loc_82E4C4EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e4c834
	if (!ctx.cr6.eq) goto loc_82E4C834;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82e4c508
	if (!ctx.cr6.lt) goto loc_82E4C508;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82E4C508:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e4c518
	if (!ctx.cr6.eq) goto loc_82E4C518;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x82e4c524
	goto loc_82E4C524;
loc_82E4C518:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82e4c524
	if (ctx.cr6.eq) goto loc_82E4C524;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82E4C524:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4c4c4
	if (ctx.cr6.lt) goto loc_82E4C4C4;
loc_82E4C534:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c660
	if (ctx.cr0.eq) goto loc_82E4C660;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e4c660
	if (!ctx.cr6.gt) goto loc_82E4C660;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82E4C558:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e4c570
	if (!ctx.cr6.lt) goto loc_82E4C570;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E4C570:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e4c558
	if (ctx.cr6.lt) goto loc_82E4C558;
	// b 0x82e4c660
	goto loc_82E4C660;
loc_82E4C584:
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4c624
	if (ctx.cr0.eq) goto loc_82E4C624;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lfs f31,-16112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16112);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82e4c5f4
	if (!ctx.cr6.gt) goto loc_82E4C5F4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82E4C5A0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c5c0
	if (ctx.cr0.eq) goto loc_82E4C5C0;
	// bl 0x82e432d0
	ctx.lr = 0x82E4C5BC;
	sub_82E432D0(ctx, base);
	// b 0x82e4c5c4
	goto loc_82E4C5C4;
loc_82E4C5C0:
	// bl 0x82e3ed10
	ctx.lr = 0x82E4C5C4;
	sub_82E3ED10(ctx, base);
loc_82E4C5C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e4c834
	if (!ctx.cr6.eq) goto loc_82E4C834;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e4c5e0
	if (!ctx.cr6.lt) goto loc_82E4C5E0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82E4C5E0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4c5a0
	if (ctx.cr6.lt) goto loc_82E4C5A0;
loc_82E4C5F4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e4c604
	if (!ctx.cr0.eq) goto loc_82E4C604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E4C604:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e432d0
	ctx.lr = 0x82E4C60C;
	sub_82E432D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82e4c660
	if (ctx.cr6.gt) goto loc_82E4C660;
	// b 0x82e4c484
	goto loc_82E4C484;
loc_82E4C624:
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ble cr6,0x82e4c660
	if (!ctx.cr6.gt) goto loc_82E4C660;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_82E4C638:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e4c650
	if (!ctx.cr6.lt) goto loc_82E4C650;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82E4C650:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e4c638
	if (ctx.cr6.lt) goto loc_82E4C638;
loc_82E4C660:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82E4C66C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4c6a4
	if (ctx.cr0.eq) goto loc_82E4C6A4;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4c6a4
	if (ctx.cr0.eq) goto loc_82E4C6A4;
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4C69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
loc_82E4C6A4:
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4C6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4c834
	if (!ctx.cr0.eq) goto loc_82E4C834;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r10,r30,116
	ctx.r10.s64 = ctx.r30.s64 + 116;
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r9,r30,128
	ctx.r9.s64 = ctx.r30.s64 + 128;
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f0,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f0,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lwz r8,312(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stfs f29,296(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r27,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r27.u32);
	// rlwinm r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	// stw r27,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r27.u32);
	// stw r27,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r27.u32);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82e3f0c0
	ctx.lr = 0x82E4C76C;
	sub_82E3F0C0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c7a8
	if (ctx.cr6.eq) goto loc_82E4C7A8;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_82E4C7A8:
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// b 0x82e4c804
	goto loc_82E4C804;
loc_82E4C7EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e4c7fc
	if (!ctx.cr6.eq) goto loc_82E4C7FC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82E4C7FC:
	// stw r27,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r27.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E4C804:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e4c7ec
	if (!ctx.cr6.eq) goto loc_82E4C7EC;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// bl 0x82e505c8
	ctx.lr = 0x82E4C820;
	sub_82E505C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82e4c834
	goto loc_82E4C834;
loc_82E4C830:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4C834:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4C848"))) PPC_WEAK_FUNC(sub_82E4C848);
PPC_FUNC_IMPL(__imp__sub_82E4C848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E4C850;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4464(r1)
	ea = -4464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4C880;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r23,-31890
	ctx.r23.s64 = -2089943040;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r22,r10,23024
	ctx.r22.s64 = ctx.r10.s64 + 23024;
	// beq 0x82e4c8c8
	if (ctx.cr0.eq) goto loc_82E4C8C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82E4C8B8;
	sub_82DA7E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// stw r24,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r24.u32);
	// b 0x82e4c90c
	goto loc_82E4C90C;
loc_82E4C8C8:
	// li r6,2036
	ctx.r6.s64 = 2036;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4C8DC;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r4.u32);
	// bne 0x82e4c8f0
	if (!ctx.cr0.eq) goto loc_82E4C8F0;
loc_82E4C8E8:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4e118
	goto loc_82E4E118;
loc_82E4C8F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4C904;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4C90C:
	// lis r11,23
	ctx.r11.s64 = 1507328;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4c9c4
	if (ctx.cr6.lt) goto loc_82E4C9C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4C930;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4c9c4
	if (ctx.cr6.eq) goto loc_82E4C9C4;
loc_82E4C948:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2050
	ctx.r6.s64 = 2050;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82e39460
	ctx.lr = 0x82E4C960;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4c974
	if (ctx.cr0.eq) goto loc_82E4C974;
	// bl 0x82e41148
	ctx.lr = 0x82E4C96C;
	sub_82E41148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4c978
	goto loc_82E4C978;
loc_82E4C974:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E4C978:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e39ba8
	ctx.lr = 0x82E4C990;
	sub_82E39BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r11,r17,60
	ctx.r11.s64 = ctx.r17.s64 + 60;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4c948
	if (ctx.cr6.lt) goto loc_82E4C948;
loc_82E4C9C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4C9DC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4C9FC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4ca38
	if (ctx.cr6.eq) goto loc_82E4CA38;
	// lwz r10,-4716(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2067
	ctx.r6.s64 = 2067;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r10,196
	ctx.r4.s64 = ctx.r10.s64 + 196;
	// mulli r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 * 92;
	// bl 0x82e39460
	ctx.lr = 0x82E4CA28;
	sub_82E39460(ctx, base);
	// stw r3,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82E4CA38:
	// lwz r30,72(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4cae0
	if (ctx.cr6.eq) goto loc_82E4CAE0;
loc_82E4CA48:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4ca5c
	if (ctx.cr6.eq) goto loc_82E4CA5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e4bbc8
	ctx.lr = 0x82E4CA5C;
	sub_82E4BBC8(ctx, base);
loc_82E4CA5C:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// sth r24,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r24.u16);
	// sth r24,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r24.u16);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// stw r24,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r24.u32);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// lwz r11,44(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 44);
	// stw r17,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r17.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82e4c848
	ctx.lr = 0x82E4CAB4;
	sub_82E4C848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e4bca0
	ctx.lr = 0x82E4CAC8;
	sub_82E4BCA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4ca48
	if (ctx.cr6.lt) goto loc_82E4CA48;
loc_82E4CAE0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4e114
	if (ctx.cr6.eq) goto loc_82E4E114;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r16,-32256
	ctx.r16.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// addi r20,r11,22716
	ctx.r20.s64 = ctx.r11.s64 + 22716;
	// lfs f31,-18332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18332);
	ctx.f31.f64 = double(temp.f32);
	// lis r15,18
	ctx.r15.s64 = 1179648;
	// lis r18,39
	ctx.r18.s64 = 2555904;
	// li r14,-1
	ctx.r14.s64 = -1;
loc_82E4CB14:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2096
	ctx.r6.s64 = 2096;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x82e39460
	ctx.lr = 0x82E4CB2C;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4cb40
	if (ctx.cr0.eq) goto loc_82E4CB40;
	// bl 0x82e427d8
	ctx.lr = 0x82E4CB38;
	sub_82E427D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82e4cb44
	goto loc_82E4CB44;
loc_82E4CB40:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82E4CB44:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e3bb40
	ctx.lr = 0x82E4CB54;
	sub_82E3BB40(ctx, base);
	// lwz r11,420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
	// lwz r3,-4716(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4CB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r3.u32);
	// stw r17,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r17.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E4CBA4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4cbdc
	if (ctx.cr0.eq) goto loc_82E4CBDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82E4CBCC;
	sub_82DA7E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// stw r24,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r24.u32);
	// b 0x82e4cc18
	goto loc_82E4CC18;
loc_82E4CBDC:
	// li r6,2119
	ctx.r6.s64 = 2119;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4CBF0;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r4.u32);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CC10;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4CC18:
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4cc34
	if (ctx.cr0.eq) goto loc_82E4CC34;
	// bl 0x82da4420
	ctx.lr = 0x82E4CC28;
	sub_82DA4420(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82e4cc38
	goto loc_82E4CC38;
loc_82E4CC34:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82E4CC38:
	// lwz r11,420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,92
	ctx.r4.s64 = ctx.r27.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E4CC5C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,100
	ctx.r4.s64 = ctx.r27.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CC7C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,27
	ctx.r11.s64 = 1769472;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4ccb0
	if (ctx.cr6.lt) goto loc_82E4CCB0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,104
	ctx.r4.s64 = ctx.r27.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CCA8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4CCB0:
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4ccfc
	if (ctx.cr6.lt) goto loc_82E4CCFC;
	// addi r31,r27,108
	ctx.r31.s64 = ctx.r27.s64 + 108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CCD8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e4ccfc
	if (!ctx.cr6.lt) goto loc_82E4CCFC;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82E4CCFC:
	// lis r11,10
	ctx.r11.s64 = 655360;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4cd2c
	if (ctx.cr6.lt) goto loc_82E4CD2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CD20;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// b 0x82e4cd34
	goto loc_82E4CD34;
loc_82E4CD2C:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_82E4CD34:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CD4C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x82e4cd68
	if (!ctx.cr6.lt) goto loc_82E4CD68;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
loc_82E4CD68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e3c070
	ctx.lr = 0x82E4CD70;
	sub_82E3C070(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r28,r27,180
	ctx.r28.s64 = ctx.r27.s64 + 180;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CD94;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,184
	ctx.r4.s64 = ctx.r27.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CDB4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,188
	ctx.r4.s64 = ctx.r27.s64 + 188;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CDD4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x82e4ce1c
	if (ctx.cr6.lt) goto loc_82E4CE1C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CE00;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// b 0x82e4ce78
	goto loc_82E4CE78;
loc_82E4CE1C:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CE24;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4ce78
	if (ctx.cr6.eq) goto loc_82E4CE78;
	// lwz r10,-4716(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// addi r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 + 56;
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// stw r10,368(r27)
	PPC_STORE_U32(ctx.r27.u32 + 368, ctx.r10.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,368(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r27,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r27.u32);
loc_82E4CE78:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d1c4
	if (ctx.cr6.lt) goto loc_82E4D1C4;
	// addi r29,r27,208
	ctx.r29.s64 = ctx.r27.s64 + 208;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82E4CE90:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CEA8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82e4ce90
	if (ctx.cr6.lt) goto loc_82E4CE90;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4cef8
	if (ctx.cr0.eq) goto loc_82E4CEF8;
	// addi r4,r20,204
	ctx.r4.s64 = ctx.r20.s64 + 204;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4778
	ctx.lr = 0x82E4CEDC;
	sub_82DA4778(ctx, base);
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4cef0
	if (ctx.cr0.eq) goto loc_82E4CEF0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82e4cef4
	goto loc_82E4CEF4;
loc_82E4CEF0:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82E4CEF4:
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
loc_82E4CEF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,192
	ctx.r4.s64 = ctx.r27.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CF10;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,196
	ctx.r4.s64 = ctx.r27.s64 + 196;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CF30;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,200
	ctx.r4.s64 = ctx.r27.s64 + 200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CF50;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,11
	ctx.r11.s64 = 720896;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d1b0
	if (ctx.cr6.lt) goto loc_82E4D1B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4CF7C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,35
	ctx.r11.s64 = 2293760;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82e4cfa4
	if (!ctx.cr6.lt) goto loc_82E4CFA4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82e4cfa4
	if (!ctx.cr6.gt) goto loc_82E4CFA4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82E4CFA4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e4cff4
	if (ctx.cr6.lt) goto loc_82E4CFF4;
	// beq cr6,0x82e4cff4
	if (ctx.cr6.eq) goto loc_82E4CFF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82e4cfe8
	if (ctx.cr6.lt) goto loc_82E4CFE8;
	// beq cr6,0x82e4cfdc
	if (ctx.cr6.eq) goto loc_82E4CFDC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// blt cr6,0x82e4cfd4
	if (ctx.cr6.lt) goto loc_82E4CFD4;
	// bne cr6,0x82e4cff8
	if (!ctx.cr6.eq) goto loc_82E4CFF8;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// b 0x82e4cffc
	goto loc_82E4CFFC;
loc_82E4CFD4:
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// b 0x82e4cffc
	goto loc_82E4CFFC;
loc_82E4CFDC:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82e4cffc
	goto loc_82E4CFFC;
loc_82E4CFE8:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// b 0x82e4cffc
	goto loc_82E4CFFC;
loc_82E4CFF4:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
loc_82E4CFF8:
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82E4CFFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,204
	ctx.r4.s64 = ctx.r27.s64 + 204;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D018;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,28
	ctx.r11.s64 = 1835008;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d050
	if (ctx.cr6.lt) goto loc_82E4D050;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,240
	ctx.r4.s64 = ctx.r27.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D044;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// b 0x82e4d058
	goto loc_82E4D058;
loc_82E4D050:
	// lfs f0,6048(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 240, temp.u32);
loc_82E4D058:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,244
	ctx.r4.s64 = ctx.r27.s64 + 244;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D070;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82e4d1e8
	if (ctx.cr6.lt) goto loc_82E4D1E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,288
	ctx.r4.s64 = ctx.r27.s64 + 288;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D098;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,19
	ctx.r11.s64 = 1245184;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d1e8
	if (ctx.cr6.lt) goto loc_82E4D1E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D0C4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,320(r27)
	PPC_STORE_U16(ctx.r27.u32 + 320, ctx.r11.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E4D0EC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r10,22
	ctx.r10.s64 = 1441792;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// sth r11,322(r27)
	PPC_STORE_U16(ctx.r27.u32 + 322, ctx.r11.u16);
	// blt cr6,0x82e4d1e8
	if (ctx.cr6.lt) goto loc_82E4D1E8;
	// lis r11,43
	ctx.r11.s64 = 2818048;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d134
	if (ctx.cr6.lt) goto loc_82E4D134;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,300
	ctx.r4.s64 = ctx.r27.s64 + 300;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D12C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D134:
	// lis r11,45
	ctx.r11.s64 = 2949120;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d160
	if (ctx.cr6.lt) goto loc_82E4D160;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,304
	ctx.r4.s64 = ctx.r27.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D158;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D160:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,292
	ctx.r4.s64 = ctx.r27.s64 + 292;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D178;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,40
	ctx.r11.s64 = 2621440;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d1e8
	if (ctx.cr6.lt) goto loc_82E4D1E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,152
	ctx.r4.s64 = ctx.r27.s64 + 152;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D1A4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// b 0x82e4d1e8
	goto loc_82E4D1E8;
loc_82E4D1B0:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// lfs f0,6140(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// b 0x82e4d1e4
	goto loc_82E4D1E4;
loc_82E4D1C4:
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// addi r4,r20,204
	ctx.r4.s64 = ctx.r20.s64 + 204;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82cb1160
	ctx.lr = 0x82E4D1D4;
	sub_82CB1160(ctx, base);
	// lfs f0,6140(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,192(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 192, temp.u32);
	// stfs f31,196(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 196, temp.u32);
	// stfs f0,200(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 200, temp.u32);
loc_82E4D1E4:
	// stfs f0,204(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 204, temp.u32);
loc_82E4D1E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D200;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4d94c
	if (ctx.cr6.eq) goto loc_82E4D94C;
loc_82E4D218:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2334
	ctx.r6.s64 = 2334;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82e39460
	ctx.lr = 0x82E4D230;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4d244
	if (ctx.cr0.eq) goto loc_82E4D244;
	// bl 0x82e426f8
	ctx.lr = 0x82E4D23C;
	sub_82E426F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82e4d248
	goto loc_82E4D248;
loc_82E4D244:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82E4D248:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e3ae20
	ctx.lr = 0x82E4D258;
	sub_82E3AE20(ctx, base);
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// lwz r11,420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
	// bge cr6,0x82e4d2a8
	if (!ctx.cr6.lt) goto loc_82E4D2A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D288;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82E4D2A0;
	sub_82DA7E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D2A8:
	// lis r31,29
	ctx.r31.s64 = 1900544;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x82e4d2dc
	if (ctx.cr6.lt) goto loc_82E4D2DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D2CC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lhz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// b 0x82e4d304
	goto loc_82E4D304;
loc_82E4D2DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D2E8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4d308
	if (ctx.cr6.eq) goto loc_82E4D308;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82E4D304:
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82E4D308:
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d340
	if (ctx.cr6.lt) goto loc_82E4D340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D32C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lha r11,100(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x82e4d344
	goto loc_82E4D344;
loc_82E4D340:
	// stw r14,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r14.u32);
loc_82E4D344:
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x82e4d378
	if (ctx.cr6.lt) goto loc_82E4D378;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D364;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// b 0x82e4d3f8
	goto loc_82E4D3F8;
loc_82E4D378:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D384;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82e4d3d0
	if (!ctx.cr6.gt) goto loc_82E4D3D0;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2402
	ctx.r6.s64 = 2402;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4D3AC;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r4.u32);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D3CC;
	sub_82DA76A0(ctx, base);
	// b 0x82e4d3f0
	goto loc_82E4D3F0;
loc_82E4D3D0:
	// stw r24,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e4d3f8
	if (!ctx.cr6.eq) goto loc_82E4D3F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82E4D3F0;
	sub_82DA7E70(ctx, base);
loc_82E4D3F0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D3F8:
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x82e4d454
	if (ctx.cr6.lt) goto loc_82E4D454;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D418;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E4D440;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82e4d488
	goto loc_82E4D488;
loc_82E4D454:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D460;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D480;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D488:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4d8f0
	if (ctx.cr6.eq) goto loc_82E4D8F0;
loc_82E4D498:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2440
	ctx.r6.s64 = 2440;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82e39460
	ctx.lr = 0x82E4D4B0;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4d4c4
	if (ctx.cr0.eq) goto loc_82E4D4C4;
	// bl 0x82e42610
	ctx.lr = 0x82E4D4BC;
	sub_82E42610(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4d4c8
	goto loc_82E4D4C8;
loc_82E4D4C4:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E4D4C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2446
	ctx.r6.s64 = 2446;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82e39460
	ctx.lr = 0x82E4D4E8;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4d4fc
	if (ctx.cr0.eq) goto loc_82E4D4FC;
	// bl 0x82e422b0
	ctx.lr = 0x82E4D4F4;
	sub_82E422B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4d500
	goto loc_82E4D500;
loc_82E4D4FC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E4D500:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3aaa8
	ctx.lr = 0x82E4D510;
	sub_82E3AAA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3a780
	ctx.lr = 0x82E4D51C;
	sub_82E3A780(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
	// blt cr6,0x82e4d568
	if (ctx.cr6.lt) goto loc_82E4D568;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D554;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82e4d5bc
	goto loc_82E4D5BC;
loc_82E4D568:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D574;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2474
	ctx.r6.s64 = 2474;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4D594;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D5B4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D5BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D5D4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D5F4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d650
	if (ctx.cr6.lt) goto loc_82E4D650;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D624;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82E4D650:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D668;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4d688
	if (ctx.cr0.eq) goto loc_82E4D688;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82e4d6a0
	goto loc_82E4D6A0;
loc_82E4D688:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// beq 0x82e4d69c
	if (ctx.cr0.eq) goto loc_82E4D69C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82e4d6a0
	goto loc_82E4D6A0;
loc_82E4D69C:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82E4D6A0:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lis r11,49
	ctx.r11.s64 = 3211264;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d6c8
	if (ctx.cr6.lt) goto loc_82E4D6C8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_82E4D6C8:
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d700
	if (ctx.cr6.lt) goto loc_82E4D700;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D6EC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82e4d704
	goto loc_82E4D704;
loc_82E4D700:
	// stw r14,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r14.u32);
loc_82E4D704:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D71C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r6,1
	ctx.r6.s64 = 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r5,4
	ctx.r5.s64 = 4;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E4D758;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d78c
	if (ctx.cr6.lt) goto loc_82E4D78C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D784;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D78C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D7A4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D7C4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D7E4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D804;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D824;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D844;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d8a0
	if (ctx.cr6.lt) goto loc_82E4D8A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D878;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D898;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4D8A0:
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 + 84;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d498
	if (ctx.cr6.lt) goto loc_82E4D498;
loc_82E4D8F0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e4b308
	ctx.lr = 0x82E4D908;
	sub_82E4B308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e3aef0
	ctx.lr = 0x82E4D918;
	sub_82E3AEF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r11,r27,332
	ctx.r11.s64 = ctx.r27.s64 + 332;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d218
	if (ctx.cr6.lt) goto loc_82E4D218;
loc_82E4D94C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4D964;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4df24
	if (ctx.cr6.eq) goto loc_82E4DF24;
loc_82E4D97C:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2592
	ctx.r6.s64 = 2592;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82e39460
	ctx.lr = 0x82E4D994;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4d9a8
	if (ctx.cr0.eq) goto loc_82E4D9A8;
	// bl 0x82e479a8
	ctx.lr = 0x82E4D9A0;
	sub_82E479A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4d9ac
	goto loc_82E4D9AC;
loc_82E4D9A8:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E4D9AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2599
	ctx.r6.s64 = 2599;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82e39460
	ctx.lr = 0x82E4D9CC;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4d9e0
	if (ctx.cr0.eq) goto loc_82E4D9E0;
	// bl 0x82e47680
	ctx.lr = 0x82E4D9D8;
	sub_82E47680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4d9e4
	goto loc_82E4D9E4;
loc_82E4D9E0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E4D9E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e47168
	ctx.lr = 0x82E4D9F8;
	sub_82E47168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e46be0
	ctx.lr = 0x82E4DA04;
	sub_82E46BE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E4DA34;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2621
	ctx.r6.s64 = 2621;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4DA54;
	sub_82E39480(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DA80;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82e4dad0
	if (!ctx.cr6.lt) goto loc_82E4DAD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DAA8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DAC8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
loc_82E4DAD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DAEC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DB10;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DB34;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x82e4db70
	if (ctx.cr6.lt) goto loc_82E4DB70;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DB64;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// b 0x82e4dc14
	goto loc_82E4DC14;
loc_82E4DB70:
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DB78;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4db9c
	if (ctx.cr6.eq) goto loc_82E4DB9C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82E4DB9C:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4dc14
	if (ctx.cr6.lt) goto loc_82E4DC14;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DBC0;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e4dbe4
	if (!ctx.cr6.eq) goto loc_82E4DBE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82e4dc10
	goto loc_82E4DC10;
loc_82E4DBE4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e4dbfc
	if (!ctx.cr6.eq) goto loc_82E4DBFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82e4dc10
	goto loc_82E4DC10;
loc_82E4DBFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e4dc14
	if (!ctx.cr6.eq) goto loc_82E4DC14;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_82E4DC10:
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82E4DC14:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da45b0
	ctx.lr = 0x82E4DC24;
	sub_82DA45B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4dc3c
	if (!ctx.cr0.eq) goto loc_82E4DC3C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82e4dc80
	goto loc_82E4DC80;
loc_82E4DC3C:
	// addi r4,r20,12
	ctx.r4.s64 = ctx.r20.s64 + 12;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da45b0
	ctx.lr = 0x82E4DC48;
	sub_82DA45B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4dc60
	if (!ctx.cr0.eq) goto loc_82E4DC60;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x82e4dc80
	goto loc_82E4DC80;
loc_82E4DC60:
	// addi r4,r20,32
	ctx.r4.s64 = ctx.r20.s64 + 32;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da45b0
	ctx.lr = 0x82E4DC6C;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4dc84
	if (!ctx.cr0.eq) goto loc_82E4DC84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
loc_82E4DC80:
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82E4DC84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82e4dcb4
	if (ctx.cr6.lt) goto loc_82E4DCB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DCA8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// b 0x82e4dcbc
	goto loc_82E4DCBC;
loc_82E4DCB4:
	// lfs f0,6048(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_82E4DCBC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DCD8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4dd14
	if (ctx.cr0.eq) goto loc_82E4DD14;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2762
	ctx.r6.s64 = 2762;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e39480
	ctx.lr = 0x82E4DD08;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// beq 0x82e4c8e8
	if (ctx.cr0.eq) goto loc_82E4C8E8;
loc_82E4DD14:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// blt cr6,0x82e4de14
	if (ctx.cr6.lt) goto loc_82E4DE14;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DD3C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4de1c
	if (ctx.cr0.eq) goto loc_82E4DE1C;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2784
	ctx.r6.s64 = 2784;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e39460
	ctx.lr = 0x82E4DD6C;
	sub_82E39460(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4de20
	if (!ctx.cr6.gt) goto loc_82E4DE20;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E4DD98:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DDB8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,6140(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfsx f13,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82e4dddc
	if (!ctx.cr6.gt) goto loc_82E4DDDC;
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_82E4DDDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,6048(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfsx f13,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e4ddf8
	if (!ctx.cr6.lt) goto loc_82E4DDF8;
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_82E4DDF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4dd98
	if (ctx.cr6.lt) goto loc_82E4DD98;
	// b 0x82e4de20
	goto loc_82E4DE20;
loc_82E4DE14:
	// stw r24,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r24.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82E4DE1C:
	// stw r24,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r24.u32);
loc_82E4DE20:
	// addi r10,r27,344
	ctx.r10.s64 = ctx.r27.s64 + 344;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4de58
	if (ctx.cr0.eq) goto loc_82E4DE58;
	// stw r31,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r31.u32);
loc_82E4DE58:
	// lwz r30,332(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 332);
	// addi r28,r27,332
	ctx.r28.s64 = ctx.r27.s64 + 332;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x82e4df0c
	goto loc_82E4DF0C;
loc_82E4DE68:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r8,r30,96
	ctx.r8.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e4deb4
	if (ctx.cr6.eq) goto loc_82E4DEB4;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E4DE7C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4dea8
	if (!ctx.cr6.eq) goto loc_82E4DEA8;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r7,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82E4DEA8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e4de7c
	if (!ctx.cr6.eq) goto loc_82E4DE7C;
loc_82E4DEB4:
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x82e4decc
	if (ctx.cr6.lt) goto loc_82E4DECC;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4df08
	if (!ctx.cr6.eq) goto loc_82E4DF08;
	// b 0x82e4df04
	goto loc_82E4DF04;
loc_82E4DECC:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4df08
	if (ctx.cr0.eq) goto loc_82E4DF08;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da45b0
	ctx.lr = 0x82E4DEE4;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4df08
	if (!ctx.cr0.eq) goto loc_82E4DF08;
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2863
	ctx.r6.s64 = 2863;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4DF04;
	sub_82E394B8(ctx, base);
loc_82E4DF04:
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
loc_82E4DF08:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E4DF0C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e4de68
	if (!ctx.cr6.eq) goto loc_82E4DE68;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4d97c
	if (ctx.cr6.lt) goto loc_82E4D97C;
loc_82E4DF24:
	// lwz r11,332(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 332);
	// addi r10,r27,332
	ctx.r10.s64 = ctx.r27.s64 + 332;
	// b 0x82e4df44
	goto loc_82E4DF44;
loc_82E4DF30:
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// bne cr6,0x82e4df40
	if (!ctx.cr6.eq) goto loc_82E4DF40;
	// stw r24,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r24.u32);
loc_82E4DF40:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E4DF44:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4df30
	if (!ctx.cr6.eq) goto loc_82E4DF30;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4DF64;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4dff8
	if (ctx.cr6.eq) goto loc_82E4DFF8;
loc_82E4DF7C:
	// lwz r11,-4716(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// li r6,2897
	ctx.r6.s64 = 2897;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82e39460
	ctx.lr = 0x82E4DF94;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4dfa8
	if (ctx.cr0.eq) goto loc_82E4DFA8;
	// bl 0x82e41148
	ctx.lr = 0x82E4DFA0;
	sub_82E41148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4dfac
	goto loc_82E4DFAC;
loc_82E4DFA8:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E4DFAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4c8e8
	if (ctx.cr6.eq) goto loc_82E4C8E8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e39ba8
	ctx.lr = 0x82E4DFC4;
	sub_82E39BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r11,r27,356
	ctx.r11.s64 = ctx.r27.s64 + 356;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4df7c
	if (ctx.cr6.lt) goto loc_82E4DF7C;
loc_82E4DFF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4E010;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4e0e8
	if (ctx.cr6.eq) goto loc_82E4E0E8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E4E028:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4E040;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,4096
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4096, ctx.xer);
	// bge cr6,0x82e4e124
	if (!ctx.cr6.lt) goto loc_82E4E124;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4E068;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// lwz r11,368(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// addi r31,r27,368
	ctx.r31.s64 = ctx.r27.s64 + 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4e0d8
	if (!ctx.cr6.eq) goto loc_82E4E0D8;
	// lwz r3,-4716(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4716);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4E09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e118
	if (!ctx.cr0.eq) goto loc_82E4E118;
	// addi r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 + 56;
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r27,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r27.u32);
loc_82E4E0D8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4e028
	if (ctx.cr6.lt) goto loc_82E4E028;
loc_82E4E0E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e49ca8
	ctx.lr = 0x82E4E0F4;
	sub_82E49CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e12c
	if (!ctx.cr0.eq) goto loc_82E4E12C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// blt cr6,0x82e4cb14
	if (ctx.cr6.lt) goto loc_82E4CB14;
loc_82E4E114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4E118:
	// addi r1,r1,4464
	ctx.r1.s64 = ctx.r1.s64 + 4464;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E4E124:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82e4e118
	goto loc_82E4E118;
loc_82E4E12C:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4e118
	goto loc_82E4E118;
}

__attribute__((alias("__imp__sub_82E4E134"))) PPC_WEAK_FUNC(sub_82E4E134);
PPC_FUNC_IMPL(__imp__sub_82E4E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E138"))) PPC_WEAK_FUNC(sub_82E4E138);
PPC_FUNC_IMPL(__imp__sub_82E4E138) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e4bdf0
	sub_82E4BDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4E140"))) PPC_WEAK_FUNC(sub_82E4E140);
PPC_FUNC_IMPL(__imp__sub_82E4E140) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4e1c8
	if (ctx.cr6.eq) goto loc_82E4E1C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4e1c8
	if (ctx.cr6.eq) goto loc_82E4E1C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e499c0
	ctx.lr = 0x82E4E180;
	sub_82E499C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e1cc
	if (!ctx.cr0.eq) goto loc_82E4E1CC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4e1b4
	if (ctx.cr0.eq) goto loc_82E4E1B4;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// bl 0x82e505c8
	ctx.lr = 0x82E4E1A4;
	sub_82E505C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e4e1cc
	goto loc_82E4E1CC;
loc_82E4E1B4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e4c358
	ctx.lr = 0x82E4E1C4;
	sub_82E4C358(ctx, base);
	// b 0x82e4e1cc
	goto loc_82E4E1CC;
loc_82E4E1C8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4E1CC:
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

__attribute__((alias("__imp__sub_82E4E1E4"))) PPC_WEAK_FUNC(sub_82E4E1E4);
PPC_FUNC_IMPL(__imp__sub_82E4E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E1E8"))) PPC_WEAK_FUNC(sub_82E4E1E8);
PPC_FUNC_IMPL(__imp__sub_82E4E1E8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4e284
	if (ctx.cr6.eq) goto loc_82E4E284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e244
	if (ctx.cr6.eq) goto loc_82E4E244;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e4e238
	if (!ctx.cr6.gt) goto loc_82E4E238;
loc_82E4E228:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e244
	if (ctx.cr6.eq) goto loc_82E4E244;
	// bdnz 0x82e4e228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E4E228;
loc_82E4E238:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82e4e248
	if (!ctx.cr6.eq) goto loc_82E4E248;
loc_82E4E244:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4E248:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4e284
	if (ctx.cr6.eq) goto loc_82E4E284;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4e274
	if (ctx.cr0.eq) goto loc_82E4E274;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// bl 0x82e505c8
	ctx.lr = 0x82E4E264;
	sub_82E505C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e4e288
	goto loc_82E4E288;
loc_82E4E274:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e4c358
	ctx.lr = 0x82E4E280;
	sub_82E4C358(ctx, base);
	// b 0x82e4e288
	goto loc_82E4E288;
loc_82E4E284:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4E288:
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

__attribute__((alias("__imp__sub_82E4E29C"))) PPC_WEAK_FUNC(sub_82E4E29C);
PPC_FUNC_IMPL(__imp__sub_82E4E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E2A0"))) PPC_WEAK_FUNC(sub_82E4E2A0);
PPC_FUNC_IMPL(__imp__sub_82E4E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4E2B0"))) PPC_WEAK_FUNC(sub_82E4E2B0);
PPC_FUNC_IMPL(__imp__sub_82E4E2B0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e4e2dc
	if (ctx.cr0.eq) goto loc_82E4E2DC;
	// bl 0x822990f0
	ctx.lr = 0x82E4E2DC;
	sub_822990F0(ctx, base);
loc_82E4E2DC:
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

__attribute__((alias("__imp__sub_82E4E2F4"))) PPC_WEAK_FUNC(sub_82E4E2F4);
PPC_FUNC_IMPL(__imp__sub_82E4E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E2F8"))) PPC_WEAK_FUNC(sub_82E4E2F8);
PPC_FUNC_IMPL(__imp__sub_82E4E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,23392
	ctx.r11.s64 = ctx.r11.s64 + 23392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4E308"))) PPC_WEAK_FUNC(sub_82E4E308);
PPC_FUNC_IMPL(__imp__sub_82E4E308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4E310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x82e4e33c
	goto loc_82E4E33C;
loc_82E4E324:
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82e4e38c
	if (ctx.cr6.eq) goto loc_82E4E38C;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e4e38c
	if (ctx.cr6.eq) goto loc_82E4E38C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
loc_82E4E33C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4e324
	if (!ctx.cr0.eq) goto loc_82E4E324;
	// b 0x82e4e38c
	goto loc_82E4E38C;
loc_82E4E348:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82e4e370
	if (ctx.cr6.eq) goto loc_82E4E370;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e4e370
	if (ctx.cr6.eq) goto loc_82E4E370;
loc_82E4E360:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4e348
	if (!ctx.cr6.eq) goto loc_82E4E348;
loc_82E4E370:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// bl 0x82e65c58
	ctx.lr = 0x82E4E388;
	sub_82E65C58(ctx, base);
	// stbx r29,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u8);
loc_82E4E38C:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4e360
	if (!ctx.cr6.eq) goto loc_82E4E360;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4E3A4"))) PPC_WEAK_FUNC(sub_82E4E3A4);
PPC_FUNC_IMPL(__imp__sub_82E4E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E3A8"))) PPC_WEAK_FUNC(sub_82E4E3A8);
PPC_FUNC_IMPL(__imp__sub_82E4E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4E3B8"))) PPC_WEAK_FUNC(sub_82E4E3B8);
PPC_FUNC_IMPL(__imp__sub_82E4E3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82E4E3C0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4e43c
	if (ctx.cr0.eq) goto loc_82E4E43C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4E3E4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4e3f8
	if (!ctx.cr0.eq) goto loc_82E4E3F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4E3F8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4e43c
	if (ctx.cr6.eq) goto loc_82E4E43C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e4e410
	if (!ctx.cr6.eq) goto loc_82E4E410;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4E410:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4E42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e594
	if (!ctx.cr0.eq) goto loc_82E4E594;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82e4e3e4
	goto loc_82E4E3E4;
loc_82E4E43C:
	// lwz r22,48(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r18,r31,48
	ctx.r18.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r22,r18
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82e4e590
	if (ctx.cr6.eq) goto loc_82E4E590;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r20,-31890
	ctx.r20.s64 = -2089943040;
	// addi r21,r11,23416
	ctx.r21.s64 = ctx.r11.s64 + 23416;
loc_82E4E458:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r26,r22,-8
	ctx.r26.s64 = ctx.r22.s64 + -8;
	// bne cr6,0x82e4e468
	if (!ctx.cr6.eq) goto loc_82E4E468;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82E4E468:
	// lwz r27,332(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// addi r24,r26,332
	ctx.r24.s64 = ctx.r26.s64 + 332;
	// b 0x82e4e57c
	goto loc_82E4E57C;
loc_82E4E474:
	// lwz r30,84(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r25,r27,84
	ctx.r25.s64 = ctx.r27.s64 + 84;
	// b 0x82e4e570
	goto loc_82E4E570;
loc_82E4E480:
	// lis r11,39
	ctx.r11.s64 = 2555904;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4e4d8
	if (ctx.cr6.lt) goto loc_82E4E4D8;
	// addi r10,r19,96
	ctx.r10.s64 = ctx.r19.s64 + 96;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e4c4
	if (ctx.cr6.eq) goto loc_82E4E4C4;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82E4E4AC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82e4e4c4
	if (!ctx.cr6.lt) goto loc_82E4E4C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4e4ac
	if (!ctx.cr6.eq) goto loc_82E4E4AC;
loc_82E4E4C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e59c
	if (ctx.cr6.eq) goto loc_82E4E59C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82e4e540
	goto loc_82E4E540;
loc_82E4E4D8:
	// addi r29,r19,96
	ctx.r29.s64 = ctx.r19.s64 + 96;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r29
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4e538
	if (ctx.cr6.eq) goto loc_82E4E538;
loc_82E4E4E8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da4630
	ctx.lr = 0x82E4E4F8;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4e510
	if (ctx.cr0.eq) goto loc_82E4E510;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4e4e8
	if (!ctx.cr6.eq) goto loc_82E4E4E8;
	// b 0x82e4e538
	goto loc_82E4E538;
loc_82E4E510:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,322
	ctx.r6.s64 = 322;
	// lwz r11,-4716(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4716);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82e394b8
	ctx.lr = 0x82E4E52C;
	sub_82E394B8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82E4E538:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4e59c
	if (ctx.cr0.eq) goto loc_82E4E59C;
loc_82E4E540:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4e56c
	if (ctx.cr0.eq) goto loc_82E4E56C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,420(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 420);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 * 140;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,420(r26)
	PPC_STORE_U32(ctx.r26.u32 + 420, ctx.r11.u32);
loc_82E4E56C:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E4E570:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e4e480
	if (!ctx.cr6.eq) goto loc_82E4E480;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82E4E57C:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82e4e474
	if (!ctx.cr6.eq) goto loc_82E4E474;
	// lwz r22,0(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r22,r18
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82e4e458
	if (!ctx.cr6.eq) goto loc_82E4E458;
loc_82E4E590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4E594:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E4E59C:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4e594
	goto loc_82E4E594;
}

__attribute__((alias("__imp__sub_82E4E5A4"))) PPC_WEAK_FUNC(sub_82E4E5A4);
PPC_FUNC_IMPL(__imp__sub_82E4E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E5A8"))) PPC_WEAK_FUNC(sub_82E4E5A8);
PPC_FUNC_IMPL(__imp__sub_82E4E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E4E5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4e600
	if (!ctx.cr6.gt) goto loc_82E4E600;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E4E5D4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82da4630
	ctx.lr = 0x82E4E5E4;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4e60c
	if (ctx.cr0.eq) goto loc_82E4E60C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4e5d4
	if (ctx.cr6.lt) goto loc_82E4E5D4;
loc_82E4E600:
	// li r3,16
	ctx.r3.s64 = 16;
loc_82E4E604:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E4E60C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d81170
	ctx.lr = 0x82E4E61C;
	sub_82D81170(ctx, base);
	// b 0x82e4e604
	goto loc_82E4E604;
}

__attribute__((alias("__imp__sub_82E4E620"))) PPC_WEAK_FUNC(sub_82E4E620);
PPC_FUNC_IMPL(__imp__sub_82E4E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E4E628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e4e678
	if (ctx.cr6.eq) goto loc_82E4E678;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4e678
	if (ctx.cr6.eq) goto loc_82E4E678;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82e4e670
	goto loc_82E4E670;
loc_82E4E658:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82da4630
	ctx.lr = 0x82E4E664;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4e684
	if (ctx.cr0.eq) goto loc_82E4E684;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4E670:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e658
	if (!ctx.cr6.eq) goto loc_82E4E658;
loc_82E4E678:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4E67C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E4E684:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82e4e67c
	goto loc_82E4E67C;
}

__attribute__((alias("__imp__sub_82E4E690"))) PPC_WEAK_FUNC(sub_82E4E690);
PPC_FUNC_IMPL(__imp__sub_82E4E690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E4E698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e4e6e8
	if (ctx.cr6.eq) goto loc_82E4E6E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4e6e8
	if (ctx.cr6.eq) goto loc_82E4E6E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82e4e6e0
	goto loc_82E4E6E0;
loc_82E4E6C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82da4630
	ctx.lr = 0x82E4E6D4;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4e6f4
	if (ctx.cr0.eq) goto loc_82E4E6F4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4E6E0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e6c8
	if (!ctx.cr6.eq) goto loc_82E4E6C8;
loc_82E4E6E8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4E6EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E4E6F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82e4e6ec
	goto loc_82E4E6EC;
}

__attribute__((alias("__imp__sub_82E4E700"))) PPC_WEAK_FUNC(sub_82E4E700);
PPC_FUNC_IMPL(__imp__sub_82E4E700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4E708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// b 0x82e4e76c
	goto loc_82E4E76C;
loc_82E4E71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4e76c
	if (!ctx.cr6.eq) goto loc_82E4E76C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// bl 0x82e54810
	ctx.lr = 0x82E4E764;
	sub_82E54810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e778
	if (!ctx.cr0.eq) goto loc_82E4E778;
loc_82E4E76C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e71c
	if (!ctx.cr6.eq) goto loc_82E4E71C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4E778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4E780"))) PPC_WEAK_FUNC(sub_82E4E780);
PPC_FUNC_IMPL(__imp__sub_82E4E780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4E788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// b 0x82e4e7e8
	goto loc_82E4E7E8;
loc_82E4E79C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4e7e8
	if (!ctx.cr6.eq) goto loc_82E4E7E8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// bl 0x82e43b38
	ctx.lr = 0x82E4E7E0;
	sub_82E43B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4e7f4
	if (!ctx.cr0.eq) goto loc_82E4E7F4;
loc_82E4E7E8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e79c
	if (!ctx.cr6.eq) goto loc_82E4E79C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4E7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4E7FC"))) PPC_WEAK_FUNC(sub_82E4E7FC);
PPC_FUNC_IMPL(__imp__sub_82E4E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E800"))) PPC_WEAK_FUNC(sub_82E4E800);
PPC_FUNC_IMPL(__imp__sub_82E4E800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E4E808;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e4e860
	if (ctx.cr6.eq) goto loc_82E4E860;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e4e860
	if (ctx.cr6.eq) goto loc_82E4E860;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,108
	ctx.r30.s64 = ctx.r3.s64 + 108;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r31,108(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x82e4e858
	goto loc_82E4E858;
loc_82E4E83C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82da4630
	ctx.lr = 0x82E4E848;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4e86c
	if (ctx.cr0.eq) goto loc_82E4E86C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82E4E858:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e83c
	if (!ctx.cr6.eq) goto loc_82E4E83C;
loc_82E4E860:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4E864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E4E86C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82e4e87c
	if (ctx.cr6.eq) goto loc_82E4E87C;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82E4E87C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4e864
	goto loc_82E4E864;
}

__attribute__((alias("__imp__sub_82E4E884"))) PPC_WEAK_FUNC(sub_82E4E884);
PPC_FUNC_IMPL(__imp__sub_82E4E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E888"))) PPC_WEAK_FUNC(sub_82E4E888);
PPC_FUNC_IMPL(__imp__sub_82E4E888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e4e8e8
	if (ctx.cr6.eq) goto loc_82E4E8E8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e4e8e8
	if (ctx.cr6.lt) goto loc_82E4E8E8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e8c8
	if (ctx.cr6.eq) goto loc_82E4E8C8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e4e8cc
	if (!ctx.cr6.gt) goto loc_82E4E8CC;
loc_82E4E8B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e4e8c8
	if (ctx.cr6.eq) goto loc_82E4E8C8;
	// bdnz 0x82e4e8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E4E8B4;
	// b 0x82e4e8cc
	goto loc_82E4E8CC;
loc_82E4E8C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4E8CC:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r10,37
	ctx.r3.s64 = ctx.r10.s64 + 37;
	// blr 
	return;
loc_82E4E8E8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4E8F0"))) PPC_WEAK_FUNC(sub_82E4E8F0);
PPC_FUNC_IMPL(__imp__sub_82E4E8F0) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e4e938
	if (ctx.cr6.eq) goto loc_82E4E938;
loc_82E4E914:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4E92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4e914
	if (!ctx.cr6.eq) goto loc_82E4E914;
loc_82E4E938:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82E4E954"))) PPC_WEAK_FUNC(sub_82E4E954);
PPC_FUNC_IMPL(__imp__sub_82E4E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4E958"))) PPC_WEAK_FUNC(sub_82E4E958);
PPC_FUNC_IMPL(__imp__sub_82E4E958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E4E960;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82da3de8
	ctx.lr = 0x82E4E980;
	sub_82DA3DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ea88
	if (!ctx.cr0.eq) goto loc_82E4EA88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb22d8
	ctx.lr = 0x82E4E990;
	sub_82CB22D8(ctx, base);
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4e9ac
	if (ctx.cr0.eq) goto loc_82E4E9AC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82E4E9AC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d808b8
	ctx.lr = 0x82E4E9C0;
	sub_82D808B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ea88
	if (!ctx.cr0.eq) goto loc_82E4EA88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4E9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ea88
	if (!ctx.cr0.eq) goto loc_82E4EA88;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r11,23416
	ctx.r30.s64 = ctx.r11.s64 + 23416;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,563
	ctx.r6.s64 = 563;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E4EA10;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ea20
	if (ctx.cr0.eq) goto loc_82E4EA20;
	// bl 0x82e560a0
	ctx.lr = 0x82E4EA1C;
	sub_82E560A0(ctx, base);
	// b 0x82e4ea24
	goto loc_82E4EA24;
loc_82E4EA20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4EA24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// bne cr6,0x82e4ea38
	if (!ctx.cr6.eq) goto loc_82E4EA38;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4ea88
	goto loc_82E4EA88;
loc_82E4EA38:
	// bl 0x82e55260
	ctx.lr = 0x82E4EA3C;
	sub_82E55260(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82e55428
	ctx.lr = 0x82E4EA48;
	sub_82E55428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ea88
	if (!ctx.cr0.eq) goto loc_82E4EA88;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r6,576
	ctx.r6.s64 = 576;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E4EA70;
	sub_82E39460(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r12,-42
	ctx.r12.s64 = -42;
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
loc_82E4EA88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4EA90"))) PPC_WEAK_FUNC(sub_82E4EA90);
PPC_FUNC_IMPL(__imp__sub_82E4EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E4EA98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4EAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e43e60
	ctx.lr = 0x82E4EABC;
	sub_82E43E60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,23416
	ctx.r28.s64 = ctx.r11.s64 + 23416;
	// beq 0x82e4eaf4
	if (ctx.cr0.eq) goto loc_82E4EAF4;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,625
	ctx.r6.s64 = 625;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4EAF4;
	sub_82D861B0(ctx, base);
loc_82E4EAF4:
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4eb18
	if (ctx.cr0.eq) goto loc_82E4EB18;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,631
	ctx.r6.s64 = 631;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4EB18;
	sub_82D861B0(ctx, base);
loc_82E4EB18:
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4eb3c
	if (ctx.cr0.eq) goto loc_82E4EB3C;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,636
	ctx.r6.s64 = 636;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4EB3C;
	sub_82D861B0(ctx, base);
loc_82E4EB3C:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e4eb88
	if (ctx.cr6.eq) goto loc_82E4EB88;
loc_82E4EB50:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// bl 0x82e43b38
	ctx.lr = 0x82E4EB7C;
	sub_82E43B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4eb50
	if (!ctx.cr6.eq) goto loc_82E4EB50;
loc_82E4EB88:
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e4ebd0
	if (ctx.cr6.eq) goto loc_82E4EBD0;
loc_82E4EB98:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// bl 0x82e54810
	ctx.lr = 0x82E4EBC4;
	sub_82E54810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4eb98
	if (!ctx.cr6.eq) goto loc_82E4EB98;
loc_82E4EBD0:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ebe8
	if (ctx.cr0.eq) goto loc_82E4EBE8;
	// bl 0x82e53ba0
	ctx.lr = 0x82E4EBE0;
	sub_82E53BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
loc_82E4EBE8:
	// bl 0x82e57c60
	ctx.lr = 0x82E4EBEC;
	sub_82E57C60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e57e68
	ctx.lr = 0x82E4EBF8;
	sub_82E57E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e58058
	ctx.lr = 0x82E4EC04;
	sub_82E58058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e58218
	ctx.lr = 0x82E4EC10;
	sub_82E58218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e584d0
	ctx.lr = 0x82E4EC1C;
	sub_82E584D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
	// bl 0x82e56b88
	ctx.lr = 0x82E4EC28;
	sub_82E56B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r26,-31890
	ctx.r26.s64 = -2089943040;
	// beq 0x82e4ec58
	if (ctx.cr0.eq) goto loc_82E4EC58;
	// lwz r11,-4716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4716);
	// addi r31,r11,196
	ctx.r31.s64 = ctx.r11.s64 + 196;
	// bl 0x82e56b88
	ctx.lr = 0x82E4EC40;
	sub_82E56B88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,668
	ctx.r6.s64 = 668;
	// bl 0x82e394b8
	ctx.lr = 0x82E4EC50;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e56b78
	ctx.lr = 0x82E4EC58;
	sub_82E56B78(ctx, base);
loc_82E4EC58:
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ec70
	if (ctx.cr0.eq) goto loc_82E4EC70;
	// bl 0x82e56198
	ctx.lr = 0x82E4EC68;
	sub_82E56198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
loc_82E4EC70:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4ece8
	if (ctx.cr0.eq) goto loc_82E4ECE8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4eccc
	if (!ctx.cr6.gt) goto loc_82E4ECCC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E4EC8C:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4ecb8
	if (ctx.cr6.eq) goto loc_82E4ECB8;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r6,687
	ctx.r6.s64 = 687;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4ECB8;
	sub_82D861B0(ctx, base);
loc_82E4ECB8:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4ec8c
	if (ctx.cr6.lt) goto loc_82E4EC8C;
loc_82E4ECCC:
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,691
	ctx.r6.s64 = 691;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4ECE8;
	sub_82D861B0(ctx, base);
loc_82E4ECE8:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ed00
	if (ctx.cr0.eq) goto loc_82E4ED00;
	// bl 0x82d7ff70
	ctx.lr = 0x82E4ECF8;
	sub_82D7FF70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4ee0c
	if (!ctx.cr0.eq) goto loc_82E4EE0C;
loc_82E4ED00:
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4ed24
	if (ctx.cr0.eq) goto loc_82E4ED24;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,705
	ctx.r6.s64 = 705;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4ED24;
	sub_82D861B0(ctx, base);
loc_82E4ED24:
	// lwz r3,208(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ed44
	if (ctx.cr0.eq) goto loc_82E4ED44;
	// lwz r11,-4716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4716);
	// li r6,710
	ctx.r6.s64 = 710;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4ED44;
	sub_82E394B8(ctx, base);
loc_82E4ED44:
	// lwz r4,144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// addi r30,r29,144
	ctx.r30.s64 = ctx.r29.s64 + 144;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e4ed9c
	if (ctx.cr6.eq) goto loc_82E4ED9C;
loc_82E4ED54:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,721
	ctx.r6.s64 = 721;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r25,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r25.u32);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4ED90;
	sub_82D861B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4ed54
	if (!ctx.cr6.eq) goto loc_82E4ED54;
loc_82E4ED9C:
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4edbc
	if (ctx.cr0.eq) goto loc_82E4EDBC;
	// lwz r11,-4716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4716);
	// li r6,729
	ctx.r6.s64 = 729;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4EDBC;
	sub_82E394B8(ctx, base);
loc_82E4EDBC:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,733
	ctx.r6.s64 = 733;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4EE00;
	sub_82D861B0(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-4716(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4716, ctx.r11.u32);
loc_82E4EE0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4EE14"))) PPC_WEAK_FUNC(sub_82E4EE14);
PPC_FUNC_IMPL(__imp__sub_82E4EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4EE18"))) PPC_WEAK_FUNC(sub_82E4EE18);
PPC_FUNC_IMPL(__imp__sub_82E4EE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E4EE20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4eec8
	if (ctx.cr6.eq) goto loc_82E4EEC8;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r31,r26,36
	ctx.r31.s64 = ctx.r26.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4ee4c
	if (!ctx.cr6.eq) goto loc_82E4EE4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da3de8
	ctx.lr = 0x82E4EE4C;
	sub_82DA3DE8(ctx, base);
loc_82E4EE4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da3de8
	ctx.lr = 0x82E4EE54;
	sub_82DA3DE8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x82e4ee6c
	if (!ctx.cr6.lt) goto loc_82E4EE6C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E4EE6C:
	// lwz r30,132(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// addi r28,r26,132
	ctx.r28.s64 = ctx.r26.s64 + 132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e4eec0
	goto loc_82E4EEC0;
loc_82E4EE7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e4ee8c
	if (!ctx.cr6.eq) goto loc_82E4EE8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4EE8C:
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r29,r11,80
	ctx.r29.s64 = ctx.r11.s64 + 80;
	// b 0x82e4eeb0
	goto loc_82E4EEB0;
loc_82E4EE98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e461b0
	ctx.lr = 0x82E4EEA8;
	sub_82E461B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4eebc
	if (!ctx.cr0.eq) goto loc_82E4EEBC;
loc_82E4EEB0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82e4ee98
	if (!ctx.cr6.eq) goto loc_82E4EE98;
loc_82E4EEBC:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E4EEC0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e4ee7c
	if (!ctx.cr6.eq) goto loc_82E4EE7C;
loc_82E4EEC8:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4eee0
	if (ctx.cr0.eq) goto loc_82E4EEE0;
	// bl 0x82e53b68
	ctx.lr = 0x82E4EED8;
	sub_82E53B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4eee8
	if (!ctx.cr0.eq) goto loc_82E4EEE8;
loc_82E4EEE0:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x82d80938
	ctx.lr = 0x82E4EEE8;
	sub_82D80938(ctx, base);
loc_82E4EEE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4EEF0"))) PPC_WEAK_FUNC(sub_82E4EEF0);
PPC_FUNC_IMPL(__imp__sub_82E4EEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E4EEF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d806d8
	ctx.lr = 0x82E4EF14;
	sub_82D806D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4eff4
	if (!ctx.cr0.eq) goto loc_82E4EFF4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r10,23416
	ctx.r28.s64 = ctx.r10.s64 + 23416;
	// beq 0x82e4ef64
	if (ctx.cr0.eq) goto loc_82E4EF64;
	// lwz r10,19872(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,896
	ctx.r6.s64 = 896;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E4EF50;
	sub_82D862B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bne 0x82e4ef64
	if (!ctx.cr0.eq) goto loc_82E4EF64;
loc_82E4EF5C:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4eff4
	goto loc_82E4EFF4;
loc_82E4EF64:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4eff0
	if (!ctx.cr6.gt) goto loc_82E4EFF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E4EF78:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d80730
	ctx.lr = 0x82E4EF94;
	sub_82D80730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4eff4
	if (!ctx.cr0.eq) goto loc_82E4EFF4;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,914
	ctx.r6.s64 = 914;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E4EFB8;
	sub_82D862B0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4ef5c
	if (ctx.cr0.eq) goto loc_82E4EF5C;
	// li r5,63
	ctx.r5.s64 = 63;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da4468
	ctx.lr = 0x82E4EFDC;
	sub_82DA4468(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e4ef78
	if (ctx.cr6.lt) goto loc_82E4EF78;
loc_82E4EFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4EFF4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4EFFC"))) PPC_WEAK_FUNC(sub_82E4EFFC);
PPC_FUNC_IMPL(__imp__sub_82E4EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F000"))) PPC_WEAK_FUNC(sub_82E4F000);
PPC_FUNC_IMPL(__imp__sub_82E4F000) {
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
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4f030
	if (!ctx.cr6.eq) goto loc_82E4F030;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82e4f0ac
	goto loc_82E4F0AC;
loc_82E4F030:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4f064
	if (ctx.cr0.eq) goto loc_82E4F064;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,23416
	ctx.r5.s64 = ctx.r11.s64 + 23416;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,949
	ctx.r6.s64 = 949;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4F05C;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82E4F064:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4f0a8
	if (ctx.cr6.eq) goto loc_82E4F0A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E4F074;
	sub_82DA4420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f084
	if (ctx.cr0.eq) goto loc_82E4F084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E4F084;
	sub_82DA4420(ctx, base);
loc_82E4F084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4828
	ctx.lr = 0x82E4F08C;
	sub_82DA4828(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r12,-42
	ctx.r12.s64 = -42;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
	// b 0x82e4f0ac
	goto loc_82E4F0AC;
loc_82E4F0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F0AC:
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

__attribute__((alias("__imp__sub_82E4F0C4"))) PPC_WEAK_FUNC(sub_82E4F0C4);
PPC_FUNC_IMPL(__imp__sub_82E4F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F0C8"))) PPC_WEAK_FUNC(sub_82E4F0C8);
PPC_FUNC_IMPL(__imp__sub_82E4F0C8) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e4f118
	if (ctx.cr0.eq) goto loc_82E4F118;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,23416
	ctx.r5.s64 = ctx.r11.s64 + 23416;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,980
	ctx.r6.s64 = 980;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4F110;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82E4F118:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4f144
	if (ctx.cr6.eq) goto loc_82E4F144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4828
	ctx.lr = 0x82E4F128;
	sub_82DA4828(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r12,-42
	ctx.r12.s64 = -42;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
	// b 0x82e4f148
	goto loc_82E4F148;
loc_82E4F144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F148:
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

__attribute__((alias("__imp__sub_82E4F160"))) PPC_WEAK_FUNC(sub_82E4F160);
PPC_FUNC_IMPL(__imp__sub_82E4F160) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4f170
	if (!ctx.cr6.eq) goto loc_82E4F170;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4F170:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,5124
	ctx.r11.u64 = ctx.r11.u64 | 5124;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F184"))) PPC_WEAK_FUNC(sub_82E4F184);
PPC_FUNC_IMPL(__imp__sub_82E4F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F188"))) PPC_WEAK_FUNC(sub_82E4F188);
PPC_FUNC_IMPL(__imp__sub_82E4F188) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4f198
	if (!ctx.cr6.eq) goto loc_82E4F198;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4F198:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F1A8"))) PPC_WEAK_FUNC(sub_82E4F1A8);
PPC_FUNC_IMPL(__imp__sub_82E4F1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E4F1B0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F1DC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// lis r11,38
	ctx.r11.s64 = 2490368;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x82e4f22c
	if (!ctx.cr6.lt) goto loc_82E4F22C;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4f22c
	if (ctx.cr6.lt) goto loc_82E4F22C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F214;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e54710
	ctx.lr = 0x82E4F228;
	sub_82E54710(ctx, base);
	// b 0x82e4f264
	goto loc_82E4F264;
loc_82E4F22C:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F234;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F254;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e546e0
	ctx.lr = 0x82E4F264;
	sub_82E546E0(ctx, base);
loc_82E4F264:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F27C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F29C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// lis r28,27
	ctx.r28.s64 = 1769472;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82e4f2d8
	if (ctx.cr6.lt) goto loc_82E4F2D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F2CC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f2dc
	if (ctx.cr0.eq) goto loc_82E4F2DC;
	// b 0x82e4f44c
	goto loc_82E4F44C;
loc_82E4F2D8:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82E4F2DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F2F4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F314;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x82e4f350
	if (ctx.cr6.lt) goto loc_82E4F350;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F344;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f354
	if (ctx.cr0.eq) goto loc_82E4F354;
	// b 0x82e4f44c
	goto loc_82E4F44C;
loc_82E4F350:
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82E4F354:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F36C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82e4f3a0
	if (ctx.cr6.lt) goto loc_82E4F3A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F394;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f3a4
	if (ctx.cr0.eq) goto loc_82E4F3A4;
	// b 0x82e4f44c
	goto loc_82E4F44C;
loc_82E4F3A0:
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82E4F3A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F3BC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F3DC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f44c
	if (!ctx.cr0.eq) goto loc_82E4F44C;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82e4f410
	if (ctx.cr6.lt) goto loc_82E4F410;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F404;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f414
	if (ctx.cr0.eq) goto loc_82E4F414;
	// b 0x82e4f44c
	goto loc_82E4F44C;
loc_82E4F410:
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82E4F414:
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e4f444
	if (ctx.cr6.lt) goto loc_82E4F444;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E4F438;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4f448
	if (ctx.cr0.eq) goto loc_82E4F448;
	// b 0x82e4f44c
	goto loc_82E4F44C;
loc_82E4F444:
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_82E4F448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F44C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4F458"))) PPC_WEAK_FUNC(sub_82E4F458);
PPC_FUNC_IMPL(__imp__sub_82E4F458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4f468
	if (!ctx.cr6.eq) goto loc_82E4F468;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4F468:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F478"))) PPC_WEAK_FUNC(sub_82E4F478);
PPC_FUNC_IMPL(__imp__sub_82E4F478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,23392
	ctx.r11.s64 = ctx.r11.s64 + 23392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F488"))) PPC_WEAK_FUNC(sub_82E4F488);
PPC_FUNC_IMPL(__imp__sub_82E4F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4F490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r30,r11,23416
	ctx.r30.s64 = ctx.r11.s64 + 23416;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4f4cc
	if (ctx.cr0.eq) goto loc_82E4F4CC;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,2491
	ctx.r6.s64 = 2491;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E4F4C4;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82E4F4CC:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,2495
	ctx.r6.s64 = 2495;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E4F4E8;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bne 0x82e4f4fc
	if (!ctx.cr0.eq) goto loc_82E4F4FC;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4f51c
	goto loc_82E4F51C;
loc_82E4F4FC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4F51C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4F524"))) PPC_WEAK_FUNC(sub_82E4F524);
PPC_FUNC_IMPL(__imp__sub_82E4F524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F528"))) PPC_WEAK_FUNC(sub_82E4F528);
PPC_FUNC_IMPL(__imp__sub_82E4F528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E4F530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e4f5b4
	if (!ctx.cr6.eq) goto loc_82E4F5B4;
	// lwz r29,132(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// addi r28,r27,132
	ctx.r28.s64 = ctx.r27.s64 + 132;
	// b 0x82e4f5a8
	goto loc_82E4F5A8;
loc_82E4F550:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82e4f560
	if (!ctx.cr6.eq) goto loc_82E4F560;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4F560:
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// b 0x82e4f59c
	goto loc_82E4F59C;
loc_82E4F56C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4f57c
	if (!ctx.cr6.eq) goto loc_82E4F57C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4F57C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f658
	if (!ctx.cr0.eq) goto loc_82E4F658;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4F59C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4f56c
	if (!ctx.cr6.eq) goto loc_82E4F56C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E4F5A8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e4f550
	if (!ctx.cr6.eq) goto loc_82E4F550;
	// b 0x82e4f654
	goto loc_82E4F654;
loc_82E4F5B4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4f614
	if (ctx.cr0.eq) goto loc_82E4F614;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4F5C4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4f5d8
	if (!ctx.cr0.eq) goto loc_82E4F5D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4F5D8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4f614
	if (ctx.cr6.eq) goto loc_82E4F614;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4f5f0
	if (!ctx.cr6.eq) goto loc_82E4F5F0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4F5F0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f658
	if (!ctx.cr0.eq) goto loc_82E4F658;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e4f5c4
	goto loc_82E4F5C4;
loc_82E4F614:
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// b 0x82e4f64c
	goto loc_82E4F64C;
loc_82E4F620:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// bne cr6,0x82e4f630
	if (!ctx.cr6.eq) goto loc_82E4F630;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E4F630:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,72(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4F64C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4f620
	if (!ctx.cr6.eq) goto loc_82E4F620;
loc_82E4F654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4F660"))) PPC_WEAK_FUNC(sub_82E4F660);
PPC_FUNC_IMPL(__imp__sub_82E4F660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F67C"))) PPC_WEAK_FUNC(sub_82E4F67C);
PPC_FUNC_IMPL(__imp__sub_82E4F67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F680"))) PPC_WEAK_FUNC(sub_82E4F680);
PPC_FUNC_IMPL(__imp__sub_82E4F680) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e4f6c4
	if (ctx.cr0.eq) goto loc_82E4F6C4;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e4f6c4
	if (!ctx.cr6.gt) goto loc_82E4F6C4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82E4F6A4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e4f6d4
	if (ctx.cr6.eq) goto loc_82E4F6D4;
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82e4f6a4
	if (ctx.cr6.lt) goto loc_82E4F6A4;
loc_82E4F6C4:
	// lwz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
loc_82E4F6D4:
	// lis r9,4012
	ctx.r9.s64 = 262930432;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r9,57599
	ctx.r9.u64 = ctx.r9.u64 | 57599;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F6EC"))) PPC_WEAK_FUNC(sub_82E4F6EC);
PPC_FUNC_IMPL(__imp__sub_82E4F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F6F0"))) PPC_WEAK_FUNC(sub_82E4F6F0);
PPC_FUNC_IMPL(__imp__sub_82E4F6F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4f708
	if (ctx.cr0.eq) goto loc_82E4F708;
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
loc_82E4F708:
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// li r3,0
	ctx.r3.s64 = 0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4F71C"))) PPC_WEAK_FUNC(sub_82E4F71C);
PPC_FUNC_IMPL(__imp__sub_82E4F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F720"))) PPC_WEAK_FUNC(sub_82E4F720);
PPC_FUNC_IMPL(__imp__sub_82E4F720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E4F728;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e4f7bc
	if (!ctx.cr6.eq) goto loc_82E4F7BC;
	// lwz r29,132(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r27,r28,132
	ctx.r27.s64 = ctx.r28.s64 + 132;
	// b 0x82e4f7b0
	goto loc_82E4F7B0;
loc_82E4F750:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82e4f760
	if (!ctx.cr6.eq) goto loc_82E4F760;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4F760:
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// b 0x82e4f7a4
	goto loc_82E4F7A4;
loc_82E4F76C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e4f77c
	if (!ctx.cr6.eq) goto loc_82E4F77C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4F77C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f86c
	if (!ctx.cr0.eq) goto loc_82E4F86C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4F7A4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e4f76c
	if (!ctx.cr6.eq) goto loc_82E4F76C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E4F7B0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e4f750
	if (!ctx.cr6.eq) goto loc_82E4F750;
	// b 0x82e4f868
	goto loc_82E4F868;
loc_82E4F7BC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4f824
	if (ctx.cr0.eq) goto loc_82E4F824;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E4F7CC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e4f7e0
	if (!ctx.cr0.eq) goto loc_82E4F7E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4F7E0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4f824
	if (ctx.cr6.eq) goto loc_82E4F824;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e4f7f8
	if (!ctx.cr6.eq) goto loc_82E4F7F8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4F7F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4f86c
	if (!ctx.cr0.eq) goto loc_82E4F86C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82e4f7cc
	goto loc_82E4F7CC;
loc_82E4F824:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// b 0x82e4f860
	goto loc_82E4F860;
loc_82E4F830:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82e4f84c
	if (!ctx.cr6.eq) goto loc_82E4F84C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4F84C:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E4F860:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e4f830
	if (!ctx.cr6.eq) goto loc_82E4F830;
loc_82E4F868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F86C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4F874"))) PPC_WEAK_FUNC(sub_82E4F874);
PPC_FUNC_IMPL(__imp__sub_82E4F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F878"))) PPC_WEAK_FUNC(sub_82E4F878);
PPC_FUNC_IMPL(__imp__sub_82E4F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E4F880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4f89c
	if (!ctx.cr6.eq) goto loc_82E4F89C;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82e4f9b4
	goto loc_82E4F9B4;
loc_82E4F89C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4f8d0
	if (ctx.cr6.eq) goto loc_82E4F8D0;
loc_82E4F8AC:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4F8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4f8ac
	if (!ctx.cr6.eq) goto loc_82E4F8AC;
loc_82E4F8D0:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4f91c
	if (ctx.cr6.eq) goto loc_82E4F91C;
loc_82E4F8E4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bl 0x82e54810
	ctx.lr = 0x82E4F910;
	sub_82E54810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4f8e4
	if (!ctx.cr6.eq) goto loc_82E4F8E4;
loc_82E4F91C:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r29,r30,84
	ctx.r29.s64 = ctx.r30.s64 + 84;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4f964
	if (ctx.cr6.eq) goto loc_82E4F964;
loc_82E4F92C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bl 0x82e43b38
	ctx.lr = 0x82E4F958;
	sub_82E43B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4f92c
	if (!ctx.cr6.eq) goto loc_82E4F92C;
loc_82E4F964:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r29,r30,108
	ctx.r29.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4f9a8
	if (ctx.cr6.eq) goto loc_82E4F9A8;
loc_82E4F974:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bl 0x82e59a90
	ctx.lr = 0x82E4F99C;
	sub_82E59A90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4f974
	if (!ctx.cr6.eq) goto loc_82E4F974;
loc_82E4F9A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e4e8f0
	ctx.lr = 0x82E4F9B0;
	sub_82E4E8F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4F9B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4F9BC"))) PPC_WEAK_FUNC(sub_82E4F9BC);
PPC_FUNC_IMPL(__imp__sub_82E4F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4F9C0"))) PPC_WEAK_FUNC(sub_82E4F9C0);
PPC_FUNC_IMPL(__imp__sub_82E4F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4f9d4
	if (!ctx.cr6.eq) goto loc_82E4F9D4;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4F9D4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e4fa5c
	if (ctx.cr6.eq) goto loc_82E4FA5C;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4fa5c
	if (ctx.cr6.eq) goto loc_82E4FA5C;
loc_82E4F9F0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e4f9f0
	if (!ctx.cr6.eq) goto loc_82E4F9F0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e4fa5c
	if (ctx.cr6.eq) goto loc_82E4FA5C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4fa3c
	if (ctx.cr6.eq) goto loc_82E4FA3C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e4fa30
	if (!ctx.cr6.gt) goto loc_82E4FA30;
loc_82E4FA20:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e4fa3c
	if (ctx.cr6.eq) goto loc_82E4FA3C;
	// bdnz 0x82e4fa20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E4FA20;
loc_82E4FA30:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82e4fa40
	if (!ctx.cr6.eq) goto loc_82E4FA40;
loc_82E4FA3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E4FA40:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r10,37
	ctx.r3.s64 = ctx.r10.s64 + 37;
	// blr 
	return;
loc_82E4FA5C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4FA64"))) PPC_WEAK_FUNC(sub_82E4FA64);
PPC_FUNC_IMPL(__imp__sub_82E4FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4FA68"))) PPC_WEAK_FUNC(sub_82E4FA68);
PPC_FUNC_IMPL(__imp__sub_82E4FA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fa7c
	if (!ctx.cr6.eq) goto loc_82E4FA7C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4FA7C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4fa8c
	if (!ctx.cr6.eq) goto loc_82E4FA8C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4FA8C:
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e4faa4
	goto loc_82E4FAA4;
loc_82E4FA9C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4FAA4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4fa9c
	if (!ctx.cr6.eq) goto loc_82E4FA9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4FAB8"))) PPC_WEAK_FUNC(sub_82E4FAB8);
PPC_FUNC_IMPL(__imp__sub_82E4FAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4FAC0;
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
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fae4
	if (!ctx.cr6.eq) goto loc_82E4FAE4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82e4fb3c
	goto loc_82E4FB3C;
loc_82E4FAE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4fb38
	if (ctx.cr6.eq) goto loc_82E4FB38;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e4fb38
	if (ctx.cr6.eq) goto loc_82E4FB38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23184
	ctx.r4.s64 = ctx.r11.s64 + 23184;
	// bl 0x82da4630
	ctx.lr = 0x82E4FB04;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4fb18
	if (!ctx.cr0.eq) goto loc_82E4FB18;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82e4fb3c
	goto loc_82E4FB3C;
loc_82E4FB18:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4FB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e4fb3c
	goto loc_82E4FB3C;
loc_82E4FB38:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4FB3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FB44"))) PPC_WEAK_FUNC(sub_82E4FB44);
PPC_FUNC_IMPL(__imp__sub_82E4FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4FB48"))) PPC_WEAK_FUNC(sub_82E4FB48);
PPC_FUNC_IMPL(__imp__sub_82E4FB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fb5c
	if (!ctx.cr6.eq) goto loc_82E4FB5C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4FB5C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e4fb6c
	if (!ctx.cr6.eq) goto loc_82E4FB6C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4FB6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82e4fb8c
	if (!ctx.cr6.eq) goto loc_82E4FB8C;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E4FB8C:
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E4FBA0"))) PPC_WEAK_FUNC(sub_82E4FBA0);
PPC_FUNC_IMPL(__imp__sub_82E4FBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fbb4
	if (!ctx.cr6.eq) goto loc_82E4FBB4;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4FBB4:
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E4FBC8"))) PPC_WEAK_FUNC(sub_82E4FBC8);
PPC_FUNC_IMPL(__imp__sub_82E4FBC8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4fc18
	if (ctx.cr6.eq) goto loc_82E4FC18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4fc18
	if (ctx.cr6.eq) goto loc_82E4FC18;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4e800
	ctx.lr = 0x82E4FBF4;
	sub_82E4E800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4fc1c
	if (!ctx.cr0.eq) goto loc_82E4FC1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82cb1160
	ctx.lr = 0x82E4FC10;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4fc1c
	goto loc_82E4FC1C;
loc_82E4FC18:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4FC1C:
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

__attribute__((alias("__imp__sub_82E4FC30"))) PPC_WEAK_FUNC(sub_82E4FC30);
PPC_FUNC_IMPL(__imp__sub_82E4FC30) {
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e4fc5c
	if (!ctx.cr6.eq) goto loc_82E4FC5C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4fc94
	goto loc_82E4FC94;
loc_82E4FC5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4e888
	ctx.lr = 0x82E4FC64;
	sub_82E4E888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4fc94
	if (!ctx.cr0.eq) goto loc_82E4FC94;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82cb1160
	ctx.lr = 0x82E4FC80;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e4fc90
	if (ctx.cr6.eq) goto loc_82E4FC90;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E4FC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4FC94:
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

__attribute__((alias("__imp__sub_82E4FCAC"))) PPC_WEAK_FUNC(sub_82E4FCAC);
PPC_FUNC_IMPL(__imp__sub_82E4FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4FCB0"))) PPC_WEAK_FUNC(sub_82E4FCB0);
PPC_FUNC_IMPL(__imp__sub_82E4FCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fcc4
	if (!ctx.cr6.eq) goto loc_82E4FCC4;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4FCC4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e4fcd4
	if (!ctx.cr6.eq) goto loc_82E4FCD4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E4FCD4:
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e4fcec
	goto loc_82E4FCEC;
loc_82E4FCE4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E4FCEC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e4fce4
	if (!ctx.cr6.eq) goto loc_82E4FCE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4FD00"))) PPC_WEAK_FUNC(sub_82E4FD00);
PPC_FUNC_IMPL(__imp__sub_82E4FD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E4FD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e4fd24
	if (!ctx.cr6.eq) goto loc_82E4FD24;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e4fdbc
	goto loc_82E4FDBC;
loc_82E4FD24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d81278
	ctx.lr = 0x82E4FD30;
	sub_82D81278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4fdbc
	if (!ctx.cr0.eq) goto loc_82E4FDBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,23416
	ctx.r5.s64 = ctx.r11.s64 + 23416;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2997
	ctx.r6.s64 = 2997;
	// li r4,160
	ctx.r4.s64 = 160;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E4FD60;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4fd74
	if (ctx.cr0.eq) goto loc_82E4FD74;
	// bl 0x82e42670
	ctx.lr = 0x82E4FD6C;
	sub_82E42670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4fd78
	goto loc_82E4FD78;
loc_82E4FD74:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4FD78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e4fd88
	if (!ctx.cr6.eq) goto loc_82E4FD88;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e4fdbc
	goto loc_82E4FDBC;
loc_82E4FD88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e3acc0
	ctx.lr = 0x82E4FD94;
	sub_82E3ACC0(ctx, base);
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82E4FDBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FDC4"))) PPC_WEAK_FUNC(sub_82E4FDC4);
PPC_FUNC_IMPL(__imp__sub_82E4FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E4FDC8"))) PPC_WEAK_FUNC(sub_82E4FDC8);
PPC_FUNC_IMPL(__imp__sub_82E4FDC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d814d8
	sub_82D814D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FDD0"))) PPC_WEAK_FUNC(sub_82E4FDD0);
PPC_FUNC_IMPL(__imp__sub_82E4FDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d81520
	sub_82D81520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FDD8"))) PPC_WEAK_FUNC(sub_82E4FDD8);
PPC_FUNC_IMPL(__imp__sub_82E4FDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d81448
	sub_82D81448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FDE0"))) PPC_WEAK_FUNC(sub_82E4FDE0);
PPC_FUNC_IMPL(__imp__sub_82E4FDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d81490
	sub_82D81490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FDE8"))) PPC_WEAK_FUNC(sub_82E4FDE8);
PPC_FUNC_IMPL(__imp__sub_82E4FDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E4FDF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fe14
	if (!ctx.cr6.eq) goto loc_82E4FE14;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82e4feb4
	goto loc_82E4FEB4;
loc_82E4FE14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e4feb0
	if (ctx.cr6.eq) goto loc_82E4FEB0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e4feb0
	if (ctx.cr6.eq) goto loc_82E4FEB0;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82e4fe40
	goto loc_82E4FE40;
loc_82E4FE30:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e4fe48
	if (ctx.cr6.eq) goto loc_82E4FE48;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
loc_82E4FE40:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4fe30
	if (!ctx.cr0.eq) goto loc_82E4FE30;
loc_82E4FE48:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4feb0
	if (ctx.cr6.eq) goto loc_82E4FEB0;
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r26,r3,132
	ctx.r26.s64 = ctx.r3.s64 + 132;
	// b 0x82e4fea8
	goto loc_82E4FEA8;
loc_82E4FE60:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82e4fe70
	if (!ctx.cr6.eq) goto loc_82E4FE70;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4FE70:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4fea4
	if (ctx.cr0.eq) goto loc_82E4FEA4;
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
	// bl 0x82da4420
	ctx.lr = 0x82E4FE84;
	sub_82DA4420(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82e4fea4
	if (!ctx.cr6.eq) goto loc_82E4FEA4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E4FE9C;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4febc
	if (ctx.cr0.eq) goto loc_82E4FEBC;
loc_82E4FEA4:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E4FEA8:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4fe60
	if (!ctx.cr6.eq) goto loc_82E4FE60;
loc_82E4FEB0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4FEB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E4FEBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4FEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e4feb4
	goto loc_82E4FEB4;
}

__attribute__((alias("__imp__sub_82E4FEE0"))) PPC_WEAK_FUNC(sub_82E4FEE0);
PPC_FUNC_IMPL(__imp__sub_82E4FEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E4FEE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4ff0c
	if (!ctx.cr6.eq) goto loc_82E4FF0C;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82e4ffd8
	goto loc_82E4FFD8;
loc_82E4FF0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e4ffd4
	if (ctx.cr6.eq) goto loc_82E4FFD4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e4ffd4
	if (ctx.cr6.eq) goto loc_82E4FFD4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82e4ff38
	goto loc_82E4FF38;
loc_82E4FF28:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e4ff40
	if (ctx.cr6.eq) goto loc_82E4FF40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
loc_82E4FF38:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4ff28
	if (!ctx.cr0.eq) goto loc_82E4FF28;
loc_82E4FF40:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4ffd4
	if (ctx.cr6.eq) goto loc_82E4FFD4;
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r26,r3,132
	ctx.r26.s64 = ctx.r3.s64 + 132;
	// b 0x82e4ffa0
	goto loc_82E4FFA0;
loc_82E4FF58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82e4ff68
	if (!ctx.cr6.eq) goto loc_82E4FF68;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4FF68:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4ff9c
	if (ctx.cr0.eq) goto loc_82E4FF9C;
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
	// bl 0x82da4420
	ctx.lr = 0x82E4FF7C;
	sub_82DA4420(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82e4ff9c
	if (!ctx.cr6.eq) goto loc_82E4FF9C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E4FF94;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4ffb0
	if (ctx.cr0.eq) goto loc_82E4FFB0;
loc_82E4FF9C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E4FFA0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e4ff58
	if (!ctx.cr6.eq) goto loc_82E4FF58;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82e4ffd8
	goto loc_82E4FFD8;
loc_82E4FFB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4FFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e4ffd8
	goto loc_82E4FFD8;
loc_82E4FFD4:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E4FFD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4FFE0"))) PPC_WEAK_FUNC(sub_82E4FFE0);
PPC_FUNC_IMPL(__imp__sub_82E4FFE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4fff4
	if (!ctx.cr6.eq) goto loc_82E4FFF4;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E4FFF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e50004
	if (!ctx.cr6.eq) goto loc_82E50004;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E50004:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E50014"))) PPC_WEAK_FUNC(sub_82E50014);
PPC_FUNC_IMPL(__imp__sub_82E50014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E50018"))) PPC_WEAK_FUNC(sub_82E50018);
PPC_FUNC_IMPL(__imp__sub_82E50018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e5002c
	if (!ctx.cr6.eq) goto loc_82E5002C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E5002C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d80a20
	sub_82D80A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E50034"))) PPC_WEAK_FUNC(sub_82E50034);
PPC_FUNC_IMPL(__imp__sub_82E50034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E50038"))) PPC_WEAK_FUNC(sub_82E50038);
PPC_FUNC_IMPL(__imp__sub_82E50038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e5004c
	if (!ctx.cr6.eq) goto loc_82E5004C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82E5004C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82d80a68
	sub_82D80A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E50054"))) PPC_WEAK_FUNC(sub_82E50054);
PPC_FUNC_IMPL(__imp__sub_82E50054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

