#include <iostream>

using namespace std;

struct nod{
    int data;
    nod* next;
};

void inserareLaFinal(nod*&cap, int x) {
    if (cap == nullptr) {
        cap = new nod;
        cap->data = x;
        cap->next = nullptr;
    }
    else {
        nod* p = cap;
        while (p->next != nullptr) {
            p = p->next;
        }
        nod* q = new nod;
        q->data = x;
        q->next = p->next;
        p->next = q;
    }
}

void pop(nod*& cap) {
    nod* p = cap;
    while (p->next->next != nullptr) {
        p = p->next;
    }
    nod* q = p->next;
    delete q;
    p->next = nullptr;
}

void afisareLista(nod*& cap) {
    nod* p = cap;
    while (p) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

int top(nod*& cap) {
    nod* p = cap;
    while (p->next !=nullptr) {
        p = p->next;
    }
    return p->data;
}

void dfsRecursiv(int** matrice, int n, int nodStart, bool viz[1000], nod*& parcurgere) {
    viz[nodStart] = true;
    inserareLaFinal(parcurgere, nodStart);
    for (int vecin = 0; vecin < n; vecin++) {
        if (matrice[nodStart][vecin] && !viz[vecin]) {//ma asigur ca vizitez un vecin nevizitat
            dfsRecursiv(matrice, n, vecin, viz, parcurgere);
        }
    }
}

void bfsIterativ(int** matrice, int n, int nodStart, bool viz[1000], nod*& parcurgere) {
    nod* coada = 0;
    inserareLaFinal(coada, nodStart);
    while (coada != nullptr) {
        viz[coada->data] = true;
        inserareLaFinal(parcurgere, coada->data);
        for (int vecin = 0; vecin < n; vecin++) {
            if (matrice[coada->data][vecin] && !viz[vecin]) {//ma asigur ca vizitez un vecin nevizitat
                inserareLaFinal(coada, vecin);
            }
        }
        coada = coada->next;
    }
}

void bfsRecursiv(int** matrice, int n, int nodStart, bool viz[1000], nod*& parcurgere) {
    if (!viz[nodStart]) {
        inserareLaFinal(parcurgere, nodStart);
        viz[nodStart] = true;
    }
    for (int vecin = 0; vecin < n; vecin++) {
        if (matrice[nodStart][vecin] && !viz[vecin]) {
            inserareLaFinal(parcurgere, vecin);
        }
    }
    for (int vecin = 0; vecin < n; vecin++) {
        if (matrice[nodStart][vecin] && !viz[vecin]) {
            viz[vecin] = true;
            bfsRecursiv(matrice, n, vecin, viz, parcurgere);
        }
    }
}

int main()
{
    int n;
    std::cin >> n;//numar noduri;
    int** matrice = new int* [n];
    for (int i = 0; i < n; i++) {
        matrice[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrice[i][j] = 0;
        }
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y, cost;
        std::cin >> x >> y >> cost;
        matrice[x][y] = cost;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
    bool viz[1000] = { false };
    nod* parcurgere = 0;
    bfsRecursiv(matrice, n, 0, viz, parcurgere);
    afisareLista(parcurgere);
    return 0;
}


