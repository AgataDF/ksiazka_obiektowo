#include "AdresatMenedzer.h"
AdresatMenedzer::AdresatMenedzer()
{
   idOstatniegoAdresata =  plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata();
}

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return /*++*/idOstatniegoAdresata;
}


Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    string imie = MetodyPomocnicze::wczytajLinie();
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    string nazwisko = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

int AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
     cout << idZalogowanegoUzytkownika << endl;
    Sleep(1000);
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;

        for (int i = 0; i < adresaci.size(); i++)
        {
            wyswietlDaneAdresata(i);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenedzer::wyswietlDaneAdresata(int i)
{
    cout << endl << "Id:         " << adresaci[i].pobierzId() << endl;
    cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
}

void AdresatMenedzer::wyczyscWektor()
{
    adresaci.empty();
    if (adresaci.size() == 0)
        cout << "Dziala"<<endl;
    Sleep(1000);
}
