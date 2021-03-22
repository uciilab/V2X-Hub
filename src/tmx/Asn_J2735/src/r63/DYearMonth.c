/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "DYearMonth.h"

static asn_TYPE_member_t asn_MBR_DYearMonth_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DYearMonth, year),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"year"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DYearMonth, month),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DMonth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"month"
		},
};
static const ber_tlv_tag_t asn_DEF_DYearMonth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DYearMonth_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* year */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* month */
};
static asn_SEQUENCE_specifics_t asn_SPC_DYearMonth_specs_1 = {
	sizeof(struct DYearMonth),
	offsetof(struct DYearMonth, _asn_ctx),
	asn_MAP_DYearMonth_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DYearMonth = {
	"DYearMonth",
	"DYearMonth",
	&asn_OP_SEQUENCE,
	asn_DEF_DYearMonth_tags_1,
	sizeof(asn_DEF_DYearMonth_tags_1)
		/sizeof(asn_DEF_DYearMonth_tags_1[0]), /* 1 */
	asn_DEF_DYearMonth_tags_1,	/* Same as above */
	sizeof(asn_DEF_DYearMonth_tags_1)
		/sizeof(asn_DEF_DYearMonth_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DYearMonth_1,
	2,	/* Elements count */
	&asn_SPC_DYearMonth_specs_1	/* Additional specs */
};

