#include <iostream>
using namespace std;

void garis() {
    cout << "================================" << endl;
}
void Hi() {
    cout << "Halo di Toko Miftah" << endl;
}

int inputHarga(){
	int hargaBarang,jumlahBarang;

	cout<<"Masukan harga barang : ";
	cin>>hargaBarang;
	
	cout<<"Masukan harga barang : ";
	cin>>jumlahBarang;
	
	int total = hargaBarang * jumlahBarang;
	
	return total;
}

int hitungDiskon(int total){
	return total - (total * 0.10);
	
}
void tampilkanstruk(string nm, int totalakhir){
	cout<<"struk Belanja  "<<endl;
	cout<<"Nama Pelanggan : "<<nm<<endl;
//	cout<<"Total Belanja  : "<<total<<endl;
//	cour<<"Diskon         : 10% "<<endl;
//	cout<<"total          : "<<totalBayar<<endl;
	
}

int main() {
	
	
    garis();
    Hi();
//    string nama;
//    int belanja, diskon, total;



//    diskon = belanja * 0.10;
//    total = belanja - diskon;

    garis();
//    tampilkanstruk()
    
//    cout << nama << "\n"<< "belanja : " << belanja << "\n" << "diskon 10% : " << diskon << "\n"<< "total belanja : " << total << "\n";
    
	garis();

    return 0;
}
