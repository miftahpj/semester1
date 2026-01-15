#include <iostream>
using namespace std;

int main(){
	int nilai;
	char grade;
	
	cout<<"masukan nilai : ";
	cin>> nilai;
	
	if(nilai >= 90){
		grade = 'a';
	}
	if(nilai >= 80){
		grade = 'b';
	}
	if(nilai >= 70){
		grade = 'c';
	}else{
		grade ='d';
	}
	
	cout<<"Grade : "<<grade;
}
