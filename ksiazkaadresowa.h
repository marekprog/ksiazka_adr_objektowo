#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "uzytkownikmanager.h"
#include "adresatmanager.h"

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string NAZWAPLIKUZUZYTKOWNIKAMI,string NAZWAPLIKUZADRESATAMI):
        uzytkownikManager(NAZWAPLIKUZUZYTKOWNIKAMI),NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI)
    {
        adresatManager=NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatManager;
        adresatManager=NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZPliku();
    bool czyUzytkownikJestZalogowany();




};

#endif // KSIAZKAADRESOWA_H
