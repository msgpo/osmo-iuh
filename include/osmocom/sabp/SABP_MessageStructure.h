/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#ifndef	_SABP_MessageStructure_H_
#define	_SABP_MessageStructure_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <osmocom/sabp/SABP_ProtocolIE-ID.h>
#include <osmocom/sabp/SABP_RepetitionNumber1.h>
#include <osmocom/sabp/SABP_IE-Extensions.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_MessageStructure */
typedef struct SABP_MessageStructure {
	A_SEQUENCE_OF(struct MemberA {
		SABP_ProtocolIE_ID_t	 iE_ID;
		SABP_RepetitionNumber1_t	*repetitionNumber	/* OPTIONAL */;
		SABP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_MessageStructure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_MessageStructure;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_MessageStructure_H_ */
#include <asn_internal.h>
