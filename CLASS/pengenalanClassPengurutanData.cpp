#include <iostream>
using namespace std;
class Pengurutan{
	
	public :
		void data(int array[],int);	
		void pengurutan_data(int array[],int);
		void tampilkan_data(int array[],int);
};

int main(){
	Pengurutan* data1; 
	int array[15]={34,12,56,78,6,43,32,20,90,50,55,75,85,95,25};
	
	data1->data(array,15);
	
	cin.get();
	return 0;
}

void Pengurutan::data(int array[],int n){
	cout<<"\nTampilkan data : ";
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
	pengurutan_data(array,n);
	
	
}

void Pengurutan::pengurutan_data(int array[],int n){
	cout<<"\nPengurutan dimulai !";
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(array[i]>array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	tampilkan_data(array,n);	
	
}

void Pengurutan::tampilkan_data(int array[],int n){
	cout<<"\nData setelah diurutkan : ";
	for(int i=0; i<n; i++){
		cout<<array[i]<<" "; 
	}
}



