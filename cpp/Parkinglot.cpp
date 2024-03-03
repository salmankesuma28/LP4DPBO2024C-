//import header
#include "header.hh"

using namespace std;

Parkinglot::Parkinglot(){
    kapasitas = 0;
    jumlahkendaraan = 0;
}


//inisiai kontruktor
Parkinglot::Parkinglot(int kapasitas, int jumlahkendaraan){
    this->kapasitas = kapasitas;
    this->jumlahkendaraan = 0;
}

//inisiasi method setter dan getter
void Parkinglot::setKapasitas(int kapasitas){
    this->kapasitas = kapasitas;
}
void Parkinglot::setJumlahkendaraan(int jumlahkendaraan){
    this->jumlahkendaraan = jumlahkendaraan;
}
void Parkinglot::addCar(Car car){
    this->car.push_back(car);
}
void Parkinglot::addMotorcycle(Motorcycle motorcycle){
    this->motorcycle.push_back(motorcycle);
}

int Parkinglot::getKapasitas(){
    return this->kapasitas;
}
int Parkinglot::getJumlahkendaraan(){
    return this->jumlahkendaraan;
}
list<Car> Parkinglot::getCar(){
    return this->car;
}
list<Motorcycle> Parkinglot::getMotorcycle(){
    return this->motorcycle;
}

//destryktor
Parkinglot::~Parkinglot(){
    
}
