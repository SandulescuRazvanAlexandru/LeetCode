#include <iostream>
#include <vector>

class ParkingSystem {
private:
    std::vector<int> slots;

public:
    ParkingSystem(int big, int medium, int small) {
        slots = { big, medium, small };
    }

    bool addCar(int carType) {
        if (slots[carType - 1] > 0) { 
            slots[carType - 1]--;
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
