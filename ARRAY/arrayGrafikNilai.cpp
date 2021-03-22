#include <iostream>
using namespace std;
int main(){
	//BUAT GRAFIK NILAI DARI 0-100
	int nilai[10];//inisialisasi
	for(int i=0; i<=10; i++){//masuk perulangan
		
		cout<<"Berapa orang yang bernilai diantara ";//penjelasan
		
			if(i==0){//percabangan jika 0 m
				cout<<"0-9 :";//ini outputnya,lalu setelah ini langusng ke cin>>
			}else if(i==10){
				
				cout<<"100 :";
				
			}else{//ini berlaku untuk i dari 1-9
				cout<<i*10<<"-"<<(i*10)+9<<":";//disini si i jadi 10,karena i dikali 10 sampai 19,kenapa bisa 19 karena si i dikali 10 ditambah 9
			}
		cin>>nilai[i];//inputan jumlah orang INPUTAN JUMLAH ORANG DISINI !!!!!!!!!! TERHUBUNG KE BAWAH
	}
	//sekarang memberi bintang sesuai dengan nilai[i]-nya
	
	for(int i=0; i<=10; i++){//masuk perulangan grafik
		
		cout<<"Grafik nilai orang yang berada di antara ";
		//sistem disini sama
			if(i==0){
				cout<<"0-9 :";
			}else if(i==10){
				cout<<i*10<<":";
			}else{
				cout<<i*10<<"-"<<(i*10)+9<<":";
			}
		//masih sama sampai sini
		//TERHUBUNG KE BAWAH INI !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
		for(int bintang=0; bintang<nilai[i]/*ini adalah penentuan batas perulangan sesuai jumlah orang(inputan) yang dimasukkan*/; bintang++){//bedanya disini,disini ada bintang atau bisa kita sebut i(penentuan grafik nilai)
														//bintang atau i disini memiliki batas sampai jumlah orang yang ditentukan di perulangan diatas,
														//misal bintang =0 lalu berapa batas jumlah orang yang dimiliki oleh 0,untuk jumlah orang sudah diinputkan di awal
														//misal jumlah orang 2,maka akan tampil bintang sebanyak 2 kali perulangan
														//kemudian seterusnya untuk bintang =1,apabila jumlah orang 3 ,maka akan muncul bintang sebanyak 3 kali perulangan
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	cin.get();
	return 0;
}


