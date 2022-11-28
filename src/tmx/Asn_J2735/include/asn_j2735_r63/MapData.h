/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_MapData_H_
#define	_MapData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "DSRC_MsgCount.h"
#include "LayerType.h"
#include "LayerID.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntersectionGeometryList;
struct RoadSegmentList;
struct DataParameters;
struct RestrictionClassList;
struct Reg_BasicSafetyMessage;

/* MapData */
typedef struct MapData {
	MinuteOfTheYear_t	*timeStamp;	/* OPTIONAL */
	DSRC_MsgCount_t	 msgIssueRevision;
	LayerType_t	*layerType;	/* OPTIONAL */
	LayerID_t	*layerID;	/* OPTIONAL */
	struct IntersectionGeometryList	*intersections;	/* OPTIONAL */
	struct RoadSegmentList	*roadSegments;	/* OPTIONAL */
	struct DataParameters	*dataParameters;	/* OPTIONAL */
	struct RestrictionClassList	*restrictionList;	/* OPTIONAL */
	struct MapData__regional {
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
} MapData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MapData;
extern asn_SEQUENCE_specifics_t asn_SPC_MapData_specs_1;
extern asn_TYPE_member_t asn_MBR_MapData_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntersectionGeometryList.h"
#include "RoadSegmentList.h"
#include "DataParameters.h"
#include "RestrictionClassList.h"
#include "RegionalExtension-BasicSafetyMessage.h"

#endif	/* _MapData_H_ */
#include "asn_internal.h"
