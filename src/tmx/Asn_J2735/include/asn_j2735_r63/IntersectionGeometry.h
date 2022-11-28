/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_IntersectionGeometry_H_
#define	_IntersectionGeometry_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DescriptiveName.h"
#include "IntersectionReferenceID.h"
#include "DSRC_MsgCount.h"
#include "Position3D.h"
#include "LaneWidth.h"
#include "LaneList.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedLimitList;
struct PreemptPriorityList;
struct Reg_BasicSafetyMessage;

/* IntersectionGeometry */
typedef struct IntersectionGeometry {
	DescriptiveName_t	*name;	/* OPTIONAL */
	IntersectionReferenceID_t	 id;
	DSRC_MsgCount_t	 revision;
	Position3D_t	 refPoint;
	LaneWidth_t	*laneWidth;	/* OPTIONAL */
	struct SpeedLimitList	*speedLimits;	/* OPTIONAL */
	LaneList_t	 laneSet;
	struct PreemptPriorityList	*preemptPriorityData;	/* OPTIONAL */
	struct IntersectionGeometry__regional {
		A_SEQUENCE_OF(struct Reg_BasicSafetyMessage) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntersectionGeometry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntersectionGeometry;
extern asn_SEQUENCE_specifics_t asn_SPC_IntersectionGeometry_specs_1;
extern asn_TYPE_member_t asn_MBR_IntersectionGeometry_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedLimitList.h"
#include "PreemptPriorityList.h"
#include "RegionalExtension-BasicSafetyMessage.h"

#endif	/* _IntersectionGeometry_H_ */
#include "asn_internal.h"
