#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include "adresat.h"
#include "plikzadresatami.h"
#include <vector>

class AdresatManager
{
    vector<Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
public:
    AdresatManager();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
};

#endif // ADRESATMANAGER_H
