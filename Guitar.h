#ifndef GUITAR
#define GUITAR

#include <vector>
#include <string>

#include "Note.h"
#include "Tuning.h"

class Guitar
{
public:
    /// Creates a guitar with the default E2 A3 D3 G3 B4 E4 tuning and CONSTANTS::DEFAULT_FRET_COUNT frets
    Guitar();
    Guitar(const Tuning& tuning, const uint8_t& fretCount = CONSTANTS::DEFAULT_FRET_COUNT);

    ~Guitar()
    {
        delete[] _pressedDownFrets;
    };

    std::string toString();

    Note& getString(const uint8_t& stringNumber) const;

private:
    Tuning _tuning;
    uint8_t* _pressedDownFrets; // A vector of the same size as _openNotes that denotes whether a corresponding string is being fretted (and where)
};

#endif