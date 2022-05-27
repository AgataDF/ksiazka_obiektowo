#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
 {
    string nazwaPlikuZAdresatami = "Adresaci.txt";
    string nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowy.txt";

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami (Adresat adresat);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);


public:
   // PlikZAdresatami(string NAZWAPLIKUZADRESATAMI):nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    void dopiszAdresataDoPliku(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);



 };

#endif
