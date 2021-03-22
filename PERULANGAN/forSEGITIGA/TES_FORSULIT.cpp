#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=4; i++){
		
		for(int j=4; j>i; j--){
			cout<<" ";
		}
		
		for(int k=0; k<i; k++){
			cout<<" *";
		}
		cout<<endl;
		
	}
	
	
	for(int i=3; i>=1; i--){//inisialisasi baris
		for(int j=4; j>i; j--){//akan menampilkan " "  
			cout<<" ";
		}
		
		for(int k=0; k<i; k++){
			cout<<" *";
		}
		cout<<endl;
	}
	
}
