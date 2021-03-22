//CLASS_TANPA_CONSTRUCTOR_KALKULATOR
#include <iostream>
using namespace std;
class Kalkulator{
	public :
		int angka1,angka2;
		
		void pilihan(int pilih){
			switch(pilih){
				case 1 :
					Plus(angka1,angka2);
					break;
				case 2 :
					Minus(Kalkulator::angka1,Kalkulator::angka2);
					break;
				case 3 :
					Times(Kalkulator::angka1,Kalkulator::angka2);
					break;
				case 4 :
					Division(Kalkulator::angka1,Kalkulator::angka2);
					break;
				default :
					cout<<"Ada Kesalahan !";
			}
		}
	
	
	private :	
			void Plus(int angka1,int angka2){
				cout<<"\nHasil :"<<angka1+angka2<<endl;
			}
			void Minus(int angka1,int angka2){
				this->angka1=angka1;
				Kalkulator::angka2=angka2;
				cout<<"\nHasil :"<<angka1-angka2<<endl;
			}
			void Times(int angka1,int angka2){
				Kalkulator::angka1=angka1;
				Kalkulator::angka2=angka2;
				cout<<"\nHasil :"<<angka1*angka2<<endl;
			}
			void Division(int angka1,int angka2){
				Kalkulator::angka1=angka1;
				Kalkulator::angka2=angka2;
				cout<<"\nHasil :"<<angka1/angka2<<endl;
			}
	
	
};

int main(){
	Kalkulator Mesin1;
	int pilih;
	string pengulang;
	do{
		cout<<"Masukkan angka pertama : ";
		cin>>Mesin1.angka1;
		cout<<endl;
		cout<<"Masukkan angka kedua : ";
		cin>>Mesin1.angka2;
		cout<<endl;
		
		cout<<"Masukkan pilihan 1.PLUS 2.MINUS 3.TIMES. 4.DIVISION : ";
		cin>>pilih;
		Mesin1.pilihan(pilih);
		
		cout<<endl<<endl;
		cout<<"Apakah anda ingin mengulang : ";
		cin>>pengulang;
	}while(pengulang=="y" || pengulang=="Y");
	
	
	
}