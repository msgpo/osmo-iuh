/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-PDU"
 * 	found in "../../asn1/sabp/SABP-PDU.asn"
 */

#ifndef	_SABP_IE_H_
#define	_SABP_IE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/sabp/SABP_ProtocolIE-ID.h>
#include <osmocom/sabp/SABP_Criticality.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_IE */
typedef struct SABP_IE {
	SABP_ProtocolIE_ID_t	 id;
	SABP_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_IE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_IE;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_IE_H_ */
#include <asn_internal.h>
