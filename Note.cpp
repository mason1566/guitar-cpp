#include "Note.h"

Note::Note()
{
    _note = MusicalNote::A;
    _octave = 4;
}

/// @brief Constructor definition for Note
/// @param note A Note enum representing one of the 12 notes
/// @param octave An unsigned integer representing the octave of our note.
/// Octave must be <= CONSTANTS::MAX_OCTAVE to be a viable note
Note::Note(const MusicalNote& note, const uint8_t& octave)
    : _note (note), _octave (octave) 
{
    if (octave > CONSTANTS::MAX_OCTAVE) {
        _octave = CONSTANTS::MAX_OCTAVE;
    }
}

/// @brief Constructor definition for Note
/// @param ordinal The integer representation of a note falling in the range of A0 to G10.
Note::Note(const uint8_t& ordinal)
{
    _octave = ordinal / CONSTANTS::NOTE_COUNT;
    if (_octave > CONSTANTS::MAX_OCTAVE)
        throw std::runtime_error("Note ordinal too high");

    _note = static_cast<MusicalNote>(ordinal % CONSTANTS::NOTE_COUNT);
}