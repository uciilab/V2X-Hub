/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_ProbeDataManagement_H_
#define	_ProbeDataManagement_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "Sample.h"
#include "HeadingSlice.h"
#include "SecondOfTime.h"
#include "TermTime.h"
#include "TermDistance.h"
#include "constr_CHOICE.h"
#include "SnapshotTime.h"
#include "SnapshotDistance.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProbeDataManagement__term_PR {
	ProbeDataManagement__term_PR_NOTHING,	/* No components present */
	ProbeDataManagement__term_PR_termtime,
	ProbeDataManagement__term_PR_termDistance
} ProbeDataManagement__term_PR;
typedef enum ProbeDataManagement__snapshot_PR {
	ProbeDataManagement__snapshot_PR_NOTHING,	/* No components present */
	ProbeDataManagement__snapshot_PR_snapshotTime,
	ProbeDataManagement__snapshot_PR_snapshotDistance
} ProbeDataManagement__snapshot_PR;

/* Forward declarations */
struct VehicleStatusRequestList;
struct Reg_BasicSafetyMessage;

/* ProbeDataManagement */
typedef struct ProbeDataManagement {
	MinuteOfTheYear_t	*timeStamp;	/* OPTIONAL */
	Sample_t	 sample;
	HeadingSlice_t	 directions;
	struct ProbeDataManagement__term {
		ProbeDataManagement__term_PR present;
		union ProbeDataManagement__term_u {
			TermTime_t	 termtime;
			TermDistance_t	 termDistance;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} term;
	struct ProbeDataManagement__snapshot {
		ProbeDataManagement__snapshot_PR present;
		union ProbeDataManagement__snapshot_u {
			SnapshotTime_t	 snapshotTime;
			SnapshotDistance_t	 snapshotDistance;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} snapshot;
	SecondOfTime_t	 txInterval;
	struct VehicleStatusRequestList	*dataElements;	/* OPTIONAL */
	struct ProbeDataManagement__regional {
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
} ProbeDataManagement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProbeDataManagement;
extern asn_SEQUENCE_specifics_t asn_SPC_ProbeDataManagement_specs_1;
extern asn_TYPE_member_t asn_MBR_ProbeDataManagement_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleStatusRequestList.h"
#include "RegionalExtension-BasicSafetyMessage.h"

#endif	/* _ProbeDataManagement_H_ */
#include "asn_internal.h"
