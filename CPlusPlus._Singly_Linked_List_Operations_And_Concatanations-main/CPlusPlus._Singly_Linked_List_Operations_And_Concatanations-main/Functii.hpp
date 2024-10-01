#pragma once
struct listaSimpla {
	int data;
	listaSimpla* next;
};
void inserareLaFinal(listaSimpla*& cap, int valoare);
void inserareInFata(listaSimpla*& cap, int valoare);
void afisareLista(listaSimpla*& cap);
void cautareNumar(listaSimpla*& cap, int valoare);
void inserarePePozitie(listaSimpla*& cap, int pozitie, int valoare);
void stergereElement(listaSimpla*& cap, int pozitie);
void concatenareListe(listaSimpla*& cap);