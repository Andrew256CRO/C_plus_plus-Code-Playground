#include<iostream>
#include"Functii.hpp"

void inserareLaFinal(listaDubla*& cap, int valoare) {
	if (cap == nullptr) {
		cap = new listaDubla;
		cap->data = valoare;
		cap->next = nullptr;
		cap->previous = nullptr;
	}
	else {
		listaDubla* p = cap;
		while (p->next != nullptr) {
			p = p->next;
		}
		listaDubla* q = new listaDubla;
		q->data = valoare;
		q->next = p->next;
		q->previous = p;
		p->next = q;
	}
}

void inserareInFata(listaDubla*& cap, int valoare) {
	if (cap == nullptr) {
		cap = new listaDubla;
		cap->data = valoare;
		cap->next = nullptr;
		cap->previous = nullptr;
	}
	else {
		listaDubla* p = new listaDubla;
		p->data = valoare;
		p->next = cap;
		p->previous = nullptr;
		cap->previous = p;
		cap = p;
	}
}

void afisareLista(listaDubla*& cap) {
	listaDubla* p = cap;
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

void cautareNumar(listaDubla*& cap, int valoare) {
	bool gasit = false;
	int pozitie = 0;
	listaDubla* p = cap;
	while (p) {
		if (p->data == valoare) {
			std::cout << "S-a gasit numarul" << valoare << " " << "pe pozitia " << pozitie << std::endl;
			gasit = true;
		}
		p = p->next;
		pozitie++;
	}
	if (!gasit) {
	std::cout << "Nu s-a gasit numarul." << std:: endl;
	}
}

void inserarePePozitie(listaDubla*& cap, int pozitie, int valoare) {
	listaDubla* p = cap;
	for (int i = 0; i < pozitie - 1; i++) {
		p = p->next;
	}
	listaDubla* q = new listaDubla;
	q->data = valoare;
	q->next = p->next;
	q->previous = p;
	p->next = q;
	q->next->previous = q;
}

void stergereNumar(listaDubla*& cap, int pozitie) {
	listaDubla* p = cap;
	for (int i = 0; i < pozitie - 1; i++) {
		p = p->next;
	}
	listaDubla* q, * r;
	q = p->next;
	r = q->next;
	p->next = r;
	r->previous = p;
	q->next = nullptr;
	q->previous = nullptr;
	delete q;
}

void afisareDusIntors(listaDubla*& cap) {
	std::cout << "Dus: " << std::endl;
	afisareLista(cap);
	std::cout << "Intors: " << std::endl;
	listaDubla* p = cap;
	while (p->next != nullptr) {
		p = p->next;
	}
	while (p) {
		std::cout << p->data << " ";
		p = p->previous;
	}
	std::cout << std::endl;
}

void concatenareSiAfisare(listaDubla*& cap) {
	listaDubla* lista1 = 0;
	listaDubla* lista2 = 0;
	listaDubla* lista3 = 0;
	int x, y;
	std::cin >> x;
	while (x) {
		inserareLaFinal(lista1, x);
		std::cin >> x;
	}
	afisareLista(lista1);
	std::cin >> y;
	while (y) {
		inserareLaFinal(lista2, y);
		std::cin >> y;
	}
	afisareLista(lista2);
	listaDubla* p = lista1;
	while (p) {
		inserareLaFinal(lista3, p->data);
		p = p->next;
	}
	p = lista2;
	while (p) {
		inserareLaFinal(lista3, p->data);
		p = p->next;
	}
	afisareLista(lista3);
	std::cout << std::endl;
	listaDubla* r = lista1;
	listaDubla* q = lista2;
	while (r->next != nullptr && q->next != nullptr) {
		std::cout << r->data << " " << q->data << " ";
		r = r->next;
		q = q->next;
	}
	while (r) {
		std::cout << r->data << " ";
		r = r->next;
	}
	while (q) {
		std::cout << q->data << " ";
		q = q->next;
	}
}