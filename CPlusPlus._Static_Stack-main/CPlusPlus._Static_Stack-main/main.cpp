#include <iostream>
#include"Functii.hpp"

int main()
{
    stivaOrdonata stiva;
    init(stiva); // Inițializarea stivei

    push(stiva, 10); // Adăugarea elementului 10 în stivă
    push(stiva, 20); // Adăugarea elementului 20 în stivă
    push(stiva, 30); // Adăugarea elementului 30 în stivă

    std::cout << "Elementul din varful stivei: " << topStiva(stiva) << std::endl; // Afișează elementul din vârful stivei (30)
    std::cout << isEmpty(stiva);
    std::cout << isFull(stiva);
    pop(stiva);
    std::cout << "Elementul din varful stivei: " << topStiva(stiva) << std::endl; // Afișează elementul din vârful stivei (20)
    return 0;
}

