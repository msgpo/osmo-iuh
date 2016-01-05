/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UTRANCellID_H_
#define	_UTRANCellID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/LAC.h>
#include <osmocom/hnbap/RAC.h>
#include <osmocom/hnbap/PLMNidentity.h>
#include <osmocom/hnbap/CellIdentity.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IE_Extensions;

/* UTRANCellID */
typedef struct UTRANCellID {
	LAC_t	 lAC;
	RAC_t	 rAC;
	PLMNidentity_t	 pLMNidentity;
	CellIdentity_t	 uTRANcellID;
	struct IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRANCellID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRANCellID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <osmocom/hnbap/IE-Extensions.h>

#endif	/* _UTRANCellID_H_ */
#include <asn_internal.h>