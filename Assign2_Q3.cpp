#include <iostream>
#include <string>

using namespace std;

class Address {

    string building;
    string street;
    string city;
    int pin;

public:
    
    Address() {
        
        building = "sunbeam";
        street = "hinjewadi";
        city = "pune";
        pin = 431203;
    }

    // Setters
    void setBuilding(const string& b) {
        building = b;
    }
    void setStreet(const string& s) {
        street = s;
    }
    void setCity(const string& c) {
        city = c;
    }
    void setPin(int p) {
        pin = p;
    }

    // Getters
    string getBuilding() const {
        return building;
    }
    string getStreet() const {
        return street;
    }
    string getCity() const {
        return city;
    }
    int getPin() const {
        return pin;
    }

    // Accept method
    void Accept() {
        cout << "Enter Building address: ";
        getline(cin, building);
        cout << "Enter Street address: ";
        getline(cin, street);
        cout << "Enter City address: ";
        getline(cin, city);
        cout << "Enter PIN code: ";
        cin >> pin;
        cin.ignore(); // To ignore the newline character left in the buffer
    }

    // Display method
    void Display() const {
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "PIN: " << pin << endl;
    }
};

int main() {
    Address a;
    a.setBuilding("Antilia");
    a.setStreet("Marine Drive");
    a.setCity("Mumbai");
    a.setPin(400021);

    // Display using getter methods
    cout << a.getBuilding() << endl;
    cout << a.getStreet() << endl;
    cout << a.getCity() << endl;
    cout << a.getPin() << endl;

    // Accept new address details
    a.Accept();
    
    // Display the updated details
    a.Display();

    return 0;
}
