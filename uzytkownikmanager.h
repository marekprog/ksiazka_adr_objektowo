#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H
#include <iostream>
#include <vector>
#include "uzytkownik.h"
#include <fstream>
#include <sstream>
#include "plikzuzytkownikami.h"

class UzytkownikManager
{
    int idZalogowanegoUzytkownika;
    vector<Uzytkownik>uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;


    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami);//:plikZUzytkownikami(nazwaPlikuZUzytkownikami);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();




};

#endif // UZYTKOWNIKMANAGER_H
