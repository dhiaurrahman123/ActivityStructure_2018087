#include <iostream>
using namespace std;

struct DetailAlamat {
    char desa[20];
    char kota[20];
};

struct  Mahasiswa
{
    char NIM[12];
    char Nama[20];
    DetailAlamat Alamat;
    int umur;
};

int Main() {
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {

        cout << "Masukkan NIM = ";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukkan Nama = ";
        cin.getline(mhs[i].Nama, 20);
        cout << "Alamat : " << endl;
        cout << "\tMasukkan desa = ";
        cin.getline(mhs[i].Alamat.desa, 20);
        cout << "Masukkan kota = ";
        cin.getline(mhs[i].Alamat.kota, 20);
        cout << "Masukkan Umur = ";
        cin >> mhs[i].umur;
        cin.ignore(i, "\n");
    }
    for (int i = 0; i < 3; i++) {
        cout << "\nNim" << mhs[i].NIM;
        cout << "\nNama" << mhs[i].Nama;
        cout << "\nAlamat Desa" << mhs[i].Alamat.desa;
        cout << "\nAlamat Kota" << mhs[i].Alamat.kota;
        cout << "\nUmur" << mhs[i].umur;
        return 0;
    }
}