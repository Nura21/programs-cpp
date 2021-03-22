#include <iostream>
#include <cstring>
using namespace std;
//PENGGUNAAN CONSTRUCT
class HERO{
	public :
		string nama;
		int skill,darah,power,pertahanan;
			
			HERO(string nama,int skill,int darah,int power,int pertahanan){//construct mirip function
			
				                        //membuat namespace,cara baca : Kita akan ambil variabel nama di dalam kelas HERO
	  /*disini*/HERO::nama=nama;        //nama setelah HERO adalah milik string nama di class hero
				HERO::skill=skill;      //nama setelah = adalah milik string nama construct
				HERO::darah=darah;
				HERO::power=power;
				HERO::pertahanan=pertahanan;
			/*	cout<<"HERO       : "<<HERO::nama<<endl;
				cout<<"SKILL      : "<<HERO::skill<<endl;
				cout<<"DARAH      : "<<HERO::darah<<endl;
				cout<<"POWER      : "<<HERO::power<<endl;
				cout<<"PERTAHANAN : "<<HERO::pertahanan<<endl;	
			*/
			}
			//method tanpa parameter tanpa return
			void tampilkandata(/*jika pakai parameter jadi begini HERO data. Tapi karena ini di dalam class,tidak perlu parameter*/){
				cout<<"\nNama saya       :"<<HERO::nama;     //memanggil data "disini"
				cout<<"\nSkill saya      :"<<HERO::skill;
				cout<<"\nDarah saya      :"<<HERO::darah;
				cout<<"\nPower saya      :"<<HERO::power;
				cout<<"\nPertahanan saya :"<<HERO::pertahanan;
				cout<<endl;
			}
			
			//method dengan parameter tanpa return
			void ubahNama(const char* nama){//parameter scoping mode
				HERO::nama=nama;	//penimpaan data
			}
			
			//method tanpa parameter dengan return
			string dataNama(){//fungsi 3
				return HERO::nama;
			}
			
			//method dengan parameter dan return
			int perubahan(int tambah){
				return HERO::skill+tambah;
				return HERO::darah+tambah;
				return HERO::power+tambah;
				return HERO::pertahanan+tambah;
			}
	
};

int main(){
	HERO Sparkman=HERO("IRFAN",90,75,50,80);
	HERO Burstinatrix=HERO("RINDI",100,100,100,100);
	Sparkman.tampilkandata(); //tampilkan data
	Burstinatrix.tampilkandata(); // tampilkan data
	Sparkman.ubahNama("IPAN");//ubah nama,liat di functionnya
	Sparkman.tampilkandata();
	
	string data=Sparkman.dataNama();//fungsi 3
	cout<<endl<<endl;
	cout<<data<<endl;
	Sparkman.perubahan(-5.0);//masuk function
	Sparkman.tampilkandata();//tampilkan data
	
	return 0;
}









