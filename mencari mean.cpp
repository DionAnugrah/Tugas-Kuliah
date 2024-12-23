#include <iostream>
using namespace std;

int main (){
    int jmlnilai;
    float mean;

    cout<<"Masukkan jumlah data = ";
    cin>>jmlnilai;
    cout<<endl;

    int nilai[jmlnilai], max, min;
    float total;
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

    cout<<"Nilai minimumnya adalah  = "<<min<<endl;
    cout<<"Nilai maksimalnya adalah = "<<max<<endl;
    cout<<"Rata rata nilai adalah   = "<<mean;

}

