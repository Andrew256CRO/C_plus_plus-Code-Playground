#include <iostream>
#include"Jucarie.hpp"
#include"Masina.hpp"
#include"Drona.hpp"
#include<algorithm> // std::sort
#include<vector> // std::vector
#include"DroneVector.hpp"

int main()
{
    Jucarie j1;
    j1.afisare();
    Jucarie j2("rosie", 256.73);
    Jucarie j3("albastra", 289);
    Jucarie j4("black", 300.00);
    Jucarie j5("purple", 78.4);
    j2.afisare();
    j2.setColorOfTheToy("yellow");
    j2.afisare();
    /*std::cout << "Price of the toy j4 after adding 250.23 should be 550.23: " << (j4 += 250.23) << std::endl;
    std::cout << "Price of the toy j3 after substracting 3.5 should be 285.5: " << (j3 -= 3.5) << std::endl;
    std::cout << "Price of the toy j4 after adding 250.23 should be 550.23: " << (j4 + 250.23) << std::endl;
    std::cout << "Price of the toy j3 after substracting 3.5 should be 285.5: " << (j3 - 3.5) << std::endl;
    std::cout << "Price of the toy j4 after multiplying the price with 2 should be 600: " << (j4 * 2) << std::endl;
    std::cout << "Price of the toy j4 after dividing the price by 2 should be 150: " << (j4 / 2) << std::endl;*/

    Masina m1;
    m1.afisare();
    //Masina m2("alb", 256.4, 4);
    Masina m2(j2, 4);
    Masina m3(j3, 8);
    Masina m4(j4, 5);
    Masina m5(j5, 1);
    Masina m6(j2, 3);
    Masina m7(j2, 4);
    m2.afisare();
    m3.afisare();
    m3.setColorOfTheToy("green");
    m3.afisare();
    m4.afisare();
    /*std::cout << "If m2 got more batterries than m1(the cars), this should print 1, otherwise 0: " << (m1 < m2) << std::endl;
    std::cout << "If m2 got more batterries than m3(the cars), this should print 1, otherwise 0: " << (m3 < m2) << std::endl;
    std::cout << "If m3 got more batterries than m5(the cars), this should print 1, otherwise 0: " << (m3 > m5) << std::endl;
    std::cout << "If m4 got more batterries than m3(the cars), this should print 1, otherwise 0: " << (m4 > m3) << std::endl;
    std::cout << "If m2 got the same number of batterries as m7(the cars), this should print 1, otherwise 0: " << (m7 == m2) << std::endl;
    std::cout << "If m2 got the same number of batterries as m6(the cars), this should print 1, otherwise 0: " << (m6 == m2) << std::endl;
    std::cout << "If m4 got equal or less number of batterries than m3(the cars), this should print 1, otherwise 0: " << (m4 <= m3) << std::endl;
    std::cout << "If m4 got equal or less number of batterries than m5(the cars), this should print 1, otherwise 0: " << (m4 <= m5) << std::endl;
    std::cout << "If m7 got equal or less number of batterries than m2(the cars), this should print 1, otherwise 0: " << (m7 <= m2) << std::endl;
    std::cout << "If m7 got equal or more number of batterries than m2(the cars), this should print 1, otherwise 0: " << (m7 >= m2) << std::endl;
    std::cout << "If m7 got equal or more number of batterries than m3(the cars), this should print 1, otherwise 0: " << (m7 >= m3) << std::endl;
    std::cout << "If m4 got equal or more number of batterries than m5(the cars), this should print 1, otherwise 0: " << (m4 >= m5) << std::endl;
    std::cout << "Price of the car toy m5 after adding 2.6 should be 81: " << (m5 += 2.6) << std::endl;
    std::cout << "Price of the car toy m4 after duplicating by 2 should be 600: " << (m4 *= 2) << std::endl;
    std::cout << "Price of the car toy m4 after dividing by 2 should be 150: " << (m4 /= 2) << std::endl;
    std::cout << "Original price: " << m4.getPrice() << std::endl;
    std::cout << "Price after post-increment: " << (m4++) << std::endl;
    std::cout << "Updated price: " << m4.getPrice() << std::endl;*/
    std::cout << "Original price: " << m4.getPrice() << std::endl;
    std::cout << "Price after post-decrement: " << (m4--) << std::endl;
    std::cout << "Updated price: " << m4.getPrice() << std::endl;

    Drone d1;
    Drone d2(j2, 4);
    Drone d3(j3, 2);
    Drone d4(j4, 6);
    Drone d5(j5, 5);
    d1.afisare();
    d4.afisare();

    std::vector<Drone> drones;
    drones.push_back(d1);
    drones.push_back(d2);
    drones.push_back(d3);
    drones.push_back(d4);
    drones.push_back(d5);

    VectorOfDrones vectorDrones;
    vectorDrones.showVectorOfDrones(drones);
    std::cout << "/////////////////////////////////////////////////////////////////////////"<< std::endl;
    vectorDrones.sortDronesByAscendingPrice(drones);
    std::cout << "/////////////////////////////////////////////////////////////////////////" << std::endl;
    vectorDrones.showVectorOfDrones(drones);
    std::cout << "/////////////////////////////////////////////////////////////////////////" << std::endl;
    vectorDrones.sortDronesByDescendingPrice(drones);
    std::cout << "/////////////////////////////////////////////////////////////////////////" << std::endl;
    vectorDrones.showVectorOfDrones(drones);
    return 0;
}

