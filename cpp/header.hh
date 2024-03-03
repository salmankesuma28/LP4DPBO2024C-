//import library
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Vehicle{
    private:
        string platNomor;
        string merk;
        string tahunProduksi;
        string warna;

    public:
    //konsturktor
    Vehicle();
    Vehicle(string platNomor, string merk, string tahunProduksi, string warna);
    //get and set

    void setPlatNomor(string platNomor);
    void setMerk(string merk);
    void setTahunProduksi(string tahunProduksi);
    void setWarna(string warna);

    string getPlatNomor();
    string getMerk();
    string getTahunProduksi();
    string getWarna();

    //destruktor
    ~Vehicle();
};

class Car : public Vehicle{
    private:
        int jumlahKursi;
        int jumlahPintu;
    public:
    //konsturktor
    Car();
    Car(string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi, int jumlahPintu);
    //get and set
    void setJumlahKursi(int jumlahKursi);   
    void setJumlahPintu(int jumlahPintu);

    int getJumlahKursi();
    int getJumlahPintu();
    //destruktor
    ~Car();
};

class Motorcycle : public Vehicle{
    private:
        string jenisMotor;
        int kapasitastanki;
    public:
    //konsturktor
    Motorcycle();
    Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor, int kapasitastanki);

    //get and set
    void setJenisMotor(string jenisMotor);
    void setKapasitastanki(int kapasitastanki);

    string getJenisMotor();
    int getKapasitastanki();
    //destruktor
    ~Motorcycle();
};

class Garage{
    private:
        string namaGarasi;
        int luasGarasi;
        list<Car> car;
        list<Motorcycle> motorcycle;

    //konsturktor
    public:
    Garage();
    Garage(string namaGarasi, int luasGarasi);
    //get and set
    void setNamaGarasi(string namaGarasi);
    void setLuasGarasi(int luasGarasi);
    void addCar(Car car);
    void addMotorcycle(Motorcycle motorcycle);

   
    string getNamaGarasi();
    int getLuasGarasi();
    list<Car> getCar();
    list<Motorcycle> getMotorcycle();
    

    //destryktor
    ~Garage();
};

class Parkinglot{
    private:
        int kapasitas;
        int jumlahkendaraan;
        list<Car> car;
        list<Motorcycle> motorcycle;
    public:
    //konsturktor
    public:
    Parkinglot();
    Parkinglot(int kapasitas, int jumlahkendaraan);
    //get and set
    void setKapasitas(int kapasitas);
    void setJumlahkendaraan(int jumlahkendaraan);
    void addCar(Car car);
    void addMotorcycle(Motorcycle motorcycle);

    int getKapasitas();
    int getJumlahkendaraan();
    list<Car> getCar();
    list<Motorcycle> getMotorcycle();

    //destryktor
    ~Parkinglot();
};