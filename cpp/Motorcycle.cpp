//import header
#include "header.hh"

using namespace std;

//konsturktor
Motorcycle::Motorcycle () : Vehicle(){
    jenisMotor = " ";
    kapasitastanki = 0;
}

//construktor with base vehicle attribut
Motorcycle::Motorcycle (string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor, int kapasitastanki) : Vehicle(platNomor, merk, tahunProduksi, warna){
    this->jenisMotor = jenisMotor;
    this->kapasitastanki = kapasitastanki;
}

//get and set
void Motorcycle::setJenisMotor(string jenisMotor){
    this->jenisMotor = jenisMotor;
}
void Motorcycle::setKapasitastanki(int kapasitastanki){
    this->kapasitastanki = kapasitastanki;
}

string Motorcycle::getJenisMotor(){
    return jenisMotor;
}
int Motorcycle::getKapasitastanki(){
    return kapasitastanki;
}

//destruktor
Motorcycle::~Motorcycle(){
    
}

