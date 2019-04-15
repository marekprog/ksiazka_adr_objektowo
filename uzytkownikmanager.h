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
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();



};

#endif // UZYTKOWNIKMANAGER_H
