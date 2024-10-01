#pragma once
#include"Jucarie.hpp"

class Masina : public Jucarie {
private:
	unsigned int numar_baterii;
public:
	Masina();
	//Masina(std::string color, double pretReal, unsigned int numberOfBaterries);
	Masina(const Jucarie& jucarie, unsigned int numarBat); //const e optional, doar daca nu vreau sa modific valorile elementelor din interiorul obiectului jucarie
	~Masina();
	void afisare();
	bool operator<(Masina masina); //overloading the '<' operator
	bool operator>(Masina masina); //overlaoding the '>' operator
	bool operator==(Masina masina);
	bool operator<=(Masina masina);
	bool operator>=(Masina masina);
	double operator*=(double nr);
	double operator/=(double number);
	double operator++(int);
	double operator--(int);
};
