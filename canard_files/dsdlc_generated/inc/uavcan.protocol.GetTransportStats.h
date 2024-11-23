

#pragma once
#include "../inc/uavcan.protocol.GetTransportStats_req.h"
#include "../inc/uavcan.protocol.GetTransportStats_res.h"

#define UAVCAN_PROTOCOL_GETTRANSPORTSTATS_ID 4
#define UAVCAN_PROTOCOL_GETTRANSPORTSTATS_SIGNATURE (0xBE6F76A7EC312B04ULL)


#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(uavcan_protocol_GetTransportStats, UAVCAN_PROTOCOL_GETTRANSPORTSTATS_ID, UAVCAN_PROTOCOL_GETTRANSPORTSTATS_SIGNATURE, UAVCAN_PROTOCOL_GETTRANSPORTSTATS_REQUEST_MAX_SIZE, UAVCAN_PROTOCOL_GETTRANSPORTSTATS_RESPONSE_MAX_SIZE);
#endif
