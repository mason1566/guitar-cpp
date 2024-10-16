#ifndef NOTE
#define NOTE

#include <iostream>
#include <string>

namespace CONSTANTS {
    namespace NOTES_SHARP {
        const std::string NOTE_NAMES[] { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
    }

    const uint8_t NOTE_COUNT { 12 };
    const uint8_t MIN_OCTAVE { 0 };
    const uint8_t MAX_OCTAVE { 10 }; // Max octave audible to humans is 10
    const uint8_t DEFAULT_STRING_COUNT { 6 };
    const uint8_t DEFAULT_FRET_COUNT { 16 };
    const uint8_t MIN_STRING_COUNT { 1 };
}

enum class MusicalNote { A, As, B, C, Cs, D, Ds, E, F, Fs, G, Gs };

/// @brief Note objects are immutable representations of a western music scale note
struct Note 
{
public:
    /// @brief Default constructor for Note. Note defaults to A4 
    Note();

    /// @brief Constructor for Note
    /// @param note A Note enum representing one of the 12 notes
    /// @param octave An unsigned integer representing the octave of our note.
    /// Octave must be <= CONSTANTS::MAX_OCTAVE to be a viable note
    Note(const MusicalNote& note, const uint8_t& octave);

    /// @brief Constructor for Note
    /// @param ordinal The integer representation of a note falling in the range of A0 to G10.
    Note(const uint8_t& ordinal);
    ~Note() {};

    std::string toString() const;

private:
    MusicalNote _note {};
    uint8_t _octave {};
};

#endif