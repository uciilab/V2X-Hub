/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "BSMcoreData.h"

asn_TYPE_member_t asn_MBR_BSMcoreData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, secMark),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secMark"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, lat),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, Long),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"long"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, elev),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Elevation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elev"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, accuracy),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accuracy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, transmission),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransmissionState,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmission"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, speed),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Speed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, heading),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, angle),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"angle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, accelSet),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accelSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, brakes),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BrakeSystemStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"brakes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSMcoreData, size),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleSize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"size"
		},
};
static const ber_tlv_tag_t asn_DEF_BSMcoreData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BSMcoreData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* secMark */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lat */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* elev */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* accuracy */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* transmission */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* angle */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* accelSet */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* brakes */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* size */
};
asn_SEQUENCE_specifics_t asn_SPC_BSMcoreData_specs_1 = {
	sizeof(struct BSMcoreData),
	offsetof(struct BSMcoreData, _asn_ctx),
	asn_MAP_BSMcoreData_tag2el_1,
	14,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BSMcoreData = {
	"BSMcoreData",
	"BSMcoreData",
	&asn_OP_SEQUENCE,
	asn_DEF_BSMcoreData_tags_1,
	sizeof(asn_DEF_BSMcoreData_tags_1)
		/sizeof(asn_DEF_BSMcoreData_tags_1[0]), /* 1 */
	asn_DEF_BSMcoreData_tags_1,	/* Same as above */
	sizeof(asn_DEF_BSMcoreData_tags_1)
		/sizeof(asn_DEF_BSMcoreData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BSMcoreData_1,
	14,	/* Elements count */
	&asn_SPC_BSMcoreData_specs_1	/* Additional specs */
};

