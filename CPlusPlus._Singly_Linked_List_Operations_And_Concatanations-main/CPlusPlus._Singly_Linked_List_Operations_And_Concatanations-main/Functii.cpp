#include<iostream>
#include"Functii.hpp"

void inserareLaFinal(listaSimpla*& cap, int valoare) {
	if (cap == nullptr) {
		cap = new listaSimpla;
		cap->data = valoare;
		cap->next = nullptr;
	}
	else {
		listaSimpla* p = cap;
		while (p->next != nullptr) {
			p = p->next;
		}
		listaSimpla* q = new listaSimpla;
		q->data = valoare;
		q->next = nullptr;//q->next=p->next
		p->next = q;
	}
}

void inserareInFata(listaSimpla*& cap, int valoare) {
	if (cap == nullptr) {
		cap = new listaSimpla;
		cap->data = valoare;
		cap->next = nullptr;
	}
	else {
		listaSimpla* p = new listaSimpla;
		p->data = valoare;
		p->next = cap;
		cap = p;
	}
}

void afisareLista(listaSimpla*& cap) {
	listaSimpla* p = cap;
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

void cautareNumar(listaSimpla*& cap, int valoare) {
	bool gasit = false;
	int pozitie = 0;
	listaSimpla* p = cap;
	while (p) {
		if (p->data == valoare) {
			std::cout << "S-a gasit numarul " << valoare << " " << "pe pozitia" << pozitie << std::endl;
			gasit = true;
		}
		p = p->next;
		pozitie++;
	}
	if (!gasit) {
		std::cout << "Nu s-a gasit numarul" << std::endl;
	}
}

void inserarePePozitie(listaSimpla*& cap, int pozitie, int valoare) {
	int pozitieCurenta = 0;
	listaSimpla* p = cap;
	while (p && pozitieCurenta < pozitie - 1) {
		p = p->next;
		pozitieCurenta++;
	}
	listaSimpla* q = new listaSimpla;
	q->data = valoare;
	q->next = p->next;
	p->next = q;
}

void stergereElement(listaSimpla*& cap, int pozitie) {
	int pozitieCurenta = 0;
	listaSimpla* p = cap;
	while (p && pozitieCurenta < pozitie - 1) {
		p = p->next;
		pozitieCurenta++;
	}
	listaSimpla* q = p->next;
	p->next = p->next->next;
	q->next = nullptr;
	delete q;
}

void concatenareListe(listaSimpla*& cap) {
	listaSimpla* lista1 = 0;
	listaSimpla* lista2 = 0;
	listaSimpla* lista3 = 0;
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
	std::cout << std::endl;
	listaSimpla* p = lista1;
	while (p) {
		inserareLaFinal(lista3, p->data);
		p = p->next;
	}
	listaSimpla* q = lista2;
	while (q) {
		inserareLaFinal(lista3, q->data);
		q = q->next;
	}
	afisareLista(lista3);
	std::cout << std::endl;
		listaSimpla* r = lista1;
		listaSimpla* o = lista2;
		while (r->next != nullptr && o->next != nullptr) {
			std::cout << r->data << " " << o->data << " ";
			r=r->next;
			o = o->next;
		}
		while (r) {
			std::cout << r->data << " ";
			r = r->next;
		}
		while (o) {
			std::cout << o->data << " ";
			o = o->next;
		}
}