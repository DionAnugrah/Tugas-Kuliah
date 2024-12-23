#include <iostream>
using namespace std;

int main (){

    //TUGAS PERTAMA
    int n;
    cout<<"=======TUGAS PERTAMA=======\n";
    cout<<"Masukkan banyak data : ";
    cin>>n;

    for(int a=1; a<=n; a++){
        for (int b=n; b>=a; b--){
            cout<<" ";
        }
        for (int b=1; b<=(2*a-1); b++){
            cout << "*";
        }
        cout << endl;
    }

    //TUGAS KEDUA
    int jmlnilai;
    float mean;

    cout<<"\n=======TUGAS KEDUA======="<<endl;
    cout<<"Masukkan jumlah data = ";
    cin>>jmlnilai;
    cout<<endl;

    int nilai[jmlnilai], max, min;
    float total = 0;
    for(int i=1; i<=jmlnilai; i++){
        cout<<"Masukkan nilai ke-"<<i<<" = ";
        cin>> nilai[i];
    total += nilai[i];
    }
    mean = total/jmlnilai;

    //mencari nilai maksimal
    max = nilai[jmlnilai];
    for(int j=1; j<jmlnilai; j++){
        if(nilai[j]>max){
            max=nilai[j];
        }
        else {
            max=max;
        }
    }

    //mencari nilai minimal
    min = nilai[jmlnilai];
    for(int k=1; k<jmlnilai; k++){
        if(nilai[k]<min){
            min=nilai[k];
        }
        else {
            min=min;
        }
    }

    cout<<"\nNilai minimumnya adalah  = "<<min<<endl;
    cout<<"Nilai maksimumnya adalah = "<<max<<endl;
    cout<<"Rata-rata nilai adalah   = "<<mean<<endl;

}
