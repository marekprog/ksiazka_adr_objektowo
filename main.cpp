#include <iostream>
#include "ksiazkaadresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;
    //ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
