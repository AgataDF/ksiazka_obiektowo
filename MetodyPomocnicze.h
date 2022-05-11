#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze
 {
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie(); //problem z funkcja, pobiera pusta wartosc i nie mozna nic wpisaæ
 };
#endif
