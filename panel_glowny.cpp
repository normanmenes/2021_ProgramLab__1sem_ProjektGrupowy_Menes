#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "header.hpp";

using namespace std;

//funkcja, kt�ra przestawia kursor konsoli w dowolne miejsce
void gotoxy(const int x, const int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void naglowek_restauracji() {
	system("cls");
	string tmp_string;
	short int linijka = 0;
	// Nazwa Restauracji
	// 1. linijka
	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na pocz�tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;				// zapami�tuje w kt�rym miejscu wy�wietli� "*" na ko�cu linijki
	gotoxy(tmp_string_poczatek, linijka);											// ustawia kursor tak, by tekst by� wyr�wnany do �rodka linijki
	cout << tmp_string;
	linijka++;

	// 2. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 3. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Restauracja \"T�usty krab\"";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);								// ustawia kursor tak, by tekst by� wyr�wnany do �rodka linijki
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 4. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "ul. Ratajczaka 10 Pozna�";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 5. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 6. linijka
	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
}

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

void menu_aplikacji() {
	naglowek_restauracji();

	// MENU APLIKACJI
	string tmp_string;
	const short int liczbaOpcjiMenu = 4;
	short int linijka = 10;

	tmp_string = "Wybierz opcj� korzystaj�c ze strza�ek (g�ra / d�) i zatwierdzaj�c przyciskiem ENTER";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka++;

	tmp_string = "Aby przerwa� dzia�anie aplikacji, naci�nij w dowolnym momencie klawisz ESC";
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
	tmp_string = "MENU APLIKACJI";
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
	tmp_string = "Menu restauracji";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Kontakt";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Z�� zam�wienie";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza�ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Wyj�cie";
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
					else wybor = liczbaOpcjiMenu;
					break;

				case 80: //strza�ka w d�
					if (wybor < liczbaOpcjiMenu) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				gotoxy(tmp_string_poczatek, linijka);
				switch (wybor)
				{
				case 1:
					cout << "Wybra�e�: Menu restauracji";
					// sleep
					menu_restaurant();
					break;

				case 2:
					cout << "Wybra�e�: Kontakt";
					// sleep
					kontakt();
					break;

				case 3:
					cout << "Wybra�e�: Z�� zam�wienie";
					// sleep
					//Wyswietla sie zloz zamowienie
					break;

				case 4:
					cout << "Wybra�e�: Wyj�cie z aplikacji";
					//sleep
					cout << "Dzi�kujemy za wybranie naszej restauracji" << endl;
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
