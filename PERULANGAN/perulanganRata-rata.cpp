#include <iostream>
using namespace std;
int main(){
	
	int nilai[10]={8,12,20,15,7,5,6,4,32,3};//angka untuk penghitungan rata rata
	
	int indeksarray,Jumlah=0;//inisialisasi 
	float Ratarata;
	
	//Mulai penghitungan
	
	for(indeksarray=0; indeksarray<10; indeksarray++){
		Jumlah+=nilai[indeksarray];//cara penghitungan dimana tiap angka akan dilakukan penghitungan ulang selalu
	}
	
	Ratarata=(float)Jumlah/10;//setelah jumlah di penghiutngan terakhir akan langsung di konvert lalu langsung dibagi 10
	cout<<Ratarata;//tampilkan
}
