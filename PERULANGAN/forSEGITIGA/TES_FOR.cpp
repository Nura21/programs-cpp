/*
	FOR MENAMPILKAN BINTANG 1-10 ARAH KANAN MENURUN
*/
#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=5; i++){//inisialisasi ini buat baris
		for(int j=0; j<i;/*ini untuk sealama j kurang dari i */ j++){//inisialisasi untuk bintang
			cout<<"*";
		}
		cout<<endl;
	}
	
}
