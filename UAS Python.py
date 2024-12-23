perpustakaan = {}
def tambahBuku() :
    id_buku = int(input("Masukkan ID Buku: "))
    judul = input("Masukkan Judul Buku: ")
    penulis = input("Masukkan Nama Penulis: ")
    kategori = input("Masukkan Kategori: ") 
    perpustakaan[id_buku] = {
        "Judul": judul,
        "Penulis": penulis,
        "Kategori": kategori
    }

def hapusBuku() :
    id_buku = int(input("Masukkan ID Buku Yang Ingin Dihapus : "))
    if id_buku in perpustakaan : 
        del perpustakaan[id_buku]
        print("Buku berhasil  dihapus")
    else :
        print (f"Buku dengan id {id_buku} tidak ditemukan")

def cariBuku() :
    pencarian = input("Masukkan ID Buku atau Judul Buku yang Ingin dicari : ")
    for id_buku, buku in perpustakaan.items():
        if (pencarian==id_buku or pencarian==buku["Judul"]) :
            print(f"[ {id_buku} ] {'Judul'} - {'Penulis'} ( {'Kategori'} )")
        else :
            print(f"Buku dengan Judul atau Id {'pencarian'} tidak di temukan")

def tampilkanDaftarbuku() :
    print("Daftar Buku:\n")
    for urutan, (id_buku, buku) in enumerate(sorted(perpustakaan.items(), key=lambda x : x[1]["Judul"]), start = 1):
        print(f"{urutan}. [ {id_buku} ] {'Judul'} - {'Penulis'} ( {'Kategori'} )")

def tampilkan_kategori_dan_jumlah():
    kategori_count = {}
    for buku in perpustakaan.values():
        kategori = buku["Kategori"]
        kategori_count[kategori] = kategori_count.get(kategori, 0) + 1

    if kategori_count:
        print("Jumlah buku berdasarkan kategori:")
        for kategori, jumlah in kategori_count.items():
            print(f"Kategori: {kategori}, Jumlah: {jumlah}")
    else:
        print("Tidak ada buku dalam perpustakaan.")


while True:
        print("\nSistem Manajemen Perpustakaan")
        print("1. Tambah Buku Baru")
        print("2. Tampilkan Semua Buku")
        print("3. Cari Buku")
        print("4. Hapus Buku")
        print("5. Tampilkan Jumlah Buku perKategori")
        print("0. Keluar")
        pilihan = input("Pilih menu: ")
        if pilihan == "1":
            tambahBuku()
        elif pilihan == "2":
            tampilkanDaftarbuku()
        elif pilihan == "3":
            cariBuku()
        elif pilihan == "4":
            hapusBuku()
        elif pilihan == "5":
            tampilkan_kategori_dan_jumlah()
        elif pilihan == "0":
            print("Keluar dari sistem.")
            break
        else:
            print("Pilihan tidak valid.\n")

