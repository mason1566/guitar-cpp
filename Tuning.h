#ifndef TUNING
#define TUNING

#include <iostream>

#include "Note.h"

struct Tuning 
{
public:
    // Default E2 A2 D3 G3 B3 E4 Tuning constructor
    Tuning();
    // Default 6-string guitar constructor
    Tuning(const Note& S1, const Note& S2, const Note& S3, const Note& S4, const Note& S5, const Note& S6);
    ~Tuning() { delete[] _openNotes; };

    Note* getNotes() const { return _openNotes; };
    int8_t getStringCount() const { return _stringCount; };

private:
    Note* _openNotes;
    const uint8_t _stringCount;
};

#endif