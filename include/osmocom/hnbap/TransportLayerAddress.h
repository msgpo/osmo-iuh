/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_TransportLayerAddress_H_
#define	_TransportLayerAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TransportLayerAddress */
typedef BIT_STRING_t	 TransportLayerAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportLayerAddress;
asn_struct_free_f TransportLayerAddress_free;
asn_struct_print_f TransportLayerAddress_print;
asn_constr_check_f TransportLayerAddress_constraint;
ber_type_decoder_f TransportLayerAddress_decode_ber;
der_type_encoder_f TransportLayerAddress_encode_der;
xer_type_decoder_f TransportLayerAddress_decode_xer;
xer_type_encoder_f TransportLayerAddress_encode_xer;
per_type_decoder_f TransportLayerAddress_decode_uper;
per_type_encoder_f TransportLayerAddress_encode_uper;
per_type_decoder_f TransportLayerAddress_decode_aper;
per_type_encoder_f TransportLayerAddress_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransportLayerAddress_H_ */
#include <asn_internal.h>
