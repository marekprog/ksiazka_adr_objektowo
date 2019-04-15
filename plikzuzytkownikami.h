#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "uzytkownik.h"
#include "metodypomocnicze.h"
#include <cstdlib>


class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;
    //fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);



public:
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){}
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

};

#endif // PLIKZUZYTKOWNIKAMI_H
