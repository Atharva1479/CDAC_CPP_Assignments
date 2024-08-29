#include<iostream>

using namespace std;

class Tollbooth {

    unsigned int totalCars;
    double totalMoney;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    Tollbooth() {
        totalCars = 0;
        totalMoney = 0;
        payingCars = 0;
        nonPayingCars = 0;
    }

    void payingCar() {
        totalCars++;
        payingCars++;
        totalMoney += 0.50; 
    }

    void nopayCar() {
        totalCars++;
        nonPayingCars++;
    }

    void printOnConsole() {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Money Collected: $" << totalMoney << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non-Paying Cars: " << nonPayingCars << endl;
    }
};

int main() {
    Tollbooth tb;

    tb.payingCar();   // Simulate a paying car
    tb.payingCar();   // Simulate another paying car
    tb.nopayCar();    // Simulate a non-paying car

    tb.printOnConsole();  // Display the results

    return 0;
}
