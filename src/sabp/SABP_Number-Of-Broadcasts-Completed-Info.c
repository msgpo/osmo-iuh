/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#include <osmocom/sabp/SABP_Number-Of-Broadcasts-Completed-Info.h>

int
SABP_Number_Of_Broadcasts_Completed_Info_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
SABP_Number_Of_Broadcasts_Completed_Info_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SABP_Number_Of_Broadcasts_Completed_Info_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
SABP_Number_Of_Broadcasts_Completed_Info_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SABP_Number_Of_Broadcasts_Completed_Info_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_SABP_Number_Of_Broadcasts_Completed_Info_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0l,  1l }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SABP_Number_Of_Broadcasts_Completed_Info_value2enum_1[] = {
	{ 0,	8,	"overflow" },
	{ 1,	7,	"unknown" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SABP_Number_Of_Broadcasts_Completed_Info_enum2value_1[] = {
	0,	/* overflow(0) */
	1	/* unknown(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_SABP_Number_Of_Broadcasts_Completed_Info_specs_1 = {
	asn_MAP_SABP_Number_Of_Broadcasts_Completed_Info_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SABP_Number_Of_Broadcasts_Completed_Info_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info = {
	"SABP_Number-Of-Broadcasts-Completed-Info",
	"SABP_Number-Of-Broadcasts-Completed-Info",
	SABP_Number_Of_Broadcasts_Completed_Info_free,
	SABP_Number_Of_Broadcasts_Completed_Info_print,
	SABP_Number_Of_Broadcasts_Completed_Info_constraint,
	SABP_Number_Of_Broadcasts_Completed_Info_decode_ber,
	SABP_Number_Of_Broadcasts_Completed_Info_encode_der,
	SABP_Number_Of_Broadcasts_Completed_Info_decode_xer,
	SABP_Number_Of_Broadcasts_Completed_Info_encode_xer,
	SABP_Number_Of_Broadcasts_Completed_Info_decode_uper,
	SABP_Number_Of_Broadcasts_Completed_Info_encode_uper,
	SABP_Number_Of_Broadcasts_Completed_Info_decode_aper,
	SABP_Number_Of_Broadcasts_Completed_Info_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1,
	sizeof(asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1)
		/sizeof(asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1[0]), /* 1 */
	asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1)
		/sizeof(asn_DEF_SABP_Number_Of_Broadcasts_Completed_Info_tags_1[0]), /* 1 */
	&asn_PER_type_SABP_Number_Of_Broadcasts_Completed_Info_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SABP_Number_Of_Broadcasts_Completed_Info_specs_1	/* Additional specs */
};

