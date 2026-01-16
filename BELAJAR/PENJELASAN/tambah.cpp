#include<iostream>
using namespace std;

// Fungsi 1: Aksi (Mengubah nilai)
// Wajib pakai '&' agar energi bertambah permanen
void isiEnergi(int &energi){
    energi += 25; 
    cout << ">> Berhasil! Energi bertambah +25.\n";
}

// Fungsi 2: Tampilan (Hanya menampilkan teks)
// Tidak perlu '&' karena fungsi ini cuman 'mengintip' nilai, tidak mengubahnya
void showMenu(int energi){
    cout << "\n=== STATUS KARAKTER ===\n";
    cout << "Energi Saat Ini : " << energi << endl;
    cout << "-----------------------\n";
    cout << "[1] Isi Energi (Charge)\n";
    cout << "[0] Keluar\n";
    cout << "Pilihan Anda : ";
}

int main(){
    int energi = 0; // Mulai dari 0
    int pilihan;

    do {
        // 1. Panggil fungsi menu (void)
        showMenu(energi); 
        
        // 2. Input user
        cin >> pilihan;

        // 3. Logika Switch Case
        switch(pilihan){
            case 1:
                isiEnergi(energi); // Panggil fungsi penambah energi
                break;
            case 0:
                cout << "Program Selesai. Sampai jumpa!\n";
                break;
            default:
                cout << ">> Salah pilih angka bos!\n";
        }

    } while(pilihan != 0); // Loop berhenti jika pilih 0

    return 0;
}
