#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=10; i++){
		
		for(int j=10; j>=i; j--){
			cout<<" ";
		}
		
		for(int k=0; k<i; k++){
			cout<<" *";
		}
		cout<<endl;
	}
	/*
		KESALAHAN BIASA TERJADI DISAAT PEMBERIAN SPACE,LIHAT APAKAH DIA MENGGUNAKAN KURANG DARI SAMA DENGAN ATAU TIDAK,
		KESALAHAN JUGA BIASA TERJADI ,LIHAT APAKAH DIA MENGGUNAKAN LEBIH DARI SAMA DENGAN ATAU LEBIH DARI SAJA
	*/
	
	for(int i=9; i>=1; i--){
		
		for(int j=11; j>i; j--){
			cout<<" ";
		}
		
		for(int k=0; k<i; k++){
			cout<<" *";
		}
		cout<<endl;
	}
	
	
}
