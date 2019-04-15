#include "ksiazkaadresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikManager.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}


