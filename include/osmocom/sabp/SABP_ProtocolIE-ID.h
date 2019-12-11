/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-CommonDataTypes"
 * 	found in "../../asn1/sabp/SABP-CommonDataTypes.asn"
 */

#ifndef	_SABP_ProtocolIE_ID_H_
#define	_SABP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SABP_ProtocolIE_ID {
	SABP_ProtocolIE_ID_id_Broadcast_Message_Content	= 0,
	SABP_ProtocolIE_ID_id_Category	= 1,
	SABP_ProtocolIE_ID_id_Cause	= 2,
	SABP_ProtocolIE_ID_id_Data_Coding_Scheme	= 4,
	SABP_ProtocolIE_ID_id_Failure_List	= 5,
	SABP_ProtocolIE_ID_id_Message_Identifier	= 6,
	SABP_ProtocolIE_ID_id_New_Serial_Number	= 7,
	SABP_ProtocolIE_ID_id_Number_of_Broadcasts_Completed_List	= 8,
	SABP_ProtocolIE_ID_id_Number_of_Broadcasts_Requested	= 9,
	SABP_ProtocolIE_ID_id_Old_Serial_Number	= 10,
	SABP_ProtocolIE_ID_id_Radio_Resource_Loading_List	= 11,
	SABP_ProtocolIE_ID_id_Recovery_Indication	= 12,
	SABP_ProtocolIE_ID_id_Repetition_Period	= 13,
	SABP_ProtocolIE_ID_id_Serial_Number	= 14,
	SABP_ProtocolIE_ID_id_Service_Areas_List	= 15,
	SABP_ProtocolIE_ID_id_MessageStructure	= 16,
	SABP_ProtocolIE_ID_id_TypeOfError	= 17,
	SABP_ProtocolIE_ID_id_Paging_ETWS_Indicator	= 18,
	SABP_ProtocolIE_ID_id_Warning_Type	= 19,
	SABP_ProtocolIE_ID_id_WarningSecurityInfo	= 20,
	SABP_ProtocolIE_ID_id_Broadcast_Message_Content_Validity_Indicator	= 21
} e_SABP_ProtocolIE_ID;

/* SABP_ProtocolIE-ID */
typedef long	 SABP_ProtocolIE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_ProtocolIE_ID;
asn_struct_free_f SABP_ProtocolIE_ID_free;
asn_struct_print_f SABP_ProtocolIE_ID_print;
asn_constr_check_f SABP_ProtocolIE_ID_constraint;
ber_type_decoder_f SABP_ProtocolIE_ID_decode_ber;
der_type_encoder_f SABP_ProtocolIE_ID_encode_der;
xer_type_decoder_f SABP_ProtocolIE_ID_decode_xer;
xer_type_encoder_f SABP_ProtocolIE_ID_encode_xer;
per_type_decoder_f SABP_ProtocolIE_ID_decode_uper;
per_type_encoder_f SABP_ProtocolIE_ID_encode_uper;
per_type_decoder_f SABP_ProtocolIE_ID_decode_aper;
per_type_encoder_f SABP_ProtocolIE_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_ProtocolIE_ID_H_ */
#include <asn_internal.h>