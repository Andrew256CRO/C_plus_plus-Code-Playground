#pragma once
struct stiva {
	int data;
	stiva* next;
};
void initStiva(stiva*& cap);
bool isEmpty(stiva*& cap);
int topElem(stiva*& cap);
int popElem(stiva*& cap);
void afisareStiva(stiva*& cap);
stiva* copy(stiva* s);
void deleteStiva(stiva*& cap);
void pushElem(stiva*& cap, int valoare);
//void inserareStiva(stiva*& cap, int valoare);