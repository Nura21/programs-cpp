#include <iostream>
#include "CLASS_KALKULATOR_PROTOTIPE2.h"
using namespace std;
void MESIN::pemilihan(){
	cout<<"Masukkan pilihan : ";
	cin>>pilih;
	pemilihan2(pilih);
}

int MESIN::pemilihan2(int x){
	cout<<"Masukkan angka 1 : ";
	cin>>angka1;
	cout<<"Masukkan angka 2 : ";
	cin>>angka2;
	
	switch(x){
		case 1 :
			pertambahan(angka1,angka2);
			break;
		case 2 :
			pengurangan(angka1,angka2);
			break;
		case 3 :
			perkalian(angka1,angka2);
			break;
		case 4 :
			pembagian(angka1,angka2);
			
		default :
			cout<<"Salah pencet !!!";		
	}
	return x;
}

void MESIN::pertambahan(int angka1,int angka2){
	
	angka1+=angka2;
	cout<<angka1<<endl;
}

void MESIN::pengurangan(int angka1,int angka2){
	angka1-=angka2;
	cout<<angka1<<endl;
}

void MESIN::perkalian(int angka1,int angka2){
	angka1*=angka2;
	cout<<angka1<<endl;
}

void MESIN::pembagian(int angka1,int angka2){
	angka1/=angka2;
	cout<<angka1<<endl;
}