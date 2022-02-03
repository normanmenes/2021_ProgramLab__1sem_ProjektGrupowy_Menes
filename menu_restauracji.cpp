#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "kontakt.hpp";
#include "menu_restauracji.hpp";
#include "panel_glowny.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szeroko�ci okna

string imie_nazwisko_klienta;
short int nrZamowienia = 1;
string lokalizacja;	// "na miejscu" / "na wynos"
short int nrStolika;
string adres;

// string zamowienie [max_liczba_zamowionych_r�nych_da�][liczba_parametr�w (nazwa, cena, ilo��)]
string zamowienie[40][3];
double do_zaplaty = 0;

short int liczba_zamowionych_dan = 0;

/******************************     LISTA DA�     ******************************/
// string typ_dania [liczba_da�][liczba_parametr�w_danego_dania]	

const short int lParametrowDania = 2;	 // nazwa, cena

const short int lPrzystawek = 5;		// liczba dost�pnych przystawek
string przystawki[lPrzystawek][lParametrowDania] = {
	"Tortilla Rolls (150g)", "21,99",
	"Krazki Cebulowe (9szt)", "18,99",
	"Salsa Nachos (150g)", "15,99",
	"Nachos Ser (150g)", "16,99",
	"Frytki (100g)", " 9,99"
};

const short int lZup = 2;
string zupy[lZup][lParametrowDania] = {
	"Carpacio (200ml)","23,99",
	"Krem z kukurydzy (200ml) ", "17,99"
};

const short int lDGlownych = 6;
string dglowne[lDGlownych][lParametrowDania] = {
	"Quesadilla z kurczakiem (1szt)", "34,99",
	"Enchiladas z kurczakiem (3szt)", "40,99",
	"Enchiladas z wolowina (3szt)", "47,99",
	"Grillowana piers z kurczaka z sosoem salsa mojito 180g)", "38,99",
	"Tacos z kurczakiem (3 szt)", "35,99",
	"Tacos z rostbefem (3szt)", "40,99"
};

const short int lDeserow = 3;
string desery[3][lParametrowDania] = {
	"Brownie (150g) ", "20,99",
	"Cremme Bruelle (100g) ", "18,99",
	"Sernik Mango (120g) ", "22,99"
};

const short int lNapojow = 7;
string napoje[lNapojow][lParametrowDania] = {
	"Herbata ", "8,99",
	"Caffe Latte ", "10,99",
	"Americano ", "9,99",
	"Coca-Cola ", "7,99",
	"7up ", "7,99",
	"Mirinda ", "7,99",
	"Woda ", "6,99"
};
/*******************************************************************************/



void wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka)
{
	short int tmp_linijka = linijka - 1;
	for (short int i = 0; i < lDanychDan; i++) {
		tmp_linijka++;
		for (short int j = 0; j < lParametrowDania; j++) {
			if (j == 0) gotoxy(2, tmp_linijka);
			else if (j == 1) gotoxy(74, tmp_linijka);

			if (typ_dania == 'p') cout << przystawki[i][j] << "  ";
			else if (typ_dania == 'z') cout << zupy[i][j] << "  ";
			else if (typ_dania == 'g') cout << dglowne[i][j] << "  ";
			else if (typ_dania == 'd') cout << desery[i][j] << "  ";
			else if (typ_dania == 'n') cout << napoje[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
}



void menu_restauracji()
{
	naglowek_restauracji();

	// MENU RESTAURACJI
	string tmp_string;
	const short int liczbaOpcjiMenuRestauracji = 6;
	short int linijka = 10;

	tmp_string = "Wybierz, kt�r� kart� chcesz obejrze�";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka += 2;

	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na pocz�tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;			// zapami�tuje w kt�rym miejscu wy�wietli� "*" na ko�cu linijki
	gotoxy(tmp_string_poczatek, linijka);
	cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "MENU RESTAURACJI";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int pierwszaOpcjaMenu = linijka;				// potrzebne do rysowania strza�ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Przystawki";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Zupy";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Danie g��wne";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Desery";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Napoje";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza�ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "[powr�t]";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
	linijka += 2;



	// strza�ki
	short int wybor;
	short int poprzedniWybor;
	while (true)
	{
		wybor = 1;
		poprzedniWybor = wybor;

		while (true)						//przesuwanie strza�ki
		{
			//rysowanie strza�ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + wybor - 1);
			cout << static_cast <char>(16);

			//obs�uga klawiatury
			poprzedniWybor = wybor;
			switch (_getch())
			{
			case 224: //STRZA�KI
				switch (_getch())
				{
				case 72: //strza�ka w g�r�
					if (1 < wybor) wybor--;
					else wybor = liczbaOpcjiMenuRestauracji;
					break;

				case 80: //strza�ka w d�
					if (wybor < liczbaOpcjiMenuRestauracji) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				// czyszczenie poprzedniej listy
				gotoxy(0, linijka);
				for (int i = 0; i < 10; i++) {			// 10 = max liczba da� danej kategorii
					cout << "                                                                                               " << endl;
				}

				gotoxy(65 / 2, linijka);
				switch (wybor)
				{
				case 1:
					tmp_string = "PRZYSTAWKI";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lPrzystawek, 'p', linijka + 1);
					break;

				case 2:
					tmp_string = "ZUPY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lZup, 'z', linijka + 1);
					break;

				case 3:
					tmp_string = "DANIA G��WNE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lDGlownych, 'g', linijka + 1);
					break;

				case 4:
					tmp_string = "DESERY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lDeserow, 'd', linijka + 1);
					break;

				case 5:
					tmp_string = "NAPOJE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lNapojow, 'n', linijka + 1);
					break;

				case 6:
					cout << "Wybra�e�: Powr�t do menu aplikacji";
					// sleep
					menu_aplikacji();
					exit(0);
				}
				break;
			case 27: //ESC
				gotoxy(tmp_string_poczatek, linijka);
				cout << "Wyj�cie z programu\n";
				exit(0);
				break;
			}

			//czyszczenie strza�ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + poprzedniWybor - 1);
			cout << " ";
		}
	}
}



/*************************************************************************************/

void zamowienie_wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka)
{
	short int tmp_linijka = linijka - 1;
	for (short int i = 0; i < lDanychDan; i++) {
		tmp_linijka++;
		gotoxy(0, tmp_linijka);
		cout << i + 1 << ". ";
		for (short int j = 0; j < lParametrowDania; j++) {
			if (j == 0) gotoxy(3, tmp_linijka);
			else if (j == 1) gotoxy(74, tmp_linijka);

			if (typ_dania == 'p') cout << przystawki[i][j] << "  ";
			else if (typ_dania == 'z') cout << zupy[i][j] << "  ";
			else if (typ_dania == 'g') cout << dglowne[i][j] << "  ";
			else if (typ_dania == 'd') cout << desery[i][j] << "  ";
			else if (typ_dania == 'n') cout << napoje[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
	short int tmp_nrDania;
	short int tmp_lPorcji;
	double tmp_cena;
	cout << "Numer dania: ";
	cin >> tmp_nrDania;
	cout << "Podaj liczb� porcji: ";
	cin >> tmp_lPorcji;
	cout << "Wybra�e�: ";
	if (typ_dania == 'p') { cout << przystawki[tmp_nrDania - 1][0]; zamowienie[liczba_zamowionych_dan][0] = przystawki[tmp_nrDania - 1][0]; }
	else if (typ_dania == 'z') { cout << zupy[tmp_nrDania - 1][0]; zamowienie[liczba_zamowionych_dan][0] = zupy[tmp_nrDania - 1][0]; }
	else if (typ_dania == 'g') { cout << dglowne[tmp_nrDania - 1][0]; zamowienie[liczba_zamowionych_dan][0] = dglowne[tmp_nrDania - 1][0]; }
	else if (typ_dania == 'd') { cout << desery[tmp_nrDania - 1][0]; zamowienie[liczba_zamowionych_dan][0] = desery[tmp_nrDania - 1][0]; }
	else if (typ_dania == 'n') { cout << napoje[tmp_nrDania - 1][0]; zamowienie[liczba_zamowionych_dan][0] = napoje[tmp_nrDania - 1][0]; }
	zamowienie[liczba_zamowionych_dan][2] = to_string(tmp_lPorcji);
	cout << "   [ x" << tmp_lPorcji << " ]";
	cout << "   za: ";
	if (typ_dania == 'p') tmp_cena = stod(przystawki[tmp_nrDania - 1][1]);
	else if (typ_dania == 'z') tmp_cena = stod(zupy[tmp_nrDania - 1][1]);
	else if (typ_dania == 'g') tmp_cena = stod(dglowne[tmp_nrDania - 1][1]);
	else if (typ_dania == 'd') tmp_cena = stod(desery[tmp_nrDania - 1][1]);
	else if (typ_dania == 'n') tmp_cena = stod(napoje[tmp_nrDania - 1][1]);
	zamowienie[liczba_zamowionych_dan][1] = to_string(tmp_cena);
	cout << tmp_cena << " / sztuk�" << endl;
	cout << "��czna cena: " << tmp_cena * tmp_lPorcji << endl;
	do_zaplaty += tmp_cena * tmp_lPorcji;
	liczba_zamowionych_dan++;
	cout << "Naci�nij dowolny klawisz...";
	_getch();
	
	wyswietlanie_zamowienia();
}


void skladanie_zamowienia_menu()
{
	// MENU RESTAURACJI
	string tmp_string;
	const short int liczbaOpcjiMenuRestauracji = 6;
	short int linijka = 10;

	tmp_string = "Wybierz, z kt�rej karty chcesz zam�wi� danie";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka += 2;

	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na pocz�tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;			// zapami�tuje w kt�rym miejscu wy�wietli� "*" na ko�cu linijki
	gotoxy(tmp_string_poczatek, linijka);
	cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "MENU RESTAURACJI";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int pierwszaOpcjaMenu = linijka;				// potrzebne do rysowania strza�ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Przystawki";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Zupy";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Danie g��wne";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Desery";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Napoje";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza�ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "[z�� zam�wienie]";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
	linijka += 2;



	// strza�ki
	short int wybor;
	short int poprzedniWybor;
	while (true)
	{
		wybor = 1;
		poprzedniWybor = wybor;

		while (true)						//przesuwanie strza�ki
		{
			//rysowanie strza�ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + wybor - 1);
			cout << static_cast <char>(16);

			//obs�uga klawiatury
			poprzedniWybor = wybor;
			switch (_getch())
			{
			case 224: //STRZA�KI
				switch (_getch())
				{
				case 72: //strza�ka w g�r�
					if (1 < wybor) wybor--;
					else wybor = liczbaOpcjiMenuRestauracji;
					break;

				case 80: //strza�ka w d�
					if (wybor < liczbaOpcjiMenuRestauracji) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				// czyszczenie poprzedniej listy
				gotoxy(0, linijka);
				for (int i = 0; i < 10; i++) {			// 10 = max liczba da� danej kategorii
					cout << "                                                                                               " << endl;
				}

				gotoxy(65 / 2, linijka);
				switch (wybor)
				{
				case 1:
					tmp_string = "PRZYSTAWKI";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lPrzystawek, 'p', linijka + 1);
					break;

				case 2:
					tmp_string = "ZUPY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lZup, 'z', linijka + 1);
					break;

				case 3:
					tmp_string = "DANIA G��WNE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lDGlownych, 'g', linijka + 1);
					break;

				case 4:
					tmp_string = "DESERY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lDeserow, 'd', linijka + 1);
					break;

				case 5:
					tmp_string = "NAPOJE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lNapojow, 'n', linijka + 1);
					break;

				case 6:
					cout << "Zako�cz sk�adanie zam�wienia";
					// !!!!!!! ///
				}
				break;
			case 27: //ESC
				gotoxy(tmp_string_poczatek, linijka);
				cout << "Wyj�cie z programu\n";
				exit(0);
				break;
			}

			//czyszczenie strza�ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + poprzedniWybor - 1);
			cout << " ";
		}
	}
}

void zloz_zamowienie() {
	naglowek_restauracji();
	string tmp_string;
	tmp_string = "Z�ӯ ZAM�WIENIE";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 8);
	cout << tmp_string << endl << endl;

	cout << "Nr zam�wienia: " << nrZamowienia << endl;

	cout << "Imi� i nazwisko: ";
	getline(cin, imie_nazwisko_klienta);

	cout << "Zam�wienie b�dzie realizowane\n"
		"  1. na miejscu\n"
		"  2. na wynos\n";
	cout << "Opcja: _\b";
	char tmp_lokalizacja;
	do {
		tmp_lokalizacja = _getch();
	} while (tmp_lokalizacja != '1' and tmp_lokalizacja != '2');
	switch (tmp_lokalizacja)
	{
	case '1':
		lokalizacja = "na miejscu";
		cout << lokalizacja << endl;
		do {
			cout << "Nr stolika (1-23): ";
			cin >> nrStolika;
		} while (nrStolika < 1 or nrStolika > 23);

		break;
	case '2':
		lokalizacja = "na wynos";
		cout << lokalizacja << endl;

		cout << "Obejmujemy dostaw� i zam�wienia, tylko w powiecie pozna�skim - zam�wienia spoza tego obszaru nie b�d� realizowane." << endl;
		cout << "Adres dostawy: " << endl;
		getline(cin, adres);
		// czas dostawy
		break;
	}
	wyswietlanie_zamowienia();
}

void wyswietlanie_zamowienia() {
	naglowek_restauracji();
	string tmp_string = "Z�ӯ ZAM�WIENIE";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 8);
	cout << tmp_string << endl << endl;
	cout << endl << endl;
	cout << "Nr zamowienia: " << nrZamowienia << endl;
	cout << "Imie i nazwisko: " << imie_nazwisko_klienta << endl;
	cout << "Lokalizacja: " << lokalizacja << endl;
	if (lokalizacja == "na miejscu") cout << "Numer stolika: " << nrStolika << endl;
	tmp_string = "LISTA ZAM�WIONYCH DA�";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 36);
	cout << tmp_string << endl;
	tmp_string = "=====================";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 37);
	cout << tmp_string << endl;



	short int tmp_linijka = 38;
	for (short int i = 0; i < liczba_zamowionych_dan; i++) {
		tmp_linijka++;
		gotoxy(0, tmp_linijka);
		cout << i + 1 << ". ";
		for (short int j = 0; j < 3; j++) {
			if (j == 0) gotoxy(3, tmp_linijka);
			else if (j == 1) gotoxy(74, tmp_linijka);
			else if (j == 2) { gotoxy(97, tmp_linijka); cout << "[ x "; }
			cout << zamowienie[i][j];
			if (j == 1) cout << "\b\bzl / szt.";
			else if (j == 2) cout << " ]";
		}
		cout << endl;
	}
	cout << endl;
	cout << "---------------------" << endl;
	cout << "Do zap�aty: " << do_zaplaty << " z�" << endl;
	skladanie_zamowienia_menu();
}

