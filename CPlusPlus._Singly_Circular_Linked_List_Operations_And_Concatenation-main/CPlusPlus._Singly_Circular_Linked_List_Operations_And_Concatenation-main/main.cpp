#include <iostream>
#include"Functii.hpp"

//int main()
//{
//	listaCirculara* cap1 = 0;
//	listaCirculara* coada1 = cap1;
//	int x;
//	std::cin >> x;
//	while (x) {
//		//inserareInFata(cap, coada, x);
//		inserareLaFinal(cap1, coada1, x);
//		std::cin >> x;
//	}
//	inserarePePozitie(cap1, 1, 9);
//	stergereElement(cap1, 5);
//	afisareLista(cap1, coada1);
//	cautareNumar(cap1, 3);
//	return 0;
//}


//int main() {
//	listaCirculara* cap1 = 0;
//	listaCirculara* cap2 = 0;
//	listaCirculara* cap3 = 0;
//	listaCirculara* coada1 = cap1;
//	listaCirculara* coada2 = cap2;
//	listaCirculara* coada3 = cap3;
//	int x, y;
//	std::cin >> x;
//	while (x) {
//		inserareLaFinal(cap1, coada1, x);
//		std::cin >> x;
//	}
//	afisareLista(cap1);
//	std::cin >> y;
//	while (y) {
//		inserareLaFinal(cap2, coada2, y);
//		std::cin >> y;
//	}
//	afisareLista(cap2);
//	std::cout << std::endl;
//	listaCirculara* p = cap1;
//	do {
//		inserareLaFinal(cap3, coada3, p->data);
//		p = p->next;
//	} while (p != cap1);
//	p = cap2;
//	do {
//		inserareLaFinal(cap3, coada3, p->data);
//		p = p->next;
//	} while (p != cap2);
//	afisareLista(cap3);
//	std::cout << std::endl;
//	listaCirculara* q = cap1;
//	listaCirculara* r = cap2;
//	do {
//		std::cout << q->data << " " << r->data << " ";
//		q = q->next;
//		r = r->next;
//	} while (q->next != cap1 && r->next != cap2);
//	do {
//		std::cout << q->data << " ";
//		q = q->next;
//	} while (q->next != cap1);
//	do {
//		std::cout << r->data << " ";
//		r = r->next;
//	} while (r->next != cap2);
//	return 0;
//}

int main() {
	listaCirculara* cap1 = 0;
	concatenareSiAfisare(cap1);
	return 0;
}