//CLASS DENGAN CONSTRUCTOR
#include <iostream>
#include <string>
using namespace std;
class DECK{
	public :
		string data_deck;
		string jumlah_kartu[10];
		string kata;
		DECK(string data){
			DECK::data_deck=data;
			show();
		}
		
		void show(){
			cout<<"Ini "<<DECK::data_deck<<endl;
		}
			
		void show2(){
			for(int i=0; i<10; i++){
				cout<<DECK::jumlah_kartu[i]<<endl;
			}
		}
		
		void show3(){
			this->kata="hello";
			cout<<this->kata;//this hanya bisa digunakan di dalam class
		}
};

int main(){
	DECK deck1=DECK("Obelisk The Tormentor");//langsung mencari construct
	
		for(int i=0; i<10; i++){
			cout<<"Masukkan data deck : ";
			cin>>deck1.jumlah_kartu[i];
		}
		
		deck1.show2();
		deck1.show3();
		
	
	
	
	
	
}