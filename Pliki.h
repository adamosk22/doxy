#pragma once
#include "Kolekcje.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


// funkcja wczytuj¹ca dane z pliku do listy
void wczytajDaneGryZPliku(struct KategoriaLista** pHead, char* nazwaPliku);
/** Funkcja wczytuje dane z pliku i wpisuje je do listy
@param pHead poczatek listy graczy
@param nazwaPliku nazwa pliku, w ktorym znajduja sie pytania
*/


void wczytajWyniki(struct GraczLista** pHead, char* nazwaPliku);
/** Funkcja wczytuje dotychczasowe wyniki z plikow
@param pHead poczatek listy graczy
@param nazwaPliku nazwa pliku z wynikami najlepszych graczy
*/
void zapiszWyniki(struct GraczLista* pHead, char* nazwaPliku);
/** Funkcja zapisuje zmodyfikowane wyniki do pliku
@param pHead poczatek listy graczy
@param nazwaPliku nazwa pliku z wynikami najlepszych graczy
*/