

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, carType, pickup, dropoff, fuel, insurance;
    int days;
    double budget;

    cout << "Welcome to AutoRent Chatbot!\n";
    cout << "Your name: ";
    getline(cin, name);

    cout << "Car type (Sedan/SUV/Sports/Luxury): ";
    getline(cin, carType);

    cout << "Pickup location: ";
    getline(cin, pickup);

    cout << "Drop-off location: ";
    getline(cin, dropoff);

    cout << "Rental days: ";
    cin >> days;

    cout << "Budget per day ($): ";
    cin >> budget;

    cout << "Fuel type (Petrol/Diesel/Electric): ";
    cin >> fuel;

    cout << "Add insurance for $15/day? (yes/no): ";
    cin >> insurance;

    // Suggestion logic
    string suggestion;
    if (carType == "SUV" || carType == "suv")
        suggestion = (budget < 50) ? "Toyota RAV4" : (budget < 80) ? "Honda CR-V" : "BMW X5";
    else if (carType == "Sedan" || carType == "sedan")
        suggestion = (budget < 40) ? "Toyota Corolla" : (budget < 70) ? "Honda Accord" : "Mercedes E-Class";
    else if (carType == "Sports" || carType == "sports")
        suggestion = (budget < 100) ? "Ford Mustang" : "Chevrolet Corvette";
    else if (carType == "Luxury" || carType == "luxury")
        suggestion = (budget < 120) ? "Tesla Model S" : "Rolls-Royce Phantom";
    else
        suggestion = "a variety of models (please check with agent)";

    double total = days * budget + ((insurance == "yes" || insurance == "Yes") ? days * 15 : 0);

    cout << "\nRecommended car: " << suggestion << endl;
    cout << "Total estimated cost: $" << total << endl;
    cout << "Thank you, " << name << "! We hope you enjoy your rental.\n";
    return 0;
}