#pragma once
#include"Drona.hpp"
#include<vector> // std::vector
#include<algorithm> // std::sort

class VectorOfDrones : public Drone {
public:
	void showVectorOfDrones(std::vector<Drone> drones);
	void sortDronesByAscendingPrice(std::vector<Drone>& drones);
	void sortDronesByDescendingPrice(std::vector<Drone>& dronesss);
};
