#include "Tuning.h"

struct Tuning 
{
public:
    // using 

    // This constructor constructs a default guitar setup (E2 A2 D3 G3 B3 E4)
    Tuning()
    {
        _openNotes = new Note[CONSTANTS::DEFAULT_STRING_COUNT] {Note(10), Note(10), Note(10), Note(10), Note(10), Note(10)};
    }

    // Destructor
    ~Tuning() 
    {
        delete[] _openNotes;
    }

private:
    Note* _openNotes;
    const uint8_t _stringCount {};
};

// This namespace contains some default tunings/guitar setups
namespace TUNINGS {
    // const Tuning EADGBE {}
}