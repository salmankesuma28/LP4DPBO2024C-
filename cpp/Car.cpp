//import header
#include "header.hh"

using namespace std;

//konsturktor
Car::Car () : Vehicle(){
    jumlahKursi = 0;
    jumlahPintu = 0;
}

//construktor with base vehicle attribut
Car::Car (string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi, int jumlahPintu) : Vehicle(platNomor, merk, tahunProduksi, warna){
    this->jumlahKursi = jumlahKursi;
    this->jumlahPintu = jumlahPintu;
}

//get and set
void Car::setJumlahKursi(int jumlahKursi){
    this->jumlahKursi = jumlahKursi;
}
void Car::setJumlahPintu(int jumlahPintu){
    this->jumlahPintu = jumlahPintu;
}

int Car::getJumlahKursi(){
    return jumlahKursi;
}
int Car::getJumlahPintu(){
    return jumlahPintu;
}

//destruktor
Car::~Car(){
    
}