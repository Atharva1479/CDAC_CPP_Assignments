#include <iostream>

using namespace std;

struct Date {

    int day;
    int month;
    int year;

    void initDate() {

        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole() {

        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }

    void acceptDateFromConsole() {

        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear() {

        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int menu() {

    int choice;

    cout << "0. EXIT" << endl;
    cout << "1. Initialize Date" << endl;
    cout << "2. Accept Date from Console" << endl;
    cout << "3. Print Date on Console" << endl;
    cout << "4. Check if Leap Year" << endl;

    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main() {

    Date t1;
    int choice;

    while ((choice = menu()) != 0) {

        switch (choice) {

            case 1:
                t1.initDate();
                cout << "Date initialized successfully." << endl;
                break;
            case 2:
                t1.acceptDateFromConsole();
                break;
            case 3:
                t1.printDateOnConsole();
                break;
            case 4:
                if (t1.isLeapYear())
                    cout << t1.year << " is a leap year." << endl;
                else
                    cout << t1.year << " is not a leap year." << endl;
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }
    }
    return 0;
}
