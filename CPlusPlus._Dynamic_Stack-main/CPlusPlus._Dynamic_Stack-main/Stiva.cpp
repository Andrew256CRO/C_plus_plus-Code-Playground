#include<iostream>
#include"Stiva.hpp"

void initStiva(stiva*& cap) {
	cap = nullptr;
}

bool isEmpty(stiva*& cap) {
	if (cap == nullptr) {
		return 0;
	}
	else {
		return 1;
	}
}

int topElem(stiva*& cap) {
	if (cap==NULL) {
		return -1; // stiva este goal�, nu avem elemente
	}
	else {
		return cap->data; // return�m valoarea elementului din v�rf
	}
}

int popElem(stiva*& cap) {
	if (isEmpty(cap)==0) {
		return -1; // stiva este goal�, nu putem elimina niciun element
	}
	int val = cap->data; // salv�m valoarea elementului din v�rful stivei
	stiva* p = cap; // salv�m adresa v�rfului stivei �ntr-un pointer temporar
	cap = cap->next; // set�m noul v�rf al stivei
	delete p; // eliber�m memoria alocat� pentru fostul v�rf al stivei
	return val; // return�m valoarea elementului eliminat
}

void pushElem(stiva*& cap, int valoare) {
	stiva* p = new stiva;
	p->data = valoare;
	p->next = cap;
	cap = p;
}

void afisareStiva(stiva*& cap) {
	stiva* p = cap;
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

stiva* copy(stiva* s) {
	stiva* p = s;
	s = p;
	return s;
}

void deleteStiva(stiva*& cap) {
	while (cap) {
		popElem(cap);
	}
	cap == nullptr;
}

//void inserareStiva(stiva*& cap, int valoare) {
//	if (cap == nullptr) {
//		cap = new stiva;
//		cap->data = valoare;
//		cap->next = nullptr;
//	}
//	else {
//		stiva* q = new stiva;
//		q->data = valoare;
//		q->next = cap;
//		cap = q;
//	}
//}
