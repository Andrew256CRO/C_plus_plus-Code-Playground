#include <iostream>
#include"Functii.hpp"

//int main()
//{
//	listaDubla* lista = 0;
//	int x;
//	std::cin >> x;
//	while (x) {
//		inserareLaFinal(lista, x);
//		//inserareInFata(lista, x);
//		std::cin >> x;
//	}
//	inserarePePozitie(lista, 5, 9);
//	stergereNumar(lista, 1);
//	afisareDusIntors(lista);
//	afisareLista(lista);
//	cautareNumar(lista, 3);
//	return 0;
//}

//int main() {
//	listaDubla* lista1 = 0;
//	listaDubla* lista2 = 0;
//	listaDubla* lista3 = 0;
//	int x, y;
//	std::cin >> x;
//	while (x) {
//		inserareLaFinal(lista1, x);
//		std::cin >> x;
//	}
//	afisareLista(lista1);
//	std::cin >> y;
//	while (y) {
//		inserareLaFinal(lista2, y);
//		std::cin >> y;
//	}
//	afisareLista(lista2);
//	listaDubla* p = lista1;
//	while (p) {
//		inserareLaFinal(lista3, p->data);
//		p = p->next;
//	}
//	p = lista2;
//	while (p) {
//		inserareLaFinal(lista3, p->data);
//		p = p->next;
//	}
//	afisareLista(lista3);
//	std::cout << std::endl;
//	listaDubla* r = lista1;
//	listaDubla* q = lista2;
//	while (r->next != nullptr && q->next != nullptr) {
//		std::cout << r->data << " " << q->data << " ";
//		r = r->next;
//		q = q->next;
//	}
//	while (r) {
//		std::cout << r->data << " ";
//		r = r->next;
//	}
//	while (q) {
//		std::cout << q->data << " ";
//		q = q->next;
//	}
//	return 0;
//}

int main() {
	listaDubla* lista = 0;
	concatenareSiAfisare(lista);
	return 0;
}


