#include <iostream>
#include <cstring>
using namespace std;
int flag=0,TOTAL=0,ARRAY_BARU[100];
int pencarian(int x[],int &jumlah);
void tampilan(int x[],int &jumlah);
int main(){
	
	int data=25;
	int array[data]={34,8,50,74,87,90,12,25,20,30,35,45,40,22,29,72,60,55,53,12,32,33,12,41,12};
	tampilan(array,data);
	
}
void tampilan(int x[],int &jumlah){
	
	cout<<"DATA : ";
	for(int i=0; i<jumlah; i++){
		cout<<x[i]<<" ";
	}
	cout<<endl<<endl;
		pencarian(x,jumlah);
}
int pencarian(int x[],int &jumlah){
	int cari;
	string keadaan;
	
	do{
		cout<<"Masukkan angka yang ingin dicari :";
		cin>>cari;
			for(int i=0; i<jumlah; i++){
				if(cari==x[i]){
					flag=1;//mirip boolean
					ARRAY_BARU[TOTAL]=i;//jadi array kosong dimasukinindeks 0 dengan nilai diambil dari indeks x[yg ini 'i']
					
					TOTAL++;//selain jadi pengisian indeks,total juga digunakan untuk berapa kali data yg sama masuk
				}
			}
			
			cout<<endl;
			if(flag==1){
				cout<<"POSISI Indeks ke :";
					for(int i=0; i<TOTAL; i++){
						cout<<ARRAY_BARU[i]<<" ";//disini data array kosong yang mengambil nilai dari indeks array x,ditampilkan nilainya(indeksnya) 
					}
				cout<<"\nMaka total data adalah : "<<TOTAL;
			}else{
				cout<<"TIDAK ADA";//mengapa bisa tampil satu aja,karena flagnya dipisah
			}


		cout<<endl<<endl;
		cout<<"Apakah anda ingin mengulang : ";
		cin>>keadaan;	
		
	}while(keadaan=="y"||keadaan=="Y");	
		return cari;
	
}