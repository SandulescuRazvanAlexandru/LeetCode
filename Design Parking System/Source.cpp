#include <iostream>
#include <vector>

class ParkingSystem {
private:
    int big, medium, small;
public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    bool addCar(int carType) {
        if (carType == 1 && this->big > 0) {
            --this->big;
            return true;
        }
        if (carType == 2 && this->medium > 0) {
            --this->medium;
            return true;
        }
        if (carType == 3 && this->small > 0) {
            --this->small;
            return true;
        }
        return false;
    }
};

int main() {
    ParkingSystem parkingSystem(1, 0, 0);

    // Try to park cars of different types
    std::cout << std::boolalpha; // Print 'true' or 'false' for boolean values
    std::cout << parkingSystem.addCar(1) << std::endl; // True, there is a big slot
    std::cout << parkingSystem.addCar(2) << std::endl; // False, there are no medium slots
    std::cout << parkingSystem.addCar(3) << std::endl; // False, there are no small slots
    std::cout << parkingSystem.addCar(1) << std::endl; // False, the big slot is now taken

    return 0;
}
