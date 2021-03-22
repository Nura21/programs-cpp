#include <iostream>
#include <string>
using namespace std;
struct aktor{
	string nama;
	int tahun_lahir;
	
};

struct film{
	string judul,genre;
	int tahun_film;
	
	//struct aktor
	aktor pemeran_1,pemeran_2;
	
};


int main(){
	
	aktor aktor1,aktor2;//hubungannya dengan struct aktor
	film film1,film2;//hubungannya dengan struct film
	
	//buat aktor 1
	aktor1.nama="irfan";
	aktor1.tahun_lahir=2000;
	
	//buat aktor 2
	aktor2.nama="RIRIN";
	aktor2.tahun_lahir=2000;
	
	//buat film
	film1.judul="SADIS";
	film1.genre="ROMANCE";
	film1.tahun_film=1998;
	film1.pemeran_1=aktor1;
	film2.pemeran_2=aktor2;
	
	//output
	cout<<film1.judul<<endl;
	cout<<film1.pemeran_1.nama<<endl;//ini mirip seperti function
	//jadi nanti mencari pemeran_1 ada dimana,
	//lalu ketemu di function struct film,kemudian di liat pemeran_1 tipenya apa,
	//tipenya struct aktor,maka dicari function struct aktor,diliat lagi 
	//struct aktor tipenya apa sih,ternyata string tipenya
	
	
	cin.get();
	return 0;
}