#include <iostream>

using namespace std;

class Box
{

    double length;
    double width;
    double height;

public:
    Box()
    {

        length = 1.0;
        width = 1.0;
        height = 1.0;
    }

    Box(double side)
    {

        length = side;
        width = side;
        height = side;
    }

    Box(double l, double w, double h)
    {

        length = l;
        width = w;
        height = h;
    }

    double calculateVolume()
    {

        double res = length * width * height;
        return res;
    }
};

int menu()
{

    int choice;

    cout << "\nMenu:\n";
    cout << "1. Calculate Volume with default values\n";
    cout << "2. Calculate Volume with length, breadth, and height with same value\n";
    cout << "3. Calculate Volume with different length, breadth, and height values\n";
    cout << "4. Exit\n";

    cout << "Enter a choice: ";
    cin >> choice;
    return choice;
}

int main()
{

    int choice;
    double side, l, w, h;

    while ((choice = menu()) != 4)
    {

        switch (choice)
        {
        case 1:
        {
            Box box;
            cout << "Volume: " << box.calculateVolume() << endl;
            break;
        }
        case 2:
        {
            cout << "Enter the value for length, width, height: ";
            cin >> side;
            Box box(side);
            cout << "Volume: " << box.calculateVolume() << endl;
            break;
        }
        case 3: {
            int l, w, h;
            cout << "Enter length, width, and height: ";
            cin >> l >> w >> h;
            Box b3(l, w, h);
            cout << "Volume is = " << b3.calculateVolume() << endl;
            break;
        }
        case 4:
        {
            cout << "Exiting program!" << endl;
            break;
        }
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}