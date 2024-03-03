//import header
#include "header.hh"

using namespace std;

//konsturktor
Garage::Garage(){
    namaGarasi = " ";
    luasGarasi = 0;
}

//inisialisasi konsturktor
Garage::Garage(string namaGarasi, int luasGarasi){
    this->namaGarasi = namaGarasi;
    this->luasGarasi = luasGarasi;
}

//inisiasi method setter dan getter
void Garage::setNamaGarasi(string namaGarasi){
    this->namaGarasi = namaGarasi;
}
void Garage::setLuasGarasi(int luasGarasi){
    this->luasGarasi = luasGarasi;
}

void Garage::addCar(Car car){
    this->car.push_back(car);
}
void Garage::addMotorcycle(Motorcycle motorcycle){
    this->motorcycle.push_back(motorcycle);
}

string Garage::getNamaGarasi(){
    return this->namaGarasi;
}
int Garage::getLuasGarasi(){
    return this->luasGarasi;
}
list<Car> Garage::getCar(){
    return this->car;
}
list<Motorcycle> Garage::getMotorcycle(){
    return this->motorcycle;
}
Garage::~Garage(){
    
}