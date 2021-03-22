/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "SpeedProfile.h"

asn_TYPE_member_t asn_MBR_SpeedProfile_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedProfile, speedReports),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedProfileMeasurementList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedReports"
		},
};
static const ber_tlv_tag_t asn_DEF_SpeedProfile_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SpeedProfile_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* speedReports */
};
asn_SEQUENCE_specifics_t asn_SPC_SpeedProfile_specs_1 = {
	sizeof(struct SpeedProfile),
	offsetof(struct SpeedProfile, _asn_ctx),
	asn_MAP_SpeedProfile_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SpeedProfile = {
	"SpeedProfile",
	"SpeedProfile",
	&asn_OP_SEQUENCE,
	asn_DEF_SpeedProfile_tags_1,
	sizeof(asn_DEF_SpeedProfile_tags_1)
		/sizeof(asn_DEF_SpeedProfile_tags_1[0]), /* 1 */
	asn_DEF_SpeedProfile_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedProfile_tags_1)
		/sizeof(asn_DEF_SpeedProfile_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SpeedProfile_1,
	1,	/* Elements count */
	&asn_SPC_SpeedProfile_specs_1	/* Additional specs */
};

