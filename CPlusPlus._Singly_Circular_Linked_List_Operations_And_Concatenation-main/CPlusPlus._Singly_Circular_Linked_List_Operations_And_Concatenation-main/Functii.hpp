#pragma once
struct listaCirculara {
	int data;
	listaCirculara* next;
};
void inserareInFata(listaCirculara*& cap, listaCirculara*& coada, int valoare);
void inserareLaFinal(listaCirculara*& cap, listaCirculara*& coada, int valoare);
void afisareLista(listaCirculara*& cap);
void cautareNumar(listaCirculara*& cap, int valoare);
void inserarePePozitie(listaCirculara*& cap, int pozitie, int valoare);
void stergereElement(listaCirculara*& cap, int pozitie);
void concatenareSiAfisare(listaCirculara*& cap);