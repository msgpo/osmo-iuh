/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-CommonDataTypes"
 * 	found in "../../asn1/sabp/SABP-CommonDataTypes.asn"
 */

#ifndef	_SABP_Presence_H_
#define	_SABP_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SABP_Presence {
	SABP_Presence_optional	= 0,
	SABP_Presence_conditional	= 1,
	SABP_Presence_mandatory	= 2
} e_SABP_Presence;

/* SABP_Presence */
typedef long	 SABP_Presence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_Presence;
asn_struct_free_f SABP_Presence_free;
asn_struct_print_f SABP_Presence_print;
asn_constr_check_f SABP_Presence_constraint;
ber_type_decoder_f SABP_Presence_decode_ber;
der_type_encoder_f SABP_Presence_encode_der;
xer_type_decoder_f SABP_Presence_decode_xer;
xer_type_encoder_f SABP_Presence_encode_xer;
per_type_decoder_f SABP_Presence_decode_uper;
per_type_encoder_f SABP_Presence_encode_uper;
per_type_decoder_f SABP_Presence_decode_aper;
per_type_encoder_f SABP_Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_Presence_H_ */
#include <asn_internal.h>