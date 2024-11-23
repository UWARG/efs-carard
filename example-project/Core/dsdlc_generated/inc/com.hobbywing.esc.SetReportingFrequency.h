

#pragma once
#include "../inc/com.hobbywing.esc.SetReportingFrequency_req.h"
#include "../inc/com.hobbywing.esc.SetReportingFrequency_res.h"

#define COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_ID 214
#define COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_SIGNATURE (0x1FD0404420983DEBULL)


#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SetReportingFrequency, COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_ID, COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_SIGNATURE, COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_RESPONSE_MAX_SIZE);
#endif