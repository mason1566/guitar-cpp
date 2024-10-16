#include "Tuning.h"

Tuning::Tuning() 
    : _stringCount (CONSTANTS::DEFAULT_STRING_COUNT)
{
    // Default E2 A2 D3 G3 B3 E4 Tuning
    _openNotes = new Note[_stringCount] { 
        Note(MusicalNote::E, 2), Note(MusicalNote::A, 2), Note(MusicalNote::D, 3),
        Note(MusicalNote::G, 3), Note(MusicalNote::B, 3), Note(MusicalNote::E, 4)
    };
}

Tuning::Tuning(const Note& S1, const Note& S2, const Note& S3, const Note& S4, const Note& S5, const Note& S6) 
    : _stringCount (CONSTANTS::DEFAULT_STRING_COUNT)
{
    _openNotes = new Note[_stringCount] { S1, S2, S3, S4, S5, S6 };
}

Note& Tuning::getNote(const uint8_t& stringNumber) const
{
    if (stringNumber >= _stringCount)
        throw std::runtime_error("stringNumber out of bounds in Tuning::getNote");

    return _openNotes[stringNumber];
}