#include<iostream>
using namespace std;

void belajar (int &energi){
    energi -=10;
    cout<<"Belajar materi algoritma\n";
}

void makan(int &energi){
    energi += 15;
    cout<<"Makan Raja Ayam \n";
}

void kuliah(int &energi){
    energi -= 30;
    cout<<"Masuk Perkuliahan\n";
    belajar(energi);
}

void aktivitasHarian (int &energi){
    cout<<"Hari dimulai\n";
    makan (energi);
    kuliah (energi);
    cout<<"Hari berakhir\n";
}

void tampilmMenu(string nama, int &energi){
    cout<<"\n============= AKTIVITAS HARIAN =============\n";
    cout<<"Nama : "<<nama<<endl;
    cout<<"Energi : "<<energi<<endl;
    cout<<"\n1. Kuliah";
    cout<<"\n2. Makan";
    cout<<"\n0. Keluar Loop";
    cout<<"\nPilihan : ";
}

void gameLoop(string nama, int &energi){
    int pilihan;
    do{
        tampilmMenu(nama, energi);
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
    }while(energi > 0 && pilihan != 0);
}

int main(){

    string nama = "Jajang";
    int energi = 100;
    gameLoop(nama, energi);

    return 0;
}