/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_TestMessage10_H_
#define	_TestMessage10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Header;
struct Reg_BasicSafetyMessage;

/* TestMessage10 */
typedef struct TestMessage10 {
	struct Header	*header;	/* OPTIONAL */
	struct Reg_BasicSafetyMessage	*regional;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestMessage10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestMessage10;
extern asn_SEQUENCE_specifics_t asn_SPC_TestMessage10_specs_1;
extern asn_TYPE_member_t asn_MBR_TestMessage10_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Header.h"
#include "RegionalExtension-BasicSafetyMessage.h"

#endif	/* _TestMessage10_H_ */
#include "asn_internal.h"
