#include <iostream>
using namespace std;

int main(){
    int jml_siswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> jml_siswa;

    float nilai[jml_siswa], total = 0;

    for (int i = 0; i < jml_siswa; i++){
        cout << "Nilai Siswa ke-" << i+1 << " = ";
        cin >> nilai[i];
        total += nilai[i];
    }

    int max = nilai[0];
    int min = nilai[0];
    //max
    for (int i = 0; i < jml_siswa; i++){
        if (nilai[i] > max){
            max = nilai[i];
        }
    }
    //min
    for (int i = 0; i < jml_siswa; i++){
        if (nilai[i] < min){
            min = nilai[i];
        }
    }
    float rata = total/jml_siswa;
    cout << "\nTotal nilai     : " << total;
    cout << "\nRata-rata nilai : " << rata;
    cout << "\nNilai Tertinggi : " << max;
    cout << "\nNilai Terendah  : " << min;

    system ("pause");
}
