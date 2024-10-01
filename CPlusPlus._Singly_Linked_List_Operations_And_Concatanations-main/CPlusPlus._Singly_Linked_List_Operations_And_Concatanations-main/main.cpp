#include <iostream>
#include"Functii.hpp"

//int main()
//{
//    listaSimpla* lista1 = 0;
//    int x;
//    std::cin >> x;
//    while (x) {
//        //inserareInFata(lista1, x);
//        inserareLaFinal(lista1, x);
//        std::cin >> x;
//    }
//    inserarePePozitie(lista1, 3, 9);
//    stergereElement(lista1, 2);
//    afisareLista(lista1);
//    cautareNumar(lista1, 8);
//    return 0;
//}

//int main() {
//	listaSimpla* lista1 = 0;
//	listaSimpla* lista2 = 0;
//	listaSimpla* lista3 = 0;
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
//	std::cout << std::endl;
//	listaSimpla* p = lista1;
//	while (p) {
//		inserareLaFinal(lista3, p->data);
//		p = p->next;
//	}
//	listaSimpla* q = lista2;
//	while (q) {
//		inserareLaFinal(lista3, q->data);
//		q = q->next;
//	}
//	afisareLista(lista3);
//	std::cout << std::endl;
//	listaSimpla* r = lista1;
//	listaSimpla* o = lista2;
//	while (r->next != nullptr && o->next != nullptr) {
//		std::cout << r->data << " " << o->data << " ";
//		r=r->next;
//		o = o->next;
//	}
//	while (r) {
//		std::cout << r->data << " ";
//		r = r->next;
//	}
//	while (o) {
//		std::cout << o->data << " ";
//		o = o->next;
//	}
//	return 0;
//}

int main() {
	listaSimpla* lista1 = 0;
	concatenareListe(lista1);
	return 0;
}
