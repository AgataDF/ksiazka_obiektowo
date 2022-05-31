#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
//#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer
 {
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    //int idZalogowanegoUzytkownika;

    UzytkownikMenedzer uzytkownikMenedzer;
    int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(int i);

public:
int
    //AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    //idOstatniegoAdresata;
    AdresatMenedzer();
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void wyczyscWektor();
 };
#endif

