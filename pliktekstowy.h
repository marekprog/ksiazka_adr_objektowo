#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <vector>
#include <fstream>
#include "metodypomocnicze.h"
#include <cstdlib>
#include "adresat.h"


class PlikTekstowy
{
    const string NAZWA_PLIKU;
protected:
    fstream plikTekstowy;
    bool czyPlikJestPusty(fstream &plikTekstowy);
};
#endif // PLIKTEKSTOWY_H
