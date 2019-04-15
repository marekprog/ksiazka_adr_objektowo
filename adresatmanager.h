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
    AdresatManager(string nazwaPlikuZAdresatami);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);

};

#endif // ADRESATMANAGER_H
