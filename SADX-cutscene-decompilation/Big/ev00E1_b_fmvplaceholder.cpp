﻿#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00E1_b_fmvplaceholder(int state)
{
    switch (state) {
    case 1:
        EV_MsgW(90, (char*)"\aev00E1 Crash Movie\nNot ready yet."); // Original: "墜落ムービー\nまだできていません。".
        break;
    }
}