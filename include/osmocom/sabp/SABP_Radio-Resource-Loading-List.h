/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#ifndef	_SABP_Radio_Resource_Loading_List_H_
#define	_SABP_Radio_Resource_Loading_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/sabp/SABP_Radio-Resource-Loading-List-Item.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_Radio-Resource-Loading-List */
typedef struct SABP_Radio_Resource_Loading_List {
	A_SEQUENCE_OF(SABP_Radio_Resource_Loading_List_Item_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_Radio_Resource_Loading_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_Radio_Resource_Loading_List;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_Radio_Resource_Loading_List_H_ */
#include <asn_internal.h>
