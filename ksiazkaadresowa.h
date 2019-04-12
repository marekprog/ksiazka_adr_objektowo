#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <vector>
#include "uzytkownik.h"


class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector<Uzytkownik>uzytkownicy;
public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
};

#endif // KSIAZKAADRESOWA_H
