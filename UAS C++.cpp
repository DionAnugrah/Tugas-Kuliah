#include <iostream>
#include <vector>
using namespace std;

struct Buku {
    int Id;
    string Judul;
    string Penulis;
    string Kategori;
};

vector <Buku> perpustakaan;

void tambahBuku (){
    Buku bukuBaru;
    cout << "Masukkan Id Buku: ";
    cin >> bukuBaru.Id;
    cin.ignore();
    cout << "Masukkan Judul Buku: ";
    getline (cin, bukuBaru.Judul);
    cout << "Masukkan Nama Penulis: ";
    getline (cin, bukuBaru.Penulis);
    cout << "Masukkan Kategori Buku: ";
    getline (cin, bukuBaru.Kategori);
    cout << endl;

    perpustakaan.push_back(bukuBaru);
}

void cariBuku(){
    int id;
    cout << "Masukkan id Buku: ";
    cin >> id;
    for (const auto &buku : perpustakaan){
        if (id == buku.Id) {
            cout << "[" << buku.Id << "]"<< " " << buku.Judul << " - " << buku.Penulis << " " << "(" << "Kategori: " << buku.Kategori << ")" << endl;
        } 
    }
    cout << endl;
}

void tampilkansemuaBuku (){
    if (perpustakaan.empty()) cout << "Perpustakaan kosong";
    for (size_t i = 0; i < perpustakaan.size(); i++) {
        for (size_t j = i + 1; j < perpustakaan.size(); j++) {
            if (perpustakaan[i].Judul > perpustakaan[j].Judul){
                swap(perpustakaan[i] , perpustakaan[j] );
            }
                break;
        }
    }
    for (const auto &buku : perpustakaan){
            cout << "[" << buku.Id << "]" << " " << buku.Judul << " - " << buku.Penulis << " " << "(" << "Kategori: " << buku.Kategori << ")" << endl;

    }
    cout << endl;
}
void  hapusBuku(){
    int id;
    cout << "Masukkan id Buku: ";
    cin >> id;
        for (auto i = perpustakaan.begin() ; i != perpustakaan.end(); ++i) {
        if (i->Id == id) {
            perpustakaan.erase(i);
            cout << "Buku berhasil dihapus.\n";
            return;
        }
    }
    cout << endl;
}

void taampilkanjumlahbukuperKategori() {
    vector <int> banyakBuku;
    vector <string> kategori;
    bool ditemukan;

    for (const auto &buku : perpustakaan) {
        ditemukan = false;
        for (size_t i = 0 ; i < kategori.size(); i++) {
            if (kategori[i] == buku.Kategori){
                banyakBuku[i]++;
                ditemukan = true;
                break;
            }
        }
        if (!ditemukan) {
            banyakBuku.push_back(1);
            kategori.push_back(buku.Kategori); 
        }
    }
    cout << "Kategori :\n";
    for (size_t i = 0; i < kategori.size(); i++) {
        cout << "( " << kategori[i] << " )" << " = " << banyakBuku[i] << endl;
    }
    
}

int main()
{
    bool tutup = false;
    int pilihan;
    while (!tutup) {
    cout << "\n------------ PERPUSTAKAAN OM ARIL ------------\n";
    cout << "1. Tambah Buku Baru\n";
    cout << "2. Cari Buku\n";
    cout << "3. Tampilkan Semua Buku\n";
    cout << "4. hapus Buku\n";
    cout << "5. Tampilkan Jumlah Buku per Kategori\n";
    cout << "6. Keluar\n";
    cout << "Pilihlah angka diatas : ";
    cin >> pilihan;
    cout << endl;
    switch (pilihan){
    case 1:
        system("cls");
        tambahBuku();
        break;
    case 2:
        system("cls");
        cariBuku();
        break;
    case 3:
        system("cls");
        tampilkansemuaBuku();
        break;
    case 4:
        system("cls");
        hapusBuku();
        break;
    case 5:
        taampilkanjumlahbukuperKategori();
        break;
    case 6:
        goto akhir;
        break;
    default:
        break;
    }
    }
    akhir :
    return 0;
}