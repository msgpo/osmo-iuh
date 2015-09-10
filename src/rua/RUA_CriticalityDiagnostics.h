/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-IEs"
 * 	found in "../../asn1/rua/RUA-IEs.asn"
 */

#ifndef	_RUA_CriticalityDiagnostics_H_
#define	_RUA_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RUA_ProcedureCode.h"
#include "RUA_TriggeringMessage.h"
#include "RUA_Criticality.h"
#include "RUA_CriticalityDiagnostics-IE-List.h"
#include "RUA_IE-Extensions.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RUA_CriticalityDiagnostics */
typedef struct RUA_CriticalityDiagnostics {
	RUA_ProcedureCode_t	*procedureCode	/* OPTIONAL */;
	RUA_TriggeringMessage_t	*triggeringMessage	/* OPTIONAL */;
	RUA_Criticality_t	*procedureCriticality	/* OPTIONAL */;
	RUA_CriticalityDiagnostics_IE_List_t	*iEsCriticalityDiagnostics	/* OPTIONAL */;
	RUA_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RUA_CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RUA_CriticalityDiagnostics;

#ifdef __cplusplus
}
#endif

#endif	/* _RUA_CriticalityDiagnostics_H_ */
#include <asn_internal.h>
