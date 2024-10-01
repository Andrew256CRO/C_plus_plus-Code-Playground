#include <iostream>
#include"Functii.hpp"

int main()
{
    coadaStatica q;
    init(q); // Inițializare coadă

    put(q, 10); // Adăugare element în coadă
    put(q, 20);
    put(q, 30);

    std::cout << "Front: " << front(q) << std::endl; // Obținere valoare din vârful cozii
    std::cout << "Is Empty? " << isEmpty(q) << std::endl; // Verificare dacă coada este goală
    std::cout << "Is Full? " << isFull(q) << std::endl; // Verificare dacă coada este plină

    int val = get(q); // Obținere și eliminare valoare din vârful cozii
    std::cout << "Removed value: " << val << std::endl;

    std::cout << "Front after removal: " << front(q) << std::endl;
    std::cout << "Is Empty? " << isEmpty(q) << std::endl;
    std::cout << "Is Full? " << isFull(q) << std::endl;

    return 0;
}

