#pragma once
#include"Pliki.h"

void uruchomGre(int argc, char* argv[]);
/** Funkcja uruchamia gre i wywoluje kolejne funkcje
@param argc liczba argumentow
@param argv tresc argumentow
*/

void wczytajDaneDoGry(int argc, char* argv[], struct KategoriaLista** kategorie, struct GraczLista** wyniki, char* plikZWynikami);
/** Funkcja wczytuje dane do gry na podstawie parametrow uruchomienia
@param argc liczba argumentow (domyslnie 2)
@param argv tresc argumentow
@param kategorie lista kategorii
@param wyniki lista najlepszych wynikow
@param plikZZWynikami nazwa pliku z wynikami
*/

void wyswietlMenu();
/** Funkcja wyswietla podstawowe menu
*/

void obslugujMenu(struct KategoriaLista** kategorie, struct GraczLista** wyniki);
/** Funkcja wywoluje rozne funkcjonalnosci programu na podstawie wyboru uzytkownika
@param kategorie lista kategorii
@param wyniki lista najlepszych graczy
*/

void obslugujDodanieZagadek(struct KategoriaLista** kategorie);
/** Funkcja pozwala wybrac w jaki sposob uzytkownik chce dodac nowa zagadke
@param kategorie lista istniejacych juz kategorii
*/

void wyswietlMenuDodawaniaZagadek(struct KategoriaLista* kategorie);
/** Funkcja wyswietla opcje dodawania zagadek oraz juz istniejace kategorie
@param kategorie lista kategorii
*/
void obslugujDodanieZagadkiDoNowejKategorii(struct KategoriaLista** kategorie);
/** Funkcja pozwala dodac zagadke wraz z nowa kategoria
@param kategorie lista istniejacych kategorii
*/
void obslugujDodanieZagadkiDoIstniejacejKategorii(struct KategoriaLista** kategorie);
/** Funkcja pozwala dodac zagadke do juz istniejacej kategorii
@param kategorie lista istniejacych kategorii
*/


//1 - jesli odpowiedz jest prawidlowa,
//0 - jesli odpowiedz jest bledna
int sprawdzOdpowiedzUzytkownika(char* odpowiedzUzytkownika, char* prawidlowaOdpowiedz);
/** Funkcja sprawdza czy podana odpowiedz jest poprawna
@param odpowiedzUzytkownika odpowiedz podana przez uzytkownika
@param prawidlowaOdpowiedz prawidlowa odpowiedz
@return 1 - jesli odpowiedz jest prawidlowa, 0 - jesli odpowiedz jest bledna
*/


void obslugujTabeleWynikow(struct GraczLista* wyniki);
/** Funkcja wyswietla tabele wynikow
@param wyniki lista najlepszych wynikow
*/

void zapiszWynikDoListyTop10(struct GraczLista** wyniki, int zdobytePunkty);
/** Funkcja zapisuje wyniki najlepszych graczy do lista
@param wyniki lista najlepszych wynikow
@param zdobytePunkty punkty zdobyte przez gracza
*/

void obslugujRozgrywke(struct KategoriaLista** kategorie, struct GraczLista** wyniki);
/** Funkcja obsluguje gre i liczy punkty graczy
@param kategorie lista kategorii
@param wyniki lista najlepszych wynikow
*/
void wyswietlInfOGrze();
/** Funkcja wyswietla informacje o grze
*/
void obslugujInformacjeOGrze();
/** Funkcja pozwala wrocic do menu glownego
*/





