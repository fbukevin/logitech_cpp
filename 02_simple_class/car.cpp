#include <iostream>
#include "car.h"

Car::Car(std::string b, int s) {
    brand = b;
    speed = s;
}

// Member function
void Car::display() {
    std::cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << std::endl;
}
