#include <iostream>
using namespace std;


int main (){
    int harga_mangga = 15000;
    int mangga_terjual;
    int biaya_operasioanl = 10000;

    cout << "Masukkan jumlah mangga yang terjual (kg) : ";
    cin >> mangga_terjual;

    int total_pemasukan = harga_mangga * mangga_terjual;
    int keuntungan_bersih = total_pemasukan - biaya_operasioanl;

    cout << "Total pemasukan : " << total_pemasukan << endl;
    cout << "keuntungan bersih : " << keuntungan_bersih;

    return 0;
}
