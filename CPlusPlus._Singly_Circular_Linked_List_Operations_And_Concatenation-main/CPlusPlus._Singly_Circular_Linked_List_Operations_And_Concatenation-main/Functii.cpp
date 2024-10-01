#include<iostream>
#include"Functii.hpp"

void inserareInFata(listaCirculara*& cap, listaCirculara*& coada, int valoare) {
	if (cap == nullptr && coada == nullptr) {
		cap = new listaCirculara;
		cap->data = valoare;
		cap->next = nullptr;
		coada = cap;
	}
	else {
		listaCirculara* p = new listaCirculara;
		p->data = valoare;
		p->next = cap;
		coada->next = p;
		cap = p;
	}
}

void inserareLaFinal(listaCirculara*& cap, listaCirculara*& coada, int valoare) {
	if (cap == nullptr && coada == nullptr) {
		cap = new listaCirculara;
		cap->data = valoare;
		cap->next = nullptr;
		coada = cap;
	}
	else {
		listaCirculara* p = new listaCirculara;
		p->data = valoare;
		p->next = cap;
		coada->next = p;
		coada = p;
	}
}

void afisareLista(listaCirculara*& cap) {
	listaCirculara* p = cap;
	do {
		std::cout << p->data << " ";
		p = p->next;
	} while (p != cap);
	std::cout << std::endl;
}

void cautareNumar(listaCirculara*& cap, int valoare) {
	int pozitie = 0;
	bool gasit = false;
	listaCirculara* p = cap;
	do {
		if (p->data == valoare) {
			std::cout << "S-a gasit numarul " << valoare << " " << "pe pozitia " << pozitie << std::endl;
			gasit = true;
		}
		p = p->next;
		pozitie++;
	} while (p != cap);
	if (!gasit) {
		std::cout << "Nu s-a gasit numarul." << std::endl;
	}
}

void inserarePePozitie(listaCirculara*& cap, int pozitie, int valoare) {
	int pozitieCurenta = 0;
	listaCirculara* p = cap;
	do {
		p = p->next;
		pozitieCurenta++;
	} while (p != cap && pozitieCurenta < pozitie - 1);
	listaCirculara* q = new listaCirculara;
	q->data = valoare;
	q->next = p->next;
	p->next = q;
}

void stergereElement(listaCirculara*& cap, int pozitie) {
	listaCirculara* p = cap;
	int pozitieCurenta = 0;
	do {
		p = p->next;
		pozitieCurenta++;
	} while (p != cap && pozitieCurenta < pozitie - 1);
	listaCirculara* q = p->next;
	p->next = p->next->next;
	q->next = nullptr;
	delete q;
}

void concatenareSiAfisare(listaCirculara*& cap) {
	listaCirculara* cap1 = 0;
	listaCirculara* cap2 = 0;
	listaCirculara* cap3 = 0;
	listaCirculara* coada1 = cap1;
	listaCirculara* coada2 = cap2;
	listaCirculara* coada3 = cap3;
	int x, y;
	std::cin >> x;
	while (x) {
		inserareLaFinal(cap1, coada1, x);
		std::cin >> x;
	}
	afisareLista(cap1);
	std::cin >> y;
	while (y) {
		inserareLaFinal(cap2, coada2, y);
		std::cin >> y;
	}
	afisareLista(cap2);
	std::cout << std::endl;
	listaCirculara* p = cap1;
	do {
		inserareLaFinal(cap3, coada3, p->data);
		p = p->next;
	} while (p != cap1);
	p = cap2;
	do {
		inserareLaFinal(cap3, coada3, p->data);
		p = p->next;
	} while (p != cap2);
	afisareLista(cap3);
	std::cout << std::endl;
	listaCirculara* q = cap1;
	listaCirculara* r = cap2;
	do {
		std::cout << q->data << " " << r->data << " ";
		q = q->next;
		r = r->next;
	} while (q->next != cap1 && r->next != cap2);
	do {
		std::cout << q->data << " ";
		q = q->next;
	} while (q->next != cap1);
	do {
		std::cout << r->data << " ";
		r = r->next;
	} while (r->next != cap2);
}