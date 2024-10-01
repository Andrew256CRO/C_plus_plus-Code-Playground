#include<iostream>
#include"Functii.hpp"

void put(element*& cap, int valoare) {
	if (cap == nullptr) {
		cap = new element;
		cap->data = valoare;
		cap->next = nullptr;
	}
	else {
		element* p = new element;
		p->data = valoare;
		p->next = cap;
		cap = p;
	}
}

bool isEmpty(element*& cap) {
	return cap == nullptr;
}

void afisareCoada(element*& cap) {
	element* p = cap;
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

int front(element*& cap) {
	return cap->data;
}

void get(element*& cap) {
	element* p = cap;
	while (p->next->next != nullptr) {
		p = p->next;
	}
	element* q = p->next;
	p->next = nullptr;
	delete q;
}