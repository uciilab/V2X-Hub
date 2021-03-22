/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_SpeedProfileMeasurement_H_
#define	_SpeedProfileMeasurement_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GrossSpeed.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpeedProfileMeasurement */
typedef GrossSpeed_t	 SpeedProfileMeasurement_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedProfileMeasurement_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedProfileMeasurement;
asn_struct_free_f SpeedProfileMeasurement_free;
asn_struct_print_f SpeedProfileMeasurement_print;
asn_constr_check_f SpeedProfileMeasurement_constraint;
ber_type_decoder_f SpeedProfileMeasurement_decode_ber;
der_type_encoder_f SpeedProfileMeasurement_encode_der;
xer_type_decoder_f SpeedProfileMeasurement_decode_xer;
xer_type_encoder_f SpeedProfileMeasurement_encode_xer;
oer_type_decoder_f SpeedProfileMeasurement_decode_oer;
oer_type_encoder_f SpeedProfileMeasurement_encode_oer;
per_type_decoder_f SpeedProfileMeasurement_decode_uper;
per_type_encoder_f SpeedProfileMeasurement_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedProfileMeasurement_H_ */
#include "asn_internal.h"
