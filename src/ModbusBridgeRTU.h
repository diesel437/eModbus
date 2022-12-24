// =================================================================================================
// eModbus: Copyright 2020 by Michael Harwerth, Bert Melis and the contributors to eModbus
//               MIT license - see license.md for details
// =================================================================================================
#ifndef _MODBUS_BRIDGE_RTU_H
#define _MODBUS_BRIDGE_RTU_H
#include "options.h"
#include "ModbusServerRTU.h"
#ifndef PICO_RP2040
#include "ModbusBridgeTemp.h"
#endif
#include "RTUutils.h"

#ifndef PICO_RP2040
using ModbusBridgeRTU = ModbusBridge<ModbusServerRTU>;
#endif

#endif
