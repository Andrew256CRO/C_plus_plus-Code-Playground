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
		return -1; // stiva este goalã, nu avem elemente
	}
	else {
		return cap->data; // returnãm valoarea elementului din vârf
	}
}

int popElem(stiva*& cap) {
	if (isEmpty(cap)==0) {
		return -1; // stiva este goalã, nu putem elimina niciun element
	}
	int val = cap->data; // salvãm valoarea elementului din vârful stivei
	stiva* p = cap; // salvãm adresa vârfului stivei într-un pointer temporar
	cap = cap->next; // setãm noul vârf al stivei
	delete p; // eliberãm memoria alocatã pentru fostul vârf al stivei
	return val; // returnãm valoarea elementului eliminat
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
