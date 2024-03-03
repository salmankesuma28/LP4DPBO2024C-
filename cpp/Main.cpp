//import librari
#include "header.hh"

using namespace std;

int main(){
    //inisiasi daftar Car
    list<Car> listCar;
    Car car1("ABC123", "Toyota", "2022", "Blue", 5, 4);
    listCar.push_back(car1);
    Car car2("DEF456", "Honda", "2021", "Red", 4, 4);
    listCar.push_back(car2);
    Car car3("GHI789", "Suzuki", "2020", "Black", 5, 4);
    listCar.push_back(car3);
    Car car4("JKL", "Mitsubishi", "2019", "White", 5, 4);
    listCar.push_back(car4);
    Car car5("MNO", "Daihatsu", "2018", "Yellow", 5, 4);
    listCar.push_back(car5);

    cout << "------------List Car--------"<< endl;
    int nomorCar=1;

    //print informasi setiap Car
    for(list<Car>::iterator it = listCar.begin(); it != listCar.end(); it++){
        cout << "====================================\n";
        cout << "||             Car  " << nomorCar << endl;
        cout << "====================================\n";
        cout << "|| Plat Nomor     : " << it->getPlatNomor() << endl;
        cout << "|| Merk           : " << it->getMerk() << endl;
        cout << "|| Tahun Produksi : " << it->getTahunProduksi() << endl;
        cout << "|| Warna          : " << it->getWarna() << endl;
        cout << "|| Jumlah Kursi   : " << it->getJumlahKursi() << endl;
        cout << "|| Jumlah Pintu   : " << it->getJumlahPintu() << endl;
        cout << "=====================================\n\n";
        nomorCar++;
    }

    //inisiasi daftar Motorcycle
    list<Motorcycle> listMotorcycle;
    Motorcycle motorcycle1("PQR123", "Yamaha", "2022", "Blue", "Matic", 200);
    listMotorcycle.push_back(motorcycle1);
    Motorcycle motorcycle2("STU456", "Honda", "2021", "Red", "Matic", 100);
    listMotorcycle.push_back(motorcycle2);
    Motorcycle motorcycle3("VWX789", "Suzuki", "2020", "Black", "Matic", 150);
    listMotorcycle.push_back(motorcycle3);
    Motorcycle motorcycle4("YZA222", "Mitsubishi", "2019", "White", "Matic", 200);
    listMotorcycle.push_back(motorcycle4);
    Motorcycle motorcycle5("BCD333", "Daihatsu", "2018", "Yellow", "Matic", 150);  
    listMotorcycle.push_back(motorcycle5);

    cout << "------------List Motorcycle--------"<< endl;
    int nomorMotorcycle=1;

    //print informasi setiap Motorcycle
    for(list<Motorcycle>::iterator it = listMotorcycle.begin(); it != listMotorcycle.end(); it++){
        cout << "====================================\n";
        cout << "||             Motorcycle  " << nomorMotorcycle << endl;
        cout << "====================================\n";
        cout << "|| Plat Nomor     : " << it->getPlatNomor() << endl;
        cout << "|| Merk           : " << it->getMerk() << endl;
        cout << "|| Tahun Produksi : " << it->getTahunProduksi() << endl;
        cout << "|| Warna          : " << it->getWarna() << endl;
        cout << "|| Jenis Motor    : " << it->getJenisMotor() << endl;
        cout << "|| Kapasitas Tanki: " << it->getKapasitastanki() << endl;
        cout << "=====================================\n\n";
        nomorMotorcycle++;
    }

    //inisiasi Garage
    Garage garage ("Garasi Mobil", 100);
    Garage garage2 ("Garasi Motor", 200);

    //tambah car ke garage
    garage.addCar(car1);
    garage.addCar(car2);
    garage.addCar(car3);
    garage.addMotorcycle(motorcycle1);
    garage.addMotorcycle(motorcycle2);
    garage.addMotorcycle(motorcycle3);

    //print car dan motorcycle di garasi
    cout << "===================================\n";
    cout << "\n\n List of Garage "<< garage.getNamaGarasi() <<" Kapasitas : "<< garage.getLuasGarasi()<< endl;
    cout << "===================================\n";
    for(auto car : garage.getCar()){
        cout << "|| Plat Nomor     : " << car.getPlatNomor() << endl;
    }
    cout << "====================================\n\n";

   
    cout << "===================================\n";
    cout << "\n\n List of Garage "<< garage2.getNamaGarasi()<<" Kapasitas : "<<garage2.getLuasGarasi()<< endl;
    cout << "===================================\n";
    for(auto motorcycle : garage.getMotorcycle()){
        cout << "|| Plat Nomor     : " << motorcycle.getPlatNomor() << endl;
    }
    cout << "====================================\n\n";

    //inisiasi Parkinglot
    Parkinglot parkinglotCar(100, 2);
    Parkinglot parkinglotMotorcycle(200, 2);


    //tambah car ke parkinglot
    parkinglotCar.addCar(car4);
    parkinglotCar.addCar(car5);
    parkinglotMotorcycle.addMotorcycle(motorcycle4);
    parkinglotMotorcycle.addMotorcycle(motorcycle5);

    //print daftra parking lot
    cout << "===================================\n";
    cout << "\n\n List of Parkinglot Car Kapasitas : "<< parkinglotCar.getKapasitas()<< endl;
    cout << "===================================\n";
    for(auto car : parkinglotCar.getCar()){
        cout << "|| Plat Nomor     : " << car.getPlatNomor() << endl;
    }
    cout << "====================================\n\n";

    cout << "===================================\n";
    cout << "\n\n List of Parkinglot Motorcycle Kapasitas : "<< parkinglotMotorcycle.getKapasitas()<< endl;
    cout << "===================================\n";
    for(auto motorcycle : parkinglotMotorcycle.getMotorcycle()){
        cout << "|| Plat Nomor     : " << motorcycle.getPlatNomor() << endl;
    }
    cout << "====================================\n\n";

    return 0;
};