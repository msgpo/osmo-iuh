/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#ifndef	_RANAP_RAB_IE_ContainerPairList_H_
#define	_RANAP_RAB_IE_ContainerPairList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANAP_ProtocolIE-FieldPair.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_RAB-IE-ContainerPairList */
typedef struct RANAP_RAB_IE_ContainerPairList {
	A_SEQUENCE_OF(RANAP_ProtocolIE_FieldPair_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_RAB_IE_ContainerPairList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_IE_ContainerPairList;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RAB_IE_ContainerPairList_H_ */
#include <asn_internal.h>