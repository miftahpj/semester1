#include<iostream>
using namespace std;

// Tanda & SUDAH DIHAPUS di semua fungsi di bawah ini

void belajar (int energi){
    energi -=10;
    cout<<"Belajar materi algoritma\n";
}

void makan(int energi){
    energi += 15;
    cout<<"Makan Raja Ayam \n";
}

void kuliah(int energi){
    energi -= 30;
    cout<<"Masuk Perkuliahan\n";
    // Meskipun memanggil belajar, energi asli tetap tidak akan berubah
    belajar(energi);
}

void aktivitas (int energi){
    cout<<"Hari dimulai\n";
    makan (energi);
    kuliah (energi);
    cout<<"Hari berakhir\n";
}

void Menu(string nama, int energi){
    cout<<"\n============= AKTIVITAS HARIAN =============\n";
    cout<<"Nama : "<<nama<<endl;
    // Perhatikan angka energi di sini saat program berjalan nanti
    cout<<"Energi : "<<energi<<endl;
    cout<<"\n1. Kuliah";
    cout<<"\n2. Makan";
    cout<<"\n0. Keluar Loop";
    cout<<"\nPilihan : ";
}

void game(string nama, int energi){
    int pilihan;
    do{
        Menu(nama, energi);
        cin>>pilihan;

        switch(pilihan){
            case 1: kuliah(energi); break;
            case 2: makan(energi); break;
            case 0:
           	     cout<<"Sampai Jumpa Lagi \n";
                break;
            default:
            cout<<"Pilihan Tidak Valid\n";
        }
    // Loop akan terus berjalan selama energi > 0 (dan di sini energi akan selalu 100)
    }while(energi > 0 && pilihan != 0);
}

int main(){

    string nama = "Jajang";
    int energi = 100;
    
    // Kita kirim 100, tapi karena tanpa &, yang dikirim hanya "fotokopi"-nya
    game(nama, energi);

    return 0;
}
