/*
	FOR 1-10 KE ARAH KIRI MENURUN
*/
#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=5; i++){//inisialisasi untuk baris
		for(int j=5; j>=i; j--){//inisialisasi untuk menampilkan space
			cout<<" ";//space
		}
		
		for(int k=0; k<i; k++){//inisialisasi untuk menampilkan bintang
			cout<<"*";//bintang
		}
		cout<<endl;
	}
	
}
