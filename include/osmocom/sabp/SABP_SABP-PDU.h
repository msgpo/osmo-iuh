/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-PDU"
 * 	found in "../../asn1/sabp/SABP-PDU.asn"
 */

#ifndef	_SABP_SABP_PDU_H_
#define	_SABP_SABP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/sabp/SABP_InitiatingMessage.h>
#include <osmocom/sabp/SABP_SuccessfulOutcome.h>
#include <osmocom/sabp/SABP_UnsuccessfulOutcome.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SABP_SABP_PDU_PR {
	SABP_SABP_PDU_PR_NOTHING,	/* No components present */
	SABP_SABP_PDU_PR_initiatingMessage,
	SABP_SABP_PDU_PR_successfulOutcome,
	SABP_SABP_PDU_PR_unsuccessfulOutcome,
	/* Extensions may appear below */
	
} SABP_SABP_PDU_PR;

/* SABP_SABP-PDU */
typedef struct SABP_SABP_PDU {
	SABP_SABP_PDU_PR present;
	union SABP_SABP_PDU_u {
		SABP_InitiatingMessage_t	 initiatingMessage;
		SABP_SuccessfulOutcome_t	 successfulOutcome;
		SABP_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_SABP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_SABP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_SABP_PDU_H_ */
#include <asn_internal.h>
