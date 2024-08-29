#include <iostream>

using namespace std;

class Cylinder
{

    double radius;
    double height;
    static double const PI = 3.14;

public:
    Cylinder() : radius(0), height(0){};

    Cylinder(double r, double h) : radius(r), height(h){}; 

    void setRadius(double radius)
    {

        this->radius = radius;
    }

    void getRadius()
    {

        cout << "Radius: " << radius << endl;
    }

    void setHeight(double height)
    {

        this->height = height;
    }

    void getHeight()
    {

        cout << "Height: " << height << endl;
    }

    double calculateVolume()
    {

        double vol = PI * radius * radius * height;
        return vol;
    }
};

int main()
{

    Cylinder c;

    c.setRadius(10);
    c.getRadius();
    c.setHeight(10);
    c.getHeight();
    cout << "Volume: " << c.calculateVolume();

    return 0;
}