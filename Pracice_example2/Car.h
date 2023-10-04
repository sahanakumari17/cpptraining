#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "CarType.h"


class Car
{
private:
    /* data */
    std::string  _carChasisno;
    std::string _carBrand;
    std::string _carmodel;
    CarCatagory _type; 
    float _price;
    int _seatcount;
    int _fuelcapacity;


public:
    Car(std::string  _carChasisno,std::string _carBrand, std::string _carmodel, CarCatagory _type,  float _price, int _seatcount, int _fuelcapacity) ;
    Car(std::string  _carChasisno,std::string _carmodel,std::string _carBrand,float _price);
    //constructor with 3 parameter

    //default constructor disables 
    Car()=delete;
    //defaulted copy constuctor
    Car(const Car& obj)=default;

    ~Car() {}

    std::string carChasisno() const { return _carChasisno; }
    void setCarChasisno(const std::string &carChasisno) { _carChasisno = carChasisno; }

    std::string carBrand() const { return _carBrand; }
    void setCarBrand(const std::string &carBrand) { _carBrand = carBrand; }

    std::string carmodel() const { return _carmodel; }
    void setCarmodel(const std::string &carmodel) { _carmodel = carmodel; }

    CarCatagory type() const { return _type; }
    void setType(const CarCatagory &type) { _type = type; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    int seatcount() const { return _seatcount; }
    void setSeatcount(int seatcount) { _seatcount = seatcount; }

    int fuelcapacity() const { return _fuelcapacity; }
    void setFuelcapacity(int fuelcapacity) { _fuelcapacity = fuelcapacity; }
};

#endif // CAR_H
