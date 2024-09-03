#include <iostream>
#include "Passenger.h"

int main() {
    // Create a Passenger object
    Passenger passenger("John", "Doe", "12A", "AB123", "Economy");

    // Use the public methods to interact with the object
    std::cout << "First Name: " << passenger.getFirstName() << std::endl;

    // Change the first name using the setter
    passenger.setFirstName("Jane");
    std::cout << "Updated First Name: " << passenger.getFirstName() << std::endl;

    return 0;
}
