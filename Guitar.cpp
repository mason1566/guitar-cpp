#include "Guitar.h"

class Guitar
{
public:
    Guitar(const uint8_t& stringCount = CONSTANTS::DEFAULT_STRING_COUNT, const uint8_t& fretCount = CONSTANTS::DEFAULT_FRET_COUNT)
    {
        // R

    }

private:
    std::vector<Note> _openNotes;
    std::vector<uint8_t> _pressedDownFrets; // A vector of the same size as _openNotes that denotes whether a corresponding string is being fretted (and where)
};