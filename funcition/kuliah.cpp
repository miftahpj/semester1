#include <iostream>
using namespace std;

void belajar(int &energi){
	energi-= 10;
	cout <<"Belajar Materi Algoritma..\n";
	
}

void makan(int &energi){
	energi += 15;
	cout<<"Masuk per..\n";
	belajar(energi);
}

void kuliah(int &energi){
	energi += 30;
	cout<<"Masuk perkuliahan..\n";
	belajar(energi);
}

void aktivitasharian(int &energi){
	cout<<"Hari dimulai\n";
	makan(energi);
	kuliah(energi);
	cout<<"Hari berakhir\n";
}

void tampilmenu(string nama, int &energi){
	cout<<"aktivitas \n";
	cout<<"Nama     : "<<nama<<endl;
	cout<<"Energi   : "<<energi<<endl;
	cout<<"\n1. kuliah   : ";
	cout<<"\n2  makan    : ";
	cout<<"\n0. out loop : ";
	cout<<"\nPiliha      : ";
		
}
void gameloop(string nama, int &energi){
	int pilihan;
	do{
		tampilmenu(nama,energi);
		cin>>pilihan;
		
		switch(pilihan) {
			case 1: kuliah(energi);break;
			case 2: makan(energi);break;
			case 0:
				cout<<"sampai jumpa lagi\n";
				break;
					default:
				cout<<"pilihan tidak valid\n";
		}
	}while (energi > 0 && pilihan != 0);
}
int main(){
	
	string nama = "jajang";
	int energi = 100;
	gameloop(nama,energi);
	
}
