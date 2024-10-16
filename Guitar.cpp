#include "Guitar.h"

Guitar::Guitar()
    : _tuning (Tuning())
{
    _pressedDownFrets = new uint8_t[_tuning.getStringCount()] { 0 };
}

// std::string Guitar::toString()
// {
//     std::string guitarString { "" };

//     for (int i = 0; i < ) 
//     {

//     }

//     return ;
// }



Note& Guitar::getString(const uint8_t& stringNumber) const
{
    if (stringNumber > _tuning.getStringCount())
        throw std::runtime_error("String number too high");
    
    return _tuning.getNote(stringNumber);
}