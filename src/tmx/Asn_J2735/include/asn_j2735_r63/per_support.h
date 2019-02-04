/*
 * Copyright (c) 2005-2014 Lev Walkin <vlm@lionet.info>.
 * All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef	_PER_SUPPORT_H_
#define	_PER_SUPPORT_H_

#include <asn_system.h>		/* Platform-specific types */
#include <asn_bit_data.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Pre-computed PER constraints.
 */
typedef struct asn_per_constraint_s {
	enum asn_per_constraint_flags {
		APC_UNCONSTRAINED	= 0x0,	/* No PER visible constraints */
		APC_SEMI_CONSTRAINED	= 0x1,	/* Constrained at "lb" */
		APC_CONSTRAINED		= 0x2,	/* Fully constrained */
		APC_EXTENSIBLE		= 0x4	/* May have extension */
	} flags;
	int  range_bits;		/* Full number of bits in the range */
	int  effective_bits;		/* Effective bits */
	long lower_bound;		/* "lb" value */
	long upper_bound;		/* "ub" value */
} asn_per_constraint_t;
typedef struct asn_per_constraints_s {
	asn_per_constraint_t value;
	asn_per_constraint_t size;
	int (*value2code)(unsigned int value);
	int (*code2value)(unsigned int code);
} asn_per_constraints_t;

/* Temporary compatibility layer. Will get removed. */
typedef struct asn_bit_data_s asn_per_data_t;
#define per_get_few_bits(data, bits)   asn_get_few_bits(data, bits)
#define per_get_undo(data, bits)   asn_get_undo(data, bits)
#define per_get_many_bits(data, dst, align, bits) \
    asn_get_many_bits(data, dst, align, bits)

/*
 * Get the length "n" from the Unaligned PER stream.
 */
ssize_t uper_get_length(asn_per_data_t *pd,
			int effective_bound_bits,
			int *repeat);

/*
 * Get the normally small length "n".
 */
ssize_t uper_get_nslength(asn_per_data_t *pd);

/*
 * Get the normally small non-negative whole number.
 */
ssize_t uper_get_nsnnwn(asn_per_data_t *pd);

/* X.691-2008/11, #11.5.6 */
int uper_get_constrained_whole_number(asn_per_data_t *pd, unsigned long *v, int nbits);


/* Temporary compatibility layer. Will get removed. */
typedef struct asn_bit_outp_s asn_per_outp_t;
#define per_put_few_bits(out, bits, obits) asn_put_few_bits(out, bits, obits)
#define per_put_many_bits(out, src, nbits) asn_put_many_bits(out, src, nbits)
#define per_put_aligned_flush(out) asn_put_aligned_flush(out)

/* X.691-2008/11, #11.5 */
int uper_put_constrained_whole_number_s(asn_per_outp_t *po, long v, int nbits);
int uper_put_constrained_whole_number_u(asn_per_outp_t *po, unsigned long v, int nbits);

/*
 * Put the length "n" to the Unaligned PER stream.
 * This function returns the number of units which may be flushed
 * in the next units saving iteration.
 */
ssize_t uper_put_length(asn_per_outp_t *po, size_t whole_length);

/*
 * Put the normally small length "n" to the Unaligned PER stream.
 * Returns 0 or -1.
 */
int uper_put_nslength(asn_per_outp_t *po, size_t length);

/*
 * Put the normally small non-negative whole number.
 */
int uper_put_nsnnwn(asn_per_outp_t *po, int n);

#ifdef __cplusplus
}
#endif

#endif	/* _PER_SUPPORT_H_ */
