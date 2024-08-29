#include <iostream>
#include <string>
using namespace std;

namespace NStudent {

    class Student {

    private:
        int rollNo;
        string name;
        float marks;

    public:
        void initStudent() {

            rollNo = 0;
            name = "Unknown";
            marks = 0.0;
        }

        void acceptStudentFromConsole() {

            cout << "Enter Roll No: ";
            cin >> rollNo;
            cin.ignore();  
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Marks: ";
            cin >> marks;
        }

        void printStudentOnConsole() {

            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
    };
}

int menu() {

    int choice;
    cout << "\nMenu:\n";
    cout << "0. EXIT\n";
    cout << "1. Initialize Student\n";
    cout << "2. Accept Student Details\n";
    cout << "3. Print Student Details\n";
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main() {

    NStudent::Student s1;  
    int choice;

    while ((choice = menu()) != 0) {

        switch (choice) {

            case 1:
                s1.initStudent();
                cout << "Student initialized successfully." << endl;
                break;
            case 2:
                s1.acceptStudentFromConsole();
                break;
            case 3:
                s1.printStudentOnConsole();
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }
    }
    return 0;
}
