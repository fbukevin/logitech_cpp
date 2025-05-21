#ifndef CAR_H
#define CAR_H

class Car {
private:
    std::string brand;
    int speed;
public:
    // Constructor
    Car(std::string b, int s);

    // Member function
    void display();
};

#endif // CAR_H