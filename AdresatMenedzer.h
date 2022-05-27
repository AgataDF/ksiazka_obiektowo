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
    //int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;

public:

    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    //AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

 };
#endif

