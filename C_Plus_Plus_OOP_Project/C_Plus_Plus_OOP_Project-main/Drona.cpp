#include<iostream>
#include"Drona.hpp"

Drone::Drone() : Jucarie() {
	std::cout << "Apel constructor de initializare fara argumente clasa Drona ce apeleaza constructor fara argumente de initializare din clasa de baza Jucarie." << std::endl;
	this->numar_elice = 0;
}

Drone::Drone(const Jucarie& juc, unsigned int numarELice) : Jucarie(juc) {
	std::cout << "Apel constructor de initializare cu parametri clasa Drona cu ajutorul transmiterii uni obiect din clasa de baza Jucarie drept parametru." << std::endl;
	this->numar_elice = numarELice;
}

Drone::~Drone() {
	std::cout << "Apel destructor clasa Drona." << std::endl;
}

void Drone::afisare() {
	std::cout << "Culoare drona: " << this->culoare << "; " << "Pret fara TVA drona: " << this->pret_Fara_TVA << "; " << "Numar de elici drona: " << this->numar_elice << std::endl;
}