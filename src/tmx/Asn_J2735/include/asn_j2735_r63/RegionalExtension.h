/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RegionalExtension_H_
#define	_RegionalExtension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RegionId.h"
#include "ANY.h"
#include "asn_ioc.h"
#include "OPEN_TYPE.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RegionalExtension_99P0__regExtValue_PR {
	RegionalExtension_99P0__regExtValue_PR_NOTHING,	/* No components present */
	
} RegionalExtension_99P0__regExtValue_PR;

/* RegionalExtension */
typedef struct RegionalExtension_99P0 {
	RegionId_t	 regionId;
	struct RegionalExtension_99P0__regExtValue {
		RegionalExtension_99P0__regExtValue_PR present;
		union RegionalExtension_99P0__regExtValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} regExtValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegionalExtension_99P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionalExtension_99P0;
extern asn_SEQUENCE_specifics_t asn_SPC_RegionalExtension_99P0_specs_1;
extern asn_TYPE_member_t asn_MBR_RegionalExtension_99P0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RegionalExtension_H_ */
#include "asn_internal.h"
