#include <iostream>
#include"Functii.hpp"

int main()
{
    element* coada = 0;
    int x;
    std::cin >> x;
    while (x) {
        put(coada, x);
        std::cin >> x;
    }
    //std::cout << isEmpty(coada) << std::endl;
    get(coada);
    afisareCoada(coada);
   // std::cout << front(coada) << std::endl;

    return 0;
}

