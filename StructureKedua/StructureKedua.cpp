#include <iostream>
using namespace std;

struct  Mahasiswa
{
    string NIM;
    string Nama;
    string Alamat;
    int umur;
};
struct DetailAlamat {
    string desa;
    string kota;
};

int Main() {
    Mahasiswa mhs;

    cout << "Masukkan NIM = ";
    cin >> mhs.NIM;
    cout << "Masukkan Nama = ";
    cin >> mhs.Nama;
    cout << "Alamat : " << stdl;
    cout << "\tMasukkan desa = ";
    cin >> mhs.Alamat.desa;
    cout << "Masukkan kota = ";
    cin >> mhs.Alamat.kota;
    cout << "Masukkan Umur = ";
    cin >> mhs.umur;


    cout << "\nNim" << mhs.NIM;
    cout << "\nNama" << mhs.Nama;
    cout << "\nAlamat Desa" << mhs.Alamat.desa;
    cout << "\nAlamat Kota" << mhs.Alamat.kota;
    cout << "\nUmur" << mhs.umur;
}