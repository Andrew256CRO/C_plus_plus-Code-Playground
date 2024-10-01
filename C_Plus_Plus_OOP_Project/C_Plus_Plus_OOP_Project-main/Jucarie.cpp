#include<iostream>
#include"Jucarie.hpp"

Jucarie::Jucarie() {
	std::cout << "Apel constructor de initializare fara argumente clasa Jucarie." << std::endl;
	this->culoare = " ";
	this->pret_Fara_TVA = 0.0;
}

Jucarie::Jucarie(std::string color, double realPrice) {
	std::cout << "Apel constructor de initializare cu parametri clasa Jucarie." << std::endl;
	this->culoare = color;
	this->pret_Fara_TVA = realPrice;
}

Jucarie::~Jucarie() {
	std::cout << "Apel destructor clasa Jucarie." << std::endl;
}

void Jucarie::afisare() {
	std::cout << "Culoare jucarie: " << this->culoare << "; " << "Pret fara TVA jucarie: " << this->pret_Fara_TVA << std::endl;
}

void Jucarie::setColorOfTheToy(std::string color) {
	this->culoare = color;
}

double Jucarie::operator+=(double number) { //adding to a price of a toy
	return this->pret_Fara_TVA +=number;
}

double Jucarie::operator-=(double number) {//subtracting from price
	return this->pret_Fara_TVA -= number;
}

double Jucarie::operator+(double num) {
	return this->pret_Fara_TVA + num;
}

double Jucarie::operator-(double numar) {
	return this->pret_Fara_TVA - numar;
}

double Jucarie::operator*(double num) {
	return this->pret_Fara_TVA * num;
}

double Jucarie::getPrice() {
	return this->pret_Fara_TVA;
}

double Jucarie::operator/(double number) {
	return this->pret_Fara_TVA / number;
}

bool Jucarie::operator<(Jucarie j1) {
	return this->pret_Fara_TVA < j1.pret_Fara_TVA;
}

bool Jucarie::operator>(Jucarie j) {
	return this->pret_Fara_TVA > j.pret_Fara_TVA;
}

bool Jucarie::compareJucarii(Jucarie& j1, Jucarie& j2) {
	return j1 > j2;
}