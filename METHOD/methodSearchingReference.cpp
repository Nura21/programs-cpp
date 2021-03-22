#include <iostream>
using namespace std;
int flag=0;
void inputan(int x[],int &dt);
int pencarian(int x[],int &dt);
void tampilan(int x[],int &dt){
	
	for(int i=0; i<dt; i++){
		
		cout<<x[i]<<" ";
		
	}
	
	pencarian(x,dt);
	
}
int main(){
	int data=10;
	int array[data];
	inputan(array,data);
	
}
void inputan(int x[],int &dt){
	
	for(int i=0; i<dt; i++){
		
		cout<<"Masukkan data pada indeks ke-"<<i<<": ";
		cin>>x[i];
		cout<<endl;
		
	}
	
	tampilan(x,dt);
	
} 

int pencarian(int x[],int &dt){
	int cari;
	cout<<"Masukkan angka yang ingin dicari :";
	cin>>cari;
	
		for(int i=0; i<dt; i++){
			if(cari==x[i]){
				flag=1;
				if(flag==1){
					cout<<"ANGKA :"<<x[i]<<" dengan indeks ke-"<<i<<endl;
				}
			}
			
		}
		
		return cari;
	
}