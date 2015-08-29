#pragma once

/* should be auto-generated by ffasn1c, but isn't :( */
enum hnbap_procedure_code {
	HNBAP_PC_HNBRegister		= 1,
	HNBAP_PC_HNBDe_Register 	= 2,
	HNBAP_PC_UERegister		= 3,
	HNBAP_PC_UEDe_Register		= 4,
	HNBAP_PC_ErrorIndication	= 5,
	HNBAP_PC_privateMessage		= 6,
	HNBAP_PC_CSGMembershipUpdate	= 7,
	HNBAP_PC_TNLUpdate		= 9,
	HNBAP_PC_HNBConfigTransfer	= 10,
	HNBAP_PC_RelocationComplete	= 11,
	HNBAP_PC_U_RNTIQuery		= 14,
};

/* should be auto-generated by ffasn1c, but isn't :( */
enum hnbap_iei {
	HNBAP_IEI_Cause				= 1,
	HNBAP_IEI_CriticalityDiagnostics	= 2,
	HNBAP_IEI_HNB_Identity			= 3,
	HNBAP_IEI_Context_ID			= 4,
	HNBAP_IEI_UE_Identity			= 5,
	HNBAP_IEI_LAC				= 6,
	HNBAP_IEI_RAC				= 7,
	HNBAP_IEI_HNB_Location_Information	= 8,
	HNBAP_IEI_PLMNidentity			= 9,
	HNBAP_IEI_SAC				= 10,
	HNBAP_IEI_CellIdentity			= 11,
	HNBAP_IEI_RegistrationCause		= 12,
	HNBAP_IEI_UE_Capabilities		= 13,
	HNBAP_IEI_RNC_ID			= 14,
	HNBAP_IEI_CSG_ID			= 15,
	HNBAP_IEI_BackoffTimer			= 16,
	HNBAP_IEI_HNB_Internet_Information	= 17,
	HNBAP_IEI_HNB_Cell_Acces_Mode		= 18,
	HNBAP_IEI_MuxPortNumber			= 19,
	HNBAP_IEI_Service_Area_For_Broadcast	= 20,
	HNBAP_IEI_CSGMembershipStatus		= 21,
	HNBAP_IEI_RABList			= 22,
	HNBAP_IEI_HNBConfigInfo			= 23,
	HNBAP_IEI_AccessResult			= 25,
	HNBAP_IEI_Update_cause			= 26,
	HNBAP_IEI_NeighborInfoList		= 27,
	HNBAP_IEI_NeighborInfoRequestList	= 28,
	HNBAP_IEI_Iurh_Signalling_TNL_Address	= 29,
	HNBAP_IEI_PSC				= 30,
	HNBAP_IEI_HNB_Cell_Identifier		= 31,
	HNBAP_IEI_HNB_Tunnel_Information	= 41,
	HNBAP_IEI_CELL_FACHMobilitySupport	= 42,
	HNBAP_IEI_S_RNTIPrefix			= 43,
	HNBAP_IEI_S_RNTIPrefix			= 43,
	/* FIXME */
};