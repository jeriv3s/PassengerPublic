#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    // Variable Private info 
    std::string firstName;
    std::string lastName;
    std::string seatNumber;
    std::string flightNumber;
    std::string classService;

public:
    // Constructor
    Passenger(std::string firstName, std::string lastName, std::string seatNumber, std::string flightNumber, std::string classService)
        : firstName(firstName), lastName(lastName), seatNumber(seatNumber), flightNumber(flightNumber), classService(classService) {}

    // Getter for firstName
    std::string getFirstName() const {
        return firstName;
    }

    // Setter for firstName
    void setFirstName(const std::string &firstName) {
        this->firstName = firstName;
    }

    // Getter for lastName
    std::string getLastName() const {
        return lastName;
    }

    // Setter for lastName
    void setLastName(const std::string &lastName) {
        this->lastName = lastName;
    }

    // Getter for seatNumber
    std::string getSeatNumber() const {
        return seatNumber;
    }

    // Setter for seatNumber
    void setSeatNumber(const std::string &seatNumber) {
        this->seatNumber = seatNumber;
    }
     
    // Getter for flightNumber
    std::string getFlightNumber() const {
        return flightNumber;
    }

    // Setter for flightNumber
    void setFlightNumber(const std::string &flightNumber) {
        this->flightNumber = flightNumber;
    }

    // Getter for classService
    std::string getClassService() const {
        return classService;
    }

    // Setter for classService
    void setClassService(const std::string &classService) {
        this->classService = classService;
    }
};

#endif // PASSENGER_H
