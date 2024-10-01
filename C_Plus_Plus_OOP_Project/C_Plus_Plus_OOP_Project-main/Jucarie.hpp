#pragma once
#include <string>

class Jucarie {

protected:
	std::string culoare;
	double pret_Fara_TVA;

public:
	void afisare();
	Jucarie();
	Jucarie(std::string cevaCulaore, double pretReal);
	~Jucarie();
	void setColorOfTheToy(std::string color); //changes the color of the toy with the new one received
	double operator+=(double number);
	double operator-=(double number);
	double operator+(double number);
	double operator-(double number);
	double operator*(double numarr);
	double getPrice(); //getting the price of a toy
	double operator/(double num);
	bool operator<(Jucarie j);
	bool operator>(Jucarie jww);
	static bool compareJucarii(Jucarie& j1, Jucarie& j2);
};
