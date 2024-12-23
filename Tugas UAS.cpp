#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int saldo;
int saldo_taruhan;

int easy();
int normal();
int hard();
int expert();
void aturan();
void tingkat_kesulitan();

int main(){
    srand (time(0));
    string nama;
    char pilihan;
    cout << "==================================================\n";
    cout << "\tSelamat datang di game tebak angka\n";
    cout << "==================================================\n";
    cout << "\nMasukkan nama\t: ";
    getline (cin, nama);

    saldo:
    cout << "Masukkan saldo\t: \n";
    cin >> saldo;
    do{
        system ("cls");
        aturan();
        cout << "\nSaldo anda sekarang : " << saldo;
        taruhan:
        cout << "\n\nSelamat bermain " << nama <<"\nMasukkan saldo yang ingin dipertaruhkan : ";
        cin >> saldo_taruhan; cout << endl;

        if (saldo_taruhan > saldo){
            cout << "\nSaldo tidak cukup";
            goto taruhan;
        }
        int kesulitan;
        do{
            tingkat_kesulitan();
            cout << "\nPilih tingkat kesulitaan: ";
            cin >> kesulitan;
            if (kesulitan == 1){
                cout << "pilihan mudah\n";
                easy();
            } else if (kesulitan == 2){
                cout << "Pilihan Normal\n";
                normal();
            } else if (kesulitan == 3){
                cout << "Pilihan Hard\n";
                hard();
            } else if (kesulitan == 4){
                cout << "Pilihan Expert\n";
                expert();
            } else {
                cout << "Masukkan pilihan antara 1-4\n";
            }
        }while (kesulitan < 1 || kesulitan > 4);

        cout << "\nIngin bermain Lagi (Y/N) : ";
        cin >> pilihan;

        if(saldo == 0){
           cout << "\nAnda tidak memiliki uang untuk bermain\n";
           goto saldo;
        }
    }
    while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}

int easy() {
    int angka_acak = (rand() % 10) + 1;
    int angka_tebakan;
    do {
        cout << "Masukkan Angka 1-10 : ";
        cin >> angka_tebakan;
    }while (angka_tebakan < 1 || angka_tebakan > 10);

    if (angka_tebakan == angka_acak){
        saldo = saldo + saldo_taruhan*2;
        cout << "\nSelamat anda menang, anda mendapatkan " << saldo;
    }else {
        saldo = saldo - saldo_taruhan;
        cout << "\nTebakan anda salah, saldo anda sekarang adalah " << saldo;
    } cout << "\nAngkanya adalah " << angka_acak;
    return (saldo);
}
int normal(){
    int angka_acak = (rand() % 25) + 1;
    int angka_tebakan;
    do {
        cout << "Masukkan Angka 1-25 : ";
        cin >> angka_tebakan;
    }while (angka_tebakan < 1 || angka_tebakan > 25);

    if (angka_tebakan == angka_acak){
        saldo = saldo + saldo_taruhan*5;
        cout << "\nSelamat anda menang, anda mendapatkan " << saldo;
    }else {
        saldo = saldo - saldo_taruhan;
        cout << "\nTebakan anda salah, saldo anda sekarang adalah " << saldo;
    } cout << "\nAngkanya adalah " << angka_acak;
    return (saldo);
}
int hard(){
    int angka_acak = (rand() % 50) + 1;
    int angka_tebakan;
    do {
        cout << "Masukkan Angka 1-50 : ";
        cin >> angka_tebakan;
    }while (angka_tebakan < 1 || angka_tebakan > 50);

    if (angka_tebakan == angka_acak){
        saldo = saldo + saldo_taruhan*10;
        cout << "\nSelamat anda menang, anda mendapatkan " << saldo;
    }else {
        saldo = saldo - saldo_taruhan;
        cout << "\nTebakan anda salah, saldo anda sekarang adalah " << saldo;
    } cout << "\nAngkanya adalah " << angka_acak;
    return (saldo);
}
int expert(){
    int angka_acak = (rand() % 100) + 1;
    int angka_tebakan;
    do {
        cout << "Masukkan Angka 1-100 : ";
        cin >> angka_tebakan;
    }while (angka_tebakan < 1 || angka_tebakan > 100);

    if (angka_tebakan == angka_acak){
        saldo = saldo + saldo_taruhan*100;
        cout << "\nSelamat anda menang, anda mendapatkan " << saldo;
    }else {
        saldo = saldo - saldo_taruhan;
        cout << "\nTebakan anda salah, saldo anda sekarang adalah " << saldo;
    } cout << "\nAngkanya adalah " << angka_acak;
    return (saldo);
}
void aturan(){
    cout << "\n==============================";
    cout << "\n      ATURAN TEBAK ANGKA      ";
    cout << "\n==============================\n";
    cout << "1. Masukkan nama dan saldo anda\n";
    cout << "2. Masukkan jumlah saldo yang ingin dipertaruhkan\n";
    cout << "3. Pilih tingkat kesulitan permainan\n";
    cout << "4. Masukkan angka sesuai tingkat kesulitan\n";
    cout << "5. Jika tebakan benar anda akan mendapatkan hadiah\n   berkali-kali lipat dari jumlah yang anda pertaruhkan\n";
    cout << "6. Jika tebakan salah saldo akan dikurangi\n";
}
void tingkat_kesulitan(){
    cout << "1. Easy   = pilih angka antara 1-10 dan hadiah dikali 2\n";
    cout << "2. Normal = pilih angka antara 1-25 dan hadiah dikali 5\n";
    cout << "3. Hard   = pilih angka antara 1-50 dan hadiah dikali 10\n";
    cout << "4. Expert = pilih angka antara 1-100 dan hadiah dikali 100\n";
}
