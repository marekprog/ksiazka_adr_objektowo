#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "uzytkownikmanager.h"
#include "adresatmanager.h"

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami):
        uzytkownikManager(nazwaPlikuZUzytkownikami),
        adresatManager(nazwaPlikuZAdresatami)
    {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZPliku();




};

#endif // KSIAZKAADRESOWA_H
