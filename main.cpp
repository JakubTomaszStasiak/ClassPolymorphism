#include <stdio.h>
#include <iostream>
using namespace std;

class Vehicle {
    public:
        float mass;
        int topSpeed;
        string color;
        bool isLicenseRequired;
};

class Car: public Vehicle{
    public:
        bool hasSteeringOnLeft;
        bool isManual;
};

class 


int main()
{
    Car polonez;
    
    polonez.mass = 30;
    
    cout << polonez.mass;

    return 0;
}