#ifndef VEHICLE_H
#define VEHICLE_H
#include "iostream"
#include <string>
class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string name, int nWheels,bool engine,int engineCV,bool fuel,char fuelType,std::string color,bool wings,bool reactor,bool undercarriage,bool locomotive,bool wagon,int numWagon,bool spareWheel,std::string registration);

    /*vehicle::name = name;
    vehicle::nWheels = nWheels;
    vehicle::engine = engine;
    vehicle::engineCV = engineCV;
    vehicle::fuel = fuel;
    vehicle::fuelType = fuelType;
    vehicle::color = color;
    vehicle::wings = wings;
    vehicle::reactor = reactor;
    vehicle::undercarriage = undercarriage;
    vehicle::locomotive = locomotive;
    vehicle::wagon = wagon;
    vehicle:: spareWheel = spareWheel;
    vehicle::registration = registration;*/

    //Metodos Getter
    std::string getName();
    std::string getType();
    std::string getNWheels();
    std::string getEngine();
    std::string getEngineCV();
    std::string getFuel();
    std::string getFuelType();
    std::string getColor();
    bool getWings();
    bool getReactor();
    std::string getUndercarriage();
    std::string getLocomotive();
    std::string getWagon();
    std::string getSpareWheel();
    std::string getRegistration();

    bool isASportsCar(int, bool, int, bool, char, bool, bool, bool, bool, int, bool);
    bool isAPlane(int, bool, int, bool, char, std::string, bool, bool, bool, bool, int, bool);
    bool isABike(int,bool,bool,bool,bool,bool,int,bool);
    bool isTricycle(int,bool, bool,bool,bool,bool,bool,int,bool);
    void IncorrectInformation(); // informacion erronea
    std::string makeRegistration(); // matricula

private:
    std::string type;
    std::string name;
    int nWheels;
    bool engine;
    int engineCV;
    bool fuel;
    char fuelType;
    std::string color;
    bool wings;
    bool reactor;
    bool undercarriage;
    bool locomotive;
    bool wagon;
    int numWagon;
    bool spareWheel;
    std::string registration;
};
#endif // VEHICLE_H
