#include <iostream>
#include "Passenger.h"

int main() {
    // Creating a passenger object with initial values
    Passenger passenger("Jesus Raul", "Erives Robles", "12A", "NX2017", "Private Jet Access");

    // Use the public methods to interact with the object
    //Also prints out basic information here 
    std::cout << "Your information at a glance " << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    //Prints said variable using the getter method 
    std::cout << "Name: " << passenger.getFirstName() << std::endl;
    std::cout << "Flight Number: " << passenger.getFlightNumber() << std::endl;
    std::cout << "Seat Number: " << passenger.getSeatNumber() << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    //Rest of detailed information printed here
    std::cout << "More info " << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Last Name: " << passenger.getLastName() << std::endl;
    std::cout << "Class Service: " << passenger.getClassService() << std::endl;




    return 0; //Returns and ends program
}
