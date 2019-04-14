#include "metodypomocnicze.h"


MetodyPomocnicze::MetodyPomocnicze()
{

}

string MetodyPomocnicze::konwersjaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}
