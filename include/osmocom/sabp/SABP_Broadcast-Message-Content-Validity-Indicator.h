/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#ifndef	_SABP_Broadcast_Message_Content_Validity_Indicator_H_
#define	_SABP_Broadcast_Message_Content_Validity_Indicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SABP_Broadcast_Message_Content_Validity_Indicator {
	SABP_Broadcast_Message_Content_Validity_Indicator_broadcast_Message_Content_not_valid	= 0
	/*
	 * Enumeration is extensible
	 */
} e_SABP_Broadcast_Message_Content_Validity_Indicator;

/* SABP_Broadcast-Message-Content-Validity-Indicator */
typedef long	 SABP_Broadcast_Message_Content_Validity_Indicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_Broadcast_Message_Content_Validity_Indicator;
asn_struct_free_f SABP_Broadcast_Message_Content_Validity_Indicator_free;
asn_struct_print_f SABP_Broadcast_Message_Content_Validity_Indicator_print;
asn_constr_check_f SABP_Broadcast_Message_Content_Validity_Indicator_constraint;
ber_type_decoder_f SABP_Broadcast_Message_Content_Validity_Indicator_decode_ber;
der_type_encoder_f SABP_Broadcast_Message_Content_Validity_Indicator_encode_der;
xer_type_decoder_f SABP_Broadcast_Message_Content_Validity_Indicator_decode_xer;
xer_type_encoder_f SABP_Broadcast_Message_Content_Validity_Indicator_encode_xer;
per_type_decoder_f SABP_Broadcast_Message_Content_Validity_Indicator_decode_uper;
per_type_encoder_f SABP_Broadcast_Message_Content_Validity_Indicator_encode_uper;
per_type_decoder_f SABP_Broadcast_Message_Content_Validity_Indicator_decode_aper;
per_type_encoder_f SABP_Broadcast_Message_Content_Validity_Indicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_Broadcast_Message_Content_Validity_Indicator_H_ */
#include <asn_internal.h>
