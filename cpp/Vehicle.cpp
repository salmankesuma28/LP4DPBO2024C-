//import library
#include "header.hh"

using namespace std;

//konsturktor
Vehicle::Vehicle(){
    platNomor = " ";
    merk = " ";
    tahunProduksi = " ";
    warna = " ";
}

//konsturktor
Vehicle::Vehicle(string platNomor, string merk, string tahunProduksi, string warna){
    this->platNomor = platNomor;
    this->merk = merk;
    this->tahunProduksi = tahunProduksi;
    this->warna = warna;
}

//get and set
void Vehicle::setPlatNomor(string platNomor){
    this->platNomor = platNomor;
}
void Vehicle::setMerk(string merk){
    this->merk = merk;
}
void Vehicle::setTahunProduksi(string tahunProduksi){
    this->tahunProduksi = tahunProduksi;
}
void Vehicle::setWarna(string warna){
    this->warna = warna;
}

string Vehicle::getPlatNomor(){
    return platNomor;
}
string Vehicle::getMerk(){
    return merk;
}
string Vehicle::getTahunProduksi(){
    return tahunProduksi;
}
string Vehicle::getWarna(){
    return warna;
}

//destruktor
Vehicle::~Vehicle(){
    
}
