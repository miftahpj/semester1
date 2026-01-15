#include <iostream>
using namespace std;

void garis() {
    cout << "================================" << endl;
}
int tambah(int haha, int hihi) {
    return  haha + hihi;
}

int luasPersegiPanjang(int p, int l) {
    return p * l;
}

void prosesTambah() {
    int angka1, angka2;
    int hasil;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    hasil = tambah(angka1, angka2);

    cout << "Hasil Penjumlahan: " << hasil << endl;
    
    garis();
};


void prosesLuaspp() {
    int panjang, lebar;
    int luas;

    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    luas = luasPersegiPanjang(panjang, lebar);
    cout << "Luas Persegi Panjang: " << luas << endl;
}

int main() {
    prosesTambah();
    prosesLuaspp();
    
    return 0;
}
