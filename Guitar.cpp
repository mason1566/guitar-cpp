#include "Guitar.h"

Guitar::Guitar()
    : _tuning (Tuning())
{
    _pressedDownFrets = new uint8_t[_tuning.getStringCount()] { 0 };
}