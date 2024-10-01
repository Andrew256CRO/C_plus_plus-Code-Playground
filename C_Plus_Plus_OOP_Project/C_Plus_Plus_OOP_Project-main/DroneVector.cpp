#include<iostream>
#include"DroneVector.hpp"

void VectorOfDrones::showVectorOfDrones(std::vector<Drone> drones) {
	std::vector<Drone>::iterator drone;
	for (drone = drones.begin(); drone != drones.end(); drone++) {
		(*drone).afisare();
	}
}

void VectorOfDrones::sortDronesByAscendingPrice(std::vector<Drone>& drones) {
	std::cout << "The ASCENDING sort method has been called, the new printing should be different."<< std::endl;
	std::sort(drones.begin(), drones.end()); // uses the < comparator for comparison. It compares in the ascending order by default
}

void VectorOfDrones::sortDronesByDescendingPrice(std::vector<Drone>& drones) {
	std::cout << "The DESCENDING sort method has been called, the new printing should be different." << std::endl;
	std::sort(drones.begin(), drones.end(), Jucarie::compareJucarii);
}