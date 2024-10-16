#include "Guitar.h"

Guitar::Guitar()
    : _tuning (Tuning()), _fretCount (CONSTANTS::DEFAULT_FRET_COUNT)
{
    _pressedDownFrets = new uint8_t[_tuning.getStringCount()] { 0 };
}

std::string Guitar::toString()
{
    std::string guitarString { "" };

    for (int i = 0; i < getStringCount(); i++) {
        guitarString += getString(i).toString();
        guitarString += "\n";
    }

    return guitarString;
}

Note& Guitar::getString(const uint8_t& stringNumber) const
{
    if (stringNumber > _tuning.getStringCount())
        throw std::runtime_error("String number too high in Guitar::getString");
    
    return _tuning.getNote(stringNumber); // TODO: pressed frets don't currently change note
}

uint8_t Guitar::getStringCount() const
{
    return _tuning.getStringCount();
}

void Guitar::pressFret(const uint8_t& stringNumber, const uint8_t& fretNumber)
{
    if (stringNumber >= getStringCount())
        throw std::runtime_error("String number too high in Guitar::pressFret");
    else if (fretNumber >= getFretCount())
        throw std::runtime_error("Fret number too high in Guitar::pressFret");

    _pressedDownFrets[stringNumber] = fretNumber;
}

