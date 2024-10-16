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

    /// @brief Returns the count of guitar strings
    /// @return A real count of guitar strings. (1-based index)
    uint8_t getStringCount() const;

    /// @brief Sets a string to pressed at a given fret (thereby producing a new note). Expects 0-based indexes
    /// @param stringNumber A number representing the string. 
    /// @param fretNumber A number representing the fret number to press at. 0 indicates open-string
    void pressFret(const uint8_t& stringNumber, const uint8_t& fretNumber);

    /// @brief Returns the count of guitar frets
    /// @return A real count of guitar frets. (1-based index)
    uint8_t getFretCount() const { return _fretCount; };

private:
    Tuning _tuning;
    uint8_t* _pressedDownFrets; // A vector of the same size as _openNotes that denotes whether a corresponding string is being fretted (and where)
    uint8_t _fretCount;
};

#endif