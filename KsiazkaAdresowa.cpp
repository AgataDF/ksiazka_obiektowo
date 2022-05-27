
#include "KsiazkaAdresowa.h"



void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.zmianaIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{

    int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    int idOstatniegoAdresata = adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    cout << idOstatniegoAdresata << " " << idZalogowanegoUzytkownika << endl;
    Sleep(1000);
    adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

