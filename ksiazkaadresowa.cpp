#include "ksiazkaadresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    int loginId=uzytkownikManager.logowanieUzytkownika();
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager= new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
    return loginId;

}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikManager.wylogowanieUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatManager->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatManager->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wczytajAdresatowZPliku()
{
    adresatManager->wczytajAdresatowZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikManager.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatManager->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatManager->wyszukajAdresatowPoNazwisku();
}
int KsiazkaAdresowa::usunAdresata()
{
    adresatManager->usunAdresata();

}
void KsiazkaAdresowa::edytujAdresata()
{
    adresatManager->edytujAdresata();
}




