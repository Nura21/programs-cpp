#include <iostream>//header
#include <string.h>
using namespace std;
int parkir_cek,total,b,c;//parkir_cek untuk berapa lama parkir,total ada di function mobil atau motor
/*
	Untuk motor sejam 2000,2 jam 4000,seterusnya tambah 1000
	untuk mobil sejam 3000,2 jam 5000,seterusnya tambah 1000
	1. CEK KARCIS
	2. TAMPILKAN FOTO DAN PLAT NOMOR
	3. BERAPA LAMA PARKIR
	4. BAYAR
*/


int motor(int a){//scoping
	b=2000;
	c=4000;//seterusnya tambah 1000;
	
		if(a==2){//jika waktu lama parkirnya sekian maka
			cout<<endl;
			cout<<"Bayar parkir sebesar :"<<c<<" rupiah";//ini outputnya
		}else if(a==1){//sama
			cout<<endl;
			cout<<"Bayar parkir sebesar :"<<b<<" rupiah";//sama
		}else{
			
			total=((a-2)*1000)+c;//rumus pasti untuk diketahui berap biaya parkirnya
			cout<<"Bayar parkir sebesar :"<<total<<" rupiah";
			
			
		}
		
		return total;
	
	
	
}

int mobil(int a){//scoping
	
	b=3000;
	c=5000;//seterusnya tambah 1000
	
		if(a==2){
			cout<<endl;
			cout<<"Bayar parkir sebesar :"<<c<<" rupiah";
		}else if(a==1){
			
			cout<<endl;
			cout<<"Bayar parkir sebesar :"<<b<<" rupiah";
		}else{
			
			total=((a-2)*1000)+c;
			cout<<"Bayar parkir sebesar :"<<total<<" rupiah";
			
		}
		
		return total;
	
}

int main(){//body
	string kendaraan;
	cout<<"MOTOR DATANG";
	cout<<"\n";
	cout<<"BERIKAN KARCIS";
	cout<<endl;
	
		cout<<"Masukkan kendaraan :";
		cin>>kendaraan;
		
			if(kendaraan=="mobil"){
				cout<<"Masukkan berapa lama parkir :";
				cin>>parkir_cek;
				
				mobil(parkir_cek);
			}else if(kendaraan=="motor"){
				
				cout<<"Masukkan berapa lama parkir :";
				cin>>parkir_cek;
				
				motor(parkir_cek);
				
			}
	
}
