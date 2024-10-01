#pragma once
struct element {
	int data;
	element* next;
};
void put(element*& cap, int valoare);
void afisareCoada(element*& cap);
bool isEmpty(element*& cap);
int front(element*& cap);
void get(element*& cap);