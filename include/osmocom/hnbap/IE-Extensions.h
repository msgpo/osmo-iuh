/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_IE_Extensions_H_
#define	_IE_Extensions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IE;

/* IE-Extensions */
typedef struct IE_Extensions {
	A_SEQUENCE_OF(struct IE) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IE_Extensions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IE_Extensions;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <osmocom/hnbap/IE.h>

#endif	/* _IE_Extensions_H_ */
#include <asn_internal.h>
