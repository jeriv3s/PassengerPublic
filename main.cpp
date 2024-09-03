#include <iostream>
#include "Passenger.h"

int main() {
    // Creating a passenger object
    Passenger passenger("Jesus Raul", "Erives", "12A", "NX2017", "Private Jet Access");

    // Use the public methods to interact with the object
    //Also prints out basic information here 
    std::cout << "Your information at a glance " << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Name: " << passenger.getFirstName() << std::endl;
    std::cout << "Flight Number: " << passenger.getFlightNumber() << std::endl;
    std::cout << "Seat Number: " << passenger.getSeatNumber() << std::endl;
    std::cout << "--------------------------------------------" << std::endl;




    return 0;
}
