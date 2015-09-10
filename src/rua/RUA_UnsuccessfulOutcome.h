/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-PDU"
 * 	found in "../../asn1/rua/RUA-PDU.asn"
 */

#ifndef	_RUA_UnsuccessfulOutcome_H_
#define	_RUA_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RUA_ProcedureCode.h"
#include "RUA_Criticality.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RUA_UnsuccessfulOutcome */
typedef struct RUA_UnsuccessfulOutcome {
	RUA_ProcedureCode_t	 procedureCode;
	RUA_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RUA_UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RUA_UnsuccessfulOutcome;

#ifdef __cplusplus
}
#endif

#endif	/* _RUA_UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
