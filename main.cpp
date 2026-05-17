#include <stdio.h>
#include <iostream>
using namespace std;

class Vehicle {
    public:
    	float mass;
	    int topSpeed;
	    string color;
	    bool isLicenseRequired;
	    
	    virtual void fuelType(){
	        cout << "Fuel depends on the specific vehicle" << endl;
	    }
	    
};

class Car: public Vehicle {
    public:
    	bool hasSteeringOnLeft;
    	bool isManual;
    	string fuel;
    	
    	void fuelType(){
    	    cout << fuel << endl;
    	}
    	
    	Car(){
    	    fuel = "Pb98";
    	}
    	
    	Car(string x){
    	    fuel = x;
    	}
};

class Bike: public Vehicle {
    public:
        float frameType;
        bool hasBasket;
        
        void fuelType(){
            cout << "muscles" << endl;
        }

};


int main()
{
    Vehicle **vehicles = new Vehicle*[5];
    
    vehicles[0] = new Car;
    vehicles[1] = new Car("diesel");
    vehicles[2] = new Vehicle;
    vehicles[3] = new Bike;
    vehicles[4] = new Car("Pb95");
    
    vehicles[0]->fuelType();
    vehicles[1]->fuelType();
    vehicles[2]->fuelType();
    vehicles[3]->fuelType();
    vehicles[4]->fuelType();
    

	return 0;
}