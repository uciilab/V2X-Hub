/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_SignalRequestList_H_
#define	_SignalRequestList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignalRequestPackage;

/* SignalRequestList */
typedef struct SignalRequestList {
	A_SEQUENCE_OF(struct SignalRequestPackage) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalRequestList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalRequestList;
extern asn_SET_OF_specifics_t asn_SPC_SignalRequestList_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalRequestList_1[1];
extern asn_per_constraints_t asn_PER_type_SignalRequestList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignalRequestPackage.h"

#endif	/* _SignalRequestList_H_ */
#include "asn_internal.h"
