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
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami): uzytkownikManager(nazwaPlikuZUzytkownikami)
    {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();


};

#endif // KSIAZKAADRESOWA_H
