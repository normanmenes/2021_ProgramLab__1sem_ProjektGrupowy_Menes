#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "kontakt.hpp";
#include "panel_glowny.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szeroko�ci oknaconst short int rozmiarX = 120;					// do ustawienia szeroko�ci okna

void kontakt()
{
	naglowek_restauracji();

	string tmp_string;
	short int linijka = 10;
	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na pocz�tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na ko�cu linijki
	gotoxy(tmp_string_poczatek, linijka);											// ustawia kursor tak, by tekst by� wyr�wnany do �rodka linijki
	cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "KONTAKT";
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

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Restauracja \"T�usty krab\"";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);								// ustawia kursor tak, by tekst by� wyr�wnany do �rodka linijki
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "ul. Ratajczaka 10 Pozna�";
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

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Godziny otwarcia:";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Pon:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "zamkni�te";
	gotoxy(tmp_string_poczatek + 17, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Wt-Pt:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "12:00-22:00";
	gotoxy(tmp_string_poczatek + 17, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Sob:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "12:00-24:00";
	gotoxy(tmp_string_poczatek + 17, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Ndz:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "12:00-20:00";
	gotoxy(tmp_string_poczatek + 17, linijka);
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
	cout << "*";
	tmp_string = "Tel:";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	tmp_string = "+48 985 493 672";
	gotoxy(tmp_string_poczatek + 12, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "mail:";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	tmp_string = "tlustykrab@gmail.com";
	gotoxy(tmp_string_poczatek + 12, linijka);
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
	cout << "*";
	tmp_string = "Znajd� nas w social mediach";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Fb:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "tlustykrabpoznan";
	gotoxy(tmp_string_poczatek + 14, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Ig:";
	gotoxy(tmp_string_poczatek + 8, linijka);
	cout << tmp_string;
	tmp_string = "tlustykrabpoznan";
	gotoxy(tmp_string_poczatek + 14, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
	linijka += 2;

	tmp_string = "Aby powr�ci� do menu aplikacji naci�nij dowolny przycisk...";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	_getch();
	menu_aplikacji();


	// u�y� sta�ych w godzinach otwarcia restauracji!!!!!

}