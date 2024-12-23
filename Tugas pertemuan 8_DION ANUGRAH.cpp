#include <iostream>
using namespace std;

int main (){
    // menggunakan for

    int data;
    cout << "Masukkan Banyak Data = ";
    cin >> data;
    cout << "\nTugas 1\nMenggunakan for" << endl;

    cout << "Bilangan Genap = " ;
    int i;
    for (i=0; i <= data  ; i+=2){
       cout <<"  " << i;
    }
    cout << "\nBilangan Ganjil = " ;
    int a;
    for (a=1; a <= data ; a+=2){
        cout <<"  " << a;
    }
    cout << endl;

    // menggunakan while

     int x = 0;
     cout << "\nMenggunakan while" << endl;
     cout << "Bilangan Genap = ";
     while (x<data){
        cout <<"  " << x;
        x+=2;

     }
     int y = 1;
     cout << "\nBilangan Ganjil = ";
     while (y<=data){
        cout <<"  " << y;
        y+=2;

     }
     cout << endl;

     // menggunakan doWhile

     int z = 0;
     cout << "\nMenggunakan DoWhile" << endl;
     cout << "Bilangan Genap = ";
     do {
        cout <<"  " << z;
        z+=2;
     }
     while(z<=data);
     cout << endl;

     int b = 1;
     cout << "Bilangan Ganjil = ";
     do {
        cout <<"  " << b;
        b+=2;
     }
     while(b<=data);
     cout << endl;

     cout << "\nTugas 2" << endl;
     int total = 0;

    for (int i = 1; i <= data; i++) {
        cout << "Masukkan nilai i ke-" << i << " = " << i << endl;
        total += i;
    }
    cout << "                      ---+";
    cout << "\nJumlah =               " << total << endl;



}
