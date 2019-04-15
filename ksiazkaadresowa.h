#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "uzytkownikmanager.h"

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami): uzytkownikManager(nazwaPlikuZUzytkownikami)
    {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();


};

#endif // KSIAZKAADRESOWA_H
