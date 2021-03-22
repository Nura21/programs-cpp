/*
	FOR MENAMPILKAN BINTANG SECARA TERBALIK DARI 10-1
*/
#include <iostream>
using namespace std;
int main(){
	
	for(int i=5; i>=1; i--){//inisialisasi baris
		for(int j=0; j<i;/*j kurang dari i*/ j++){//inisialisasi untuk bintang
			cout<<"*";
		}
		cout<<endl;
	}
	
}
