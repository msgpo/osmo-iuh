/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-PDU"
 * 	found in "../../asn1/sabp/SABP-PDU.asn"
 */

#ifndef	_SABP_Reset_Complete_H_
#define	_SABP_Reset_Complete_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/sabp/SABP_IE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_Reset-Complete */
typedef struct SABP_Reset_Complete {
	struct reset_Complete_ies {
		A_SEQUENCE_OF(SABP_IE_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reset_Complete_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_Reset_Complete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_Reset_Complete;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_Reset_Complete_H_ */
#include <asn_internal.h>