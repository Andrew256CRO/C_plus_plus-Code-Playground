#pragma once
struct listaDubla {
	int data;
	listaDubla* next, * previous;
};
void inserareLaFinal(listaDubla*& cap, int valoare);
void inserareInFata(listaDubla*& cap, int valoare);
void afisareLista(listaDubla*& cap);
void cautareNumar(listaDubla*& cap, int valoare);
void inserarePePozitie(listaDubla*& cap, int pozitie, int valoare);
void stergereNumar(listaDubla*& cap, int pozitie);
void afisareDusIntors(listaDubla*& cap);
void concatenareSiAfisare(listaDubla*& cap);