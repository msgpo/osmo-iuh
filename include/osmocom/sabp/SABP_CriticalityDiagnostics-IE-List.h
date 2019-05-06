/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#ifndef	_SABP_CriticalityDiagnostics_IE_List_H_
#define	_SABP_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <osmocom/sabp/SABP_Criticality.h>
#include <osmocom/sabp/SABP_ProtocolIE-ID.h>
#include <osmocom/sabp/SABP_RepetitionNumber0.h>
#include <osmocom/sabp/SABP_IE-Extensions.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_CriticalityDiagnostics-IE-List */
typedef struct SABP_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(struct Member {
		SABP_Criticality_t	 iECriticality;
		SABP_ProtocolIE_ID_t	 iE_ID;
		SABP_RepetitionNumber0_t	*repetitionNumber	/* OPTIONAL */;
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
} SABP_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_CriticalityDiagnostics_IE_List;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
