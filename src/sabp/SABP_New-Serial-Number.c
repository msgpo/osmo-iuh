/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 */

#include <osmocom/sabp/SABP_New-Serial-Number.h>

int
SABP_New_Serial_Number_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_SABP_Serial_Number.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using SABP_Serial_Number,
 * so here we adjust the DEF accordingly.
 */
static void
SABP_New_Serial_Number_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_SABP_Serial_Number.free_struct;
	td->print_struct   = asn_DEF_SABP_Serial_Number.print_struct;
	td->check_constraints = asn_DEF_SABP_Serial_Number.check_constraints;
	td->ber_decoder    = asn_DEF_SABP_Serial_Number.ber_decoder;
	td->der_encoder    = asn_DEF_SABP_Serial_Number.der_encoder;
	td->xer_decoder    = asn_DEF_SABP_Serial_Number.xer_decoder;
	td->xer_encoder    = asn_DEF_SABP_Serial_Number.xer_encoder;
	td->uper_decoder   = asn_DEF_SABP_Serial_Number.uper_decoder;
	td->uper_encoder   = asn_DEF_SABP_Serial_Number.uper_encoder;
	td->aper_decoder   = asn_DEF_SABP_Serial_Number.aper_decoder;
	td->aper_encoder   = asn_DEF_SABP_Serial_Number.aper_encoder;
	/* The next four lines are here because of -fknown-extern-type */
	td->tags           = asn_DEF_SABP_Serial_Number.tags;
	td->tags_count     = asn_DEF_SABP_Serial_Number.tags_count;
	td->all_tags       = asn_DEF_SABP_Serial_Number.all_tags;
	td->all_tags_count = asn_DEF_SABP_Serial_Number.all_tags_count;
	/* End of these lines */
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_SABP_Serial_Number.per_constraints;
	td->elements       = asn_DEF_SABP_Serial_Number.elements;
	td->elements_count = asn_DEF_SABP_Serial_Number.elements_count;
	td->specifics      = asn_DEF_SABP_Serial_Number.specifics;
}

void
SABP_New_Serial_Number_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SABP_New_Serial_Number_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SABP_New_Serial_Number_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SABP_New_Serial_Number_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SABP_New_Serial_Number_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SABP_New_Serial_Number_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SABP_New_Serial_Number_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SABP_New_Serial_Number_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
SABP_New_Serial_Number_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
SABP_New_Serial_Number_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SABP_New_Serial_Number_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_TYPE_descriptor_t asn_DEF_SABP_New_Serial_Number = {
	"SABP_New-Serial-Number",
	"SABP_New-Serial-Number",
	SABP_New_Serial_Number_free,
	SABP_New_Serial_Number_print,
	SABP_New_Serial_Number_constraint,
	SABP_New_Serial_Number_decode_ber,
	SABP_New_Serial_Number_encode_der,
	SABP_New_Serial_Number_decode_xer,
	SABP_New_Serial_Number_encode_xer,
	SABP_New_Serial_Number_decode_uper,
	SABP_New_Serial_Number_encode_uper,
	SABP_New_Serial_Number_decode_aper,
	SABP_New_Serial_Number_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

