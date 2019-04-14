#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "uzytkownikmanager.h"

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();


};

#endif // KSIAZKAADRESOWA_H
