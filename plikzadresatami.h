#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "metodypomocnicze.h"
#include <cstdlib>
#include "adresat.h"


class PlikZAdresatami
{
    string nazwaPlikuZAdresatami;
    fstream plikTekstowy;
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI);
    void dopiszAdresataDoPliku(Adresat adresat);


};

#endif // PLIKZADRESATAMI_H
