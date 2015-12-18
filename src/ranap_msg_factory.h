#pragma once 

/*! \brief generate RANAP DIRECT TRANSFER message */
struct msgb *ranap_new_msg_dt(uint8_t sapi, const uint8_t *nas, unsigned int nas_len);

/*! \brief generate RANAP SECURITY MODE COMMAND message */
struct msgb *ranap_new_msg_sec_mod_cmd(const uint8_t *ik, const uint8_t *ck);

/*! \brief generate RANAP COMMON ID message */
struct msgb *ranap_new_msg_common_id(const char *imsi);

/*! \brief generate RANAP IU RELEASE COMMAND message */
struct msgb *ranap_new_msg_iu_rel_cmd(const RANAP_Cause_t *cause_in);

/*! \brief generate RANAP PAGING COMMAND message */
struct msgb *ranap_new_msg_paging_cmd(const char *imsi, const uint32_t *tmsi, int is_ps, uint32_t cause);

/*! \brief generate RANAP RAB ASSIGNMENT REQUEST message for CS (voice) */
struct msgb *ranap_new_msg_rab_assign_voice(uint8_t rab_id, uint32_t rtp_ip, uint16_t rtp_port);

/*! \brief generate RANAP RAB ASSIGNMENT REQUEST message for PS (data) */
struct msgb *ranap_new_msg_rab_assign_data(uint8_t rab_id, uint32_t gtp_ip, uint32_t gtp_tei);
