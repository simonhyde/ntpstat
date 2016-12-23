#ifndef __NTPSTAT_H_HEADER
#define __NTPSTAT_H_HEADER
#ifdef __cplusplus
extern "C" {
#endif
typedef struct
{
	int status; /* 0 synch, 1 unsynch, 2 unknown */
	float accuracy;
	int interval;
	int stratum;
} ntpstate_t;
void init_ntp_state();
int get_ntp_state (ntpstate_t * data);
#ifdef __cplusplus
}
#endif
#endif
