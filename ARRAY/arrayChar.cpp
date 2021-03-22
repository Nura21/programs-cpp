#include <iostream>
using namespace std;
int main(){
/*	char h;
	cout<<"Masukkan satu karakter :";
	cin>>h;
	cout<<endl;
	cout<<h;
	cout<<endl;
*/	
//apabila tanda komentar diatas dihapus,otomatis char bervariabel a tidak akan tampil	
	char a[23];//untuk char tipe ini bisa memasukkan karakter dan boleh ada spasi antara karakter
	
	cout<<"Masukkan kalimat :";
	cin.getline(a,23);//inputan untuk yang menggCunakan spasi
	cout<<a;//output
	cout<<endl;
	cout<<a[3];//array
	
	cout<<endl<<endl;
	
	
	char b[20];//untuk char tipe ini memiliki batas sampai 20 karakter
	cout<<"Masukkan kalimat :";
	cin>>b;//input yang hanya bisa memasukkan karakter,dan tidak boleh ada spasi antar karakter(huruf)
	cout<<endl;
	cout<<b<<endl;//output
	cout<<b[1];//output dalam array
	cout<<endl;
	
	

}
