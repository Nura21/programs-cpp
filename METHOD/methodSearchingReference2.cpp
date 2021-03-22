#include <iostream>
#include <cstring>
using namespace std;
int flag=0,TOTAL=0;
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
		TOTAL=0;
		cout<<"Masukkan angka yang ingin dicari :";
		cin>>cari;
			for(int i=0; i<jumlah; i++){
				if(cari==x[i]){
					flag=1;
					if(flag==1){
						cout<<"ANGKA "<<x[i]<<" dan ada di posisi indeks ke-"<<i;
						cout<<endl;
						TOTAL++;
					}
					
				}
			}
				cout<<endl;
					if(TOTAL!=0){
						cout<<"Maka total data adalah : "<<TOTAL;
					}else{
						cout<<"Tidak Ada ";
					}
					
						cout<<endl<<endl;
						cout<<"Apakah anda ingin mengulang : ";
						cin>>keadaan;
	
	}while(keadaan=="y"||keadaan=="Y");	
		
		
		return cari;
	
}