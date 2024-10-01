#include<iostream>
#include"Masina.hpp"

Masina::Masina() : Jucarie(){
	std::cout << "Apel constructor de initializare fara argumente clasa Masina ce apeleaza constructor fara argumente de initializare din clasa de baza Jucarie." << std::endl;
	this->numar_baterii = 0;
}

/*Masina::Masina(std::string culoareMasina, double pretFaraTVA, unsigned int numarBat) : Jucarie(culoareMasina, pretFaraTVA) {
	std::cout << "Apel constructor de initializare cu paramteri clasa Masina ce apeleaza constructor cu parametri de initializare din clasa de baza Jucarie." << std::endl;
	this->numar_baterii = numarBat;
}*/

Masina::Masina(const Jucarie& juc, unsigned int numarbat) : Jucarie(juc) {
	std::cout << "Apel constructor de initializare cu parametri clasa Masina cu ajutorul transmiterii uni obiect din clasa de baza Jucarie drept parametru." << std::endl;
	this->numar_baterii = numarbat;
}

Masina::~Masina() {
	std::cout << "Apel destructor clasa Masina." << std::endl;
}

void Masina::afisare() {
	std::cout << "Culoare masina: " << this->culoare << "; " << "Pret fara TVA masina: " << this->pret_Fara_TVA << "; " << "Numar de baterii masina: " << this->numar_baterii << std::endl;
}

bool Masina::operator<(Masina m1) { //compares 2 cars regarding the number of batterries
	return this->numar_baterii < m1.numar_baterii;
}

bool Masina::operator>(Masina m1) {
	return this->numar_baterii > m1.numar_baterii;
}

bool Masina::operator==(Masina m1) {
	return this->numar_baterii == m1.numar_baterii;
}

bool Masina::operator<=(Masina m1) {
	return this->numar_baterii <= m1.numar_baterii;
}

bool Masina::operator>=(Masina m2) {
	return this->numar_baterii >= m2.numar_baterii;
}

double Masina::operator*=(double nra) {
	return this->pret_Fara_TVA *= nra;
}

double Masina::operator/=(double numar) {
	return this->pret_Fara_TVA /= numar;
}

double Masina::operator++(int) {
	return this->pret_Fara_TVA++;
}

double Masina::operator--(int) {
	return this->pret_Fara_TVA--;
}