#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout<<"masukan nilai : ";
	cin>>nilai;
	
	if(nilai >= 90 && nilai <= 100){
		cout <<"A";
	}
	else if(nilai >= 80){
		cout<<"B";
	}else if(nilai >= 70){
		cout<<"C";
	}else if(nilai >= 70 && nilai <=0){
		cout<<"d";
	}else{
		cout<<"angka tida valid";		
	}

		
}
