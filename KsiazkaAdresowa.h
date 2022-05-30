#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
 {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;


public:
    int idZalogowanegoUzytkownika = 0;
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    //KsiazkaAdresowa(string nazwaPlikuZAdresatami):uzytkownikMenedzer(nazwaPlikuZAdresatami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    void wylogowanie();


    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
 };
#endif
