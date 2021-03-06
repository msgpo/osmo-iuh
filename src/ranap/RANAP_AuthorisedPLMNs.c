/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#include <osmocom/ranap/RANAP_AuthorisedPLMNs.h>

static asn_per_constraints_t asn_PER_type_RANAP_AuthorisedPLMNs_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1l,  32l }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MemberC_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MemberC, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_PLMNidentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pLMNidentity"
		},
	{ ATF_POINTER, 2, offsetof(struct MemberC, authorisedSNAsList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_AuthorisedSNAs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"authorisedSNAsList"
		},
	{ ATF_POINTER, 1, offsetof(struct MemberC, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_MemberC_oms_2[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_MemberC_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MemberC_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* authorisedSNAsList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_MemberC_specs_2 = {
	sizeof(struct MemberC),
	offsetof(struct MemberC, _asn_ctx),
	asn_MAP_MemberC_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_MemberC_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_MemberC_2 = {
	"SEQUENCE",
	"SEQUENCE",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MemberC_tags_2,
	sizeof(asn_DEF_MemberC_tags_2)
		/sizeof(asn_DEF_MemberC_tags_2[0]), /* 1 */
	asn_DEF_MemberC_tags_2,	/* Same as above */
	sizeof(asn_DEF_MemberC_tags_2)
		/sizeof(asn_DEF_MemberC_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MemberC_2,
	3,	/* Elements count */
	&asn_SPC_MemberC_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RANAP_AuthorisedPLMNs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MemberC_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RANAP_AuthorisedPLMNs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RANAP_AuthorisedPLMNs_specs_1 = {
	sizeof(struct RANAP_AuthorisedPLMNs),
	offsetof(struct RANAP_AuthorisedPLMNs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_AuthorisedPLMNs = {
	"RANAP_AuthorisedPLMNs",
	"RANAP_AuthorisedPLMNs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RANAP_AuthorisedPLMNs_tags_1,
	sizeof(asn_DEF_RANAP_AuthorisedPLMNs_tags_1)
		/sizeof(asn_DEF_RANAP_AuthorisedPLMNs_tags_1[0]), /* 1 */
	asn_DEF_RANAP_AuthorisedPLMNs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_AuthorisedPLMNs_tags_1)
		/sizeof(asn_DEF_RANAP_AuthorisedPLMNs_tags_1[0]), /* 1 */
	&asn_PER_type_RANAP_AuthorisedPLMNs_constr_1,
	asn_MBR_RANAP_AuthorisedPLMNs_1,
	1,	/* Single element */
	&asn_SPC_RANAP_AuthorisedPLMNs_specs_1	/* Additional specs */
};

