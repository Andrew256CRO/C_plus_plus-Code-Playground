#include<iostream>
#include"Functii.hpp"

void init(coadaStatica& q) {
	q.cap = dim; // setează capacitatea cozii la dimensiunea specificată
	q.coada = 0; // setează indicele cozii la 0 pentru a indica că nu există încă elemente în coadă
}

void put(coadaStatica& q, int valoare) {
    if (q.coada < q.cap) { // verifică dacă coada nu este plină
        q.data[q.coada] = valoare; // adaugă valoarea în coadă la poziția indicată de coada
        q.coada++; // crește indicele cozii pentru a reflecta adăugarea unui nou element
    }
    else {
        std::cout << "Coada este deja plina." << std::endl;
    }
}

int get(coadaStatica& q) {
    if (q.coada > 0) { // verifică dacă coada nu este goală
        int valoare = q.data[0]; // stochează valoarea din vârful cozii
        // Deplasarea elementelor către stânga
        for (int i = 0; i < q.coada - 1; i++) {
            q.data[i] = q.data[i + 1];
        }
        q.coada--; // decrementează indicele cozii pentru a reflecta eliminarea unui element
        return valoare; // returnează valoarea eliminată din vârful cozii
    }
    else {
        // Coada este goală, nu se poate obține nicio valoare
        // Poți arunca o excepție sau poți trata în alt mod această situație de eroare
        // În acest exemplu, vom returna o valoare specială (-1) pentru a indica că coada este goală
        return -1;
    }
}

int front(const coadaStatica& q) {
    if (q.coada > 0) { // verifică dacă coada nu este goală
        return q.data[0]; // returnează valoarea din vârful cozii
    }
    else {
        // Coada este goală, nu există valori în vârful cozii
        // Poți arunca o excepție sau poți trata în alt mod această situație de eroare
        // În acest exemplu, vom returna o valoare specială (-1) pentru a indica că coada este goală
        return -1;
    }
}

int isEmpty(const coadaStatica& q) {
    return (q.coada == 0); // returnează 1 dacă coada este goală, altfel returnează 0
}

int isFull(const coadaStatica& q) {
    return (q.coada == q.cap); // returnează 1 dacă coada este plină, altfel returnează 0
}