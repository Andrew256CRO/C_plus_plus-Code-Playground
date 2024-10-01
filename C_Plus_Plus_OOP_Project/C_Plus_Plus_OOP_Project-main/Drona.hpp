#pragma once
#include"Jucarie.hpp"

class Drone : public Jucarie {
protected:
	unsigned int numar_elice;
public:
	void afisare();
	Drone();
	Drone(const Jucarie& jucarie, unsigned int nrEleice);
	~Drone();

};
