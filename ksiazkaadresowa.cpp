#include "ksiazkaadresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikManager.wylogowanieUzytkownika();
}

