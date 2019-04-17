#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include "adresat.h"
#include "plikzadresatami.h"
#include <vector>

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector<Adresat> adresaci;
    //int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
public:
    AdresatManager(string nazwaPlikuZAdresatami,int idZalogowanegoUzytkownika)
        :plikZAdresatami(nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);

};

#endif // ADRESATMANAGER_H
