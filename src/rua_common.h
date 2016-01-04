#pragma once

#include <asn_application.h>

#include <osmocom/osmo-iuh/rua/RUA_Ansi-41-IDNNS.h>
#include <osmocom/osmo-iuh/rua/RUA_CN-DomainIndicator.h>
#include <osmocom/osmo-iuh/rua/RUA_CSGMembershipStatus.h>
#include <osmocom/osmo-iuh/rua/RUA_Cause.h>
#include <osmocom/osmo-iuh/rua/RUA_CauseMisc.h>
#include <osmocom/osmo-iuh/rua/RUA_CauseProtocol.h>
#include <osmocom/osmo-iuh/rua/RUA_CauseRadioNetwork.h>
#include <osmocom/osmo-iuh/rua/RUA_CauseTransport.h>
#include <osmocom/osmo-iuh/rua/RUA_Connect.h>
#include <osmocom/osmo-iuh/rua/RUA_ConnectionlessTransfer.h>
#include <osmocom/osmo-iuh/rua/RUA_Context-ID.h>
#include <osmocom/osmo-iuh/rua/RUA_Criticality.h>
#include <osmocom/osmo-iuh/rua/RUA_CriticalityDiagnostics-IE-List.h>
#include <osmocom/osmo-iuh/rua/RUA_CriticalityDiagnostics.h>
#include <osmocom/osmo-iuh/rua/RUA_DirectTransfer.h>
#include <osmocom/osmo-iuh/rua/RUA_Disconnect.h>
#include <osmocom/osmo-iuh/rua/RUA_ErrorIndication.h>
#include <osmocom/osmo-iuh/rua/RUA_Establishment-Cause.h>
#include <osmocom/osmo-iuh/rua/RUA_Gsm-map-IDNNS.h>
#include <osmocom/osmo-iuh/rua/RUA_IE-Extensions.h>
#include <osmocom/osmo-iuh/rua/RUA_IE.h>
#include <osmocom/osmo-iuh/rua/RUA_InitiatingMessage.h>
#include <osmocom/osmo-iuh/rua/RUA_IntraDomainNasNodeSelector.h>
#include <osmocom/osmo-iuh/rua/RUA_Presence.h>
#include <osmocom/osmo-iuh/rua/RUA_PrivateIE-ID.h>
#include <osmocom/osmo-iuh/rua/RUA_PrivateMessage.h>
#include <osmocom/osmo-iuh/rua/RUA_ProcedureCode.h>
#include <osmocom/osmo-iuh/rua/RUA_ProtocolIE-ID.h>
#include <osmocom/osmo-iuh/rua/RUA_RANAP-Message.h>
#include <osmocom/osmo-iuh/rua/RUA_RUA-PDU.h>
#include <osmocom/osmo-iuh/rua/RUA_RoutingParameter.h>
#include <osmocom/osmo-iuh/rua/RUA_SuccessfulOutcome.h>
#include <osmocom/osmo-iuh/rua/RUA_TriggeringMessage.h>
#include <osmocom/osmo-iuh/rua/RUA_TypeOfError.h>
#include <osmocom/osmo-iuh/rua/RUA_UnsuccessfulOutcome.h>

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>

#define RUA_DEBUG(x, args ...) DEBUGP(0, x, ## args)

extern int asn1_xer_print;

struct msgb *rua_generate_initiating_message(
					e_RUA_ProcedureCode procedureCode,
					RUA_Criticality_t criticality,
					asn_TYPE_descriptor_t * td, void *sptr);

struct msgb *rua_generate_successful_outcome(
					   e_RUA_ProcedureCode procedureCode,
					   RUA_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

struct msgb *rua_generate_unsuccessful_outcome(
					   e_RUA_ProcedureCode procedureCode,
					   RUA_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

RUA_IE_t *rua_new_ie(RUA_ProtocolIE_ID_t id, RUA_Criticality_t criticality,
		     asn_TYPE_descriptor_t *type, void *sptr);

char *rua_cause_str(RUA_Cause_t *cause);
