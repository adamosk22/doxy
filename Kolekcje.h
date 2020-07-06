#pragma once
#include <stdio.h>

struct PodpowiedzElement {
	char* tekst;///< tekst podpowiedzi
	struct PodpowiedzElement* pNext;///< kolejny element
};

struct OdpowiedzElement {
	char* nazwa;///< nazwa zwierzecia
	int czyZadanoPytanie; ///< 1 - jesli zadano, 0 - jesli nie zadano pytania
	struct OdpowiedzElement* pNext_odp;///< kolejny element
	struct PodpowiedzElement* pHead_podpowiedz;///< pierwszy element listy podpowiedzi
	struct PodpowiedzElement* pTail_podpowiedz;///< ostatni element listy podpowiedzi
};

struct KategoriaElement {
	char* nazwa;///< nazwa kategorii
	struct KategoriaElement* pNext_kat;///< kolejny element
	struct OdpowiedzElement* pHead_odp;///< pierwszy element listy zwierzat (odpowiedzi)
	struct OdpowiedzElement* pTail_odp;///< ostatni element listy zwierzat (odpowiedzi)
};

struct KategoriaLista {
	struct KategoriaElement* pHead_kat;///< pierwszy element listy kategorii
	struct KategoriaElement* pTail_kat;///< ostatni element listy kategorii
};



void dodajPodpowiedz(struct OdpowiedzElement** odpowiedz, struct PodpowiedzElement* nowaPodpowiedz);
/** Funkcja dodaje nowa podpowiedz dotyczaca odpowiedzi
@param odpowiedz odpowiedz, do ktorej dodajemy podpowiedz
@param nowaPodpowiedz podpowiedz, ktora dodajemy
*/
void dodajOdpowiedz(struct KategoriaElement** kategoria, struct OdpowiedzElement* nowaOdpowiedz);
/** Funkcja dodaje nowa odpowiedz do kategorii
@param kategoria kategoria, do ktorej dodajemy element
@param nowaOdpowiedz odpowiedz, ktora dodajemy
*/
void dodajKategorie(struct KategoriaLista** listaKategorii, struct KategoriaElement* nowaKategoria);
/**Funkcja dodaje nowa kategorie
@param listaKategorii lista, do ktorej dodajemy kategorie
@param nowaKategoria kategoria, ktora dodajemy
*/

void wyzerujZadanePytania(struct KategoriaLista** kategorie);
/** Funkcja zeruje liczbe, ktora oznaczala status zadania pytania
@param kategorie lista kategorii, ktora zawiera wszystkie pytnia
*/

void wyczyscPamiecPodpowiedz(struct OdpowiedzElement** odpowiedz);
/** Funkcja usuwa podpowiedzi dotyczace danej odpowiedzi
@param odpowiedz, do ktorej usuwamy podpowiedzi
*/
void wyczyscPamiecOdpowiedz(struct KategoriaElement** kategoria);
/** Funkcja usuwa wszystkie odpowiedzi z danej kategorii
@param kategoria kategoria, z ktorej usuwamy odpowiedzi
*/
void wyczyscPamiecKategorie(struct KategoriaLista** listaKategorii);
/** Funkcja usuwa wszystkie kategorie
@param listaKategorii lista, ktora miesci wszystkie kategorie
*/

struct KategoriaElement* znajdzKategorie(struct KategoriaLista* listaKategorii, char* nazwaKategorii);
/** Funkcja zwraca kategorie o podanej nazwie
@param listaKategorii lista zawieraj¹ca wszystkie kategorie
@param nazwaKategorii nazwa kategorii, z ktorej pochodzi poprzednie pytanie
@return kategoria do kolejnego pytania
*/

//0 jesli nie ma juz nowych zagadek
//1 jesli udalo sie znalexc nowa zagadke
int znajdzNowaZagadke(struct KategoriaLista* listaKategorii, struct KategoriaElement* poprzedniaKategoria, struct KategoriaElement** nowaKategoria, struct OdpowiedzElement** nowaZagadka);
/** Funkcja znajduje kolejna odpowiedz (zwierze)
@param listaKategorii lista wszystkich kategorii
@param poprzedniaKategoria kategoria, z ktorej pochodzi poprzednie pytanie
@param nowaKategoria kategoria, ktora zostanie wybrana
@param nowaZagadka zagadka, ktora zostanie wybrana
@return 0 jesli nie ma juz nowych zagadek lub 1 jesli udalo sie znalexc nowa zagadke
*/



struct GraczElement {
	char* nick;///< nick gracza
	int wynik;///< wynik uzyskany w grze
	struct GraczElement* pNext;///< kolejny gracz
};

struct GraczLista {
	int minWynik;///< minimalny wynik kwalifikuj¹cy na liste
	int rozmiar;///< rozmiar listy najlepszych graczy
	struct GraczElement* pHead;///< poczatek listy
	struct GraczElement* pTail;///< koniec listy
};

void dodajGraczaDoNajlepszych(struct GraczLista** listaGraczy, struct GraczElement* nowyGracz);
/** Funkcja sprawdza czy gracz kwalifikuje siê do listy top
@param listaGraczy lista najlepszych graczy
@param nowyGracz gracz, ktory jest dodawany do listy
*/

void dodajGracza(struct GraczLista** listaGraczy, struct GraczElement* nowyGracz);
/** Funkcja dodaje gracza do listy top
@param listaGraczy lista najlepszych graczy
@param nowyGracz gracz, ktory jest dodawany do listy
*/

void wyczyscPamiec(struct GraczLista** pHead);
/** Funkcja usuwa liste graczy
@param pHead poczatek listy graczy
*/






