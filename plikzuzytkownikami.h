#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "uzytkownik.h"
#include "metodypomocnicze.h"
#include <cstdlib>
#include "pliktekstowy.h"

class PlikZUzytkownikami : public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);



public:
    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami):NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami){}
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);


};

#endif // PLIKZUZYTKOWNIKAMI_H
