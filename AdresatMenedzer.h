#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer
 {

    int idUsunietegoAdresata;

    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(int i);

public:
int idOstatniegoAdresata;
    AdresatMenedzer();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    //AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyczyscWektor();
 };
#endif

