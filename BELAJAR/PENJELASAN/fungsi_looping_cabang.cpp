#include<iostream> // Library utama untuk input (cin) dan output (cout)
using namespace std; // Agar kita tidak perlu menulis 'std::cout' berulang kali

// --- FUNGSI-FUNGSI KEGIATAN ---

// Fungsi belajar: Mengurangi energi.
// Tanda '&' (Pass-by-Reference) artinya fungsi ini mengubah variabel energi ASLI di main.
void belajar (int &energi){
    energi -=10; // Energi dikurangi 10
    cout<<"Belajar materi algoritma\n"; // Tampilkan pesan
}

// Fungsi makan: Menambah energi.
// Menggunakan '&' agar penambahan energi tersimpan ke variabel asli.
void makan(int &energi){
    energi += 15; // Energi ditambah 15
    cout<<"Makan Raja Ayam \n"; // Tampilkan pesan
}

// Fungsi kuliah: Mengurangi energi cukup besar.
void kuliah(int &energi){
    energi -= 30; // Energi berkurang 30 karena masuk kelas
    cout<<"Masuk Perkuliahan\n";
    
    // Di dalam kuliah, mahasiswa juga 'belajar'.
    // Kita memanggil fungsi belajar() di sini, jadi energi akan berkurang lagi 10.
    // Total pengurangan = 30 + 10 = 40.
    belajar(energi); 
}

// Fungsi aktivitas: Sebuah urutan kegiatan otomatis (start -> makan -> kuliah -> end).
// Catatan: Fungsi ini ada tapi TIDAK DIPANGGIL di dalam main/game saat ini.
void aktivitas (int &energi){
    cout<<"Hari dimulai\n";
    makan (energi);  // Memanggil fungsi makan
    kuliah (energi); // Memanggil fungsi kuliah
    cout<<"Hari berakhir\n";
}

// --- FUNGSI TAMPILAN (UI) ---

// Fungsi Menu: Hanya bertugas menampilkan teks ke layar.
// Parameter 'nama' tidak pakai '&' karena kita hanya perlu menampilkan (membaca) namanya saja, tidak mengubahnya.
void Menu(string nama, int &energi){
    cout<<"\n============= AKTIVITAS HARIAN =============\n";
    cout<<"Nama : "<<nama<<endl;   // Menampilkan nama user
    cout<<"Energi : "<<energi<<endl; // Menampilkan sisa energi saat ini
    cout<<"\n1. Kuliah";
    cout<<"\n2. Makan";
    cout<<"\n0. Keluar Loop"; // Pilihan untuk berhenti main
    cout<<"\nPilihan : ";
}

// --- LOGIKA UTAMA GAME ---

void game(string nama, int &energi){
    int pilihan; // Variabel untuk menampung input angka dari user
    
    // MENGGUNAKAN DO-WHILE LOOP
    // Artinya: Jalankan dulu kodenya minimal 1 kali, baru cek syaratnya di bawah.
    do{
        Menu(nama, energi); // 1. Tampilkan menu
        cin>>pilihan;       // 2. Minta user memilih angka

        // MENGGUNAKAN SWITCH CASE
        // Digunakan karena kita mengecek nilai angka yang pasti (1, 2, atau 0).
        switch(pilihan){
            case 1: 
                kuliah(energi); // Jika pilih 1, jalankan fungsi kuliah
                break;          // Berhenti mengecek case lain
            case 2: 
                makan(energi);  // Jika pilih 2, jalankan fungsi makan
                break;
            case 0:
           	    cout<<"Sampai Jumpa Lagi \n"; // Jika pilih 0, pamitan
                break;
            default:
                // Jika user iseng memasukkan angka selain 0, 1, 2
                cout<<"Pilihan Tidak Valid\n"; 
        }
        
    // SYARAT LOOPING (PERULANGAN)
    // Loop akan terus berputar JIKA:
    // 1. Energi masih lebih dari 0 (energi > 0)
    // DAN (&&)
    // 2. User tidak memilih angka 0 (pilihan != 0)
    } while(energi > 0 && pilihan != 0); 
    
    // Jika loop berhenti karena energi habis (0 atau minus)
    if (energi <= 0) {
        cout << "\nGame Over! " << nama << " kehabisan energi karena terlalu keras belajar.\n";
    }
}

// --- PROGRAM UTAMA (MAIN) ---

int main(){
	
    string nama; // Variabel untuk menyimpan nama
    int energi;  // Variabel untuk menyimpan angka energi awal
    
    // Input Data Awal
    cout<<"masukan nama : ";
    cin>>nama; // User mengetik nama
    
    cout<<"masukan jumlah energi : ";
    cin>>energi; // User menentukan energi awal (misal: 100)
    
    // Memulai Game
    // Kita mengirim variabel 'nama' dan 'energi' ke fungsi game.
    // Karena fungsi game menggunakan '&', perubahan energi di sana akan permanen.
    game(nama, energi);

    return 0; // Menandakan program selesai dengan sukses
}
