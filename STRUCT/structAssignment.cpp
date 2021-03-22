#include <iostream>
#include <cstring>
using namespace std;
struct Jurusan_Mahasiswa{
	string IT,MI,TK,MM,TM;
	int jumlah_kelulusan_IT2,jumlah_kelulusan_MI2,jumlah_kelulusan_TK2,jumlah_kelulusan_MM2,jumlah_kelulusan_TM2;
};
struct Kelulusan_Mahasiswa{
	Jurusan_Mahasiswa jurusan;
};

Kelulusan_Mahasiswa IT[5];
Kelulusan_Mahasiswa MI[5];
Kelulusan_Mahasiswa TK[5];
Kelulusan_Mahasiswa MM[5];
Kelulusan_Mahasiswa TM[5];
void inputan(){
		//INPUTAN DATA IT
				for(int i=0; i<5; i++){
					if(i==0){
						cout<<"IT\n";
						cout<<"Masukkan nama jurusan : ";
						getline(cin,IT[i].jurusan.IT);
					}else{
							cout<<"Jumlah Kelulusan pada Tahun ke-"<<i<<" : ";
							cin>>IT[i].jurusan.jumlah_kelulusan_IT2;
					}
				}
				
				fflush(stdin);
		//INPUTAN DATA MI		
				for(int i=0; i<5; i++){
					if(i==0){
						cout<<"MI\n";
						cout<<"Masukkan nama jurusan : ";
						getline(cin,MI[i].jurusan.MI);
					}else{
							cout<<"Jumlah Kelulusan pada Tahun ke-"<<i<<" : ";
							cin>>MI[i].jurusan.jumlah_kelulusan_MI2;
					}
				}
		//INPUTAN DATA TK	
			fflush(stdin);	
				for(int i=0; i<5; i++){
					if(i==0){
						cout<<"TK\n";
						cout<<"Masukkan nama jurusan : ";
						getline(cin,TK[i].jurusan.TK);
					}else{
							cout<<"Jumlah Kelulusan pada Tahun ke-"<<i<<" : ";
							cin>>TK[i].jurusan.jumlah_kelulusan_TK2;
					}
				}
		//INPUTAN DATA MM
		fflush(stdin);		
				for(int i=0; i<5; i++){
					if(i==0){
						cout<<"MM\n";
						cout<<"Masukkan nama jurusan : ";
						getline(cin,MM[i].jurusan.MM);
					}else{
							cout<<"Jumlah Kelulusan pada Tahun ke-"<<i<<" : ";
							cin>>MM[i].jurusan.jumlah_kelulusan_MM2;
					}
				}
		//INPUTAN DATA TM
		fflush(stdin);
				for(int i=0; i<5; i++){
					if(i==0){
						cout<<"TM\n";
						cout<<"Masukkan nama jurusan : ";
						getline(cin,TM[i].jurusan.TM);
					}else{
							cout<<"Jumlah Kelulusan pada Tahun ke-"<<i<<" : ";
							cin>>TM[i].jurusan.jumlah_kelulusan_TM2;
					}
				}		
				cout<<endl<<endl;
}




int main(){
	
	
	inputan();
	int pilihan;
	string pengulangan;
	do{
		cout<<"Pada tahun : ";
		cin>>pilihan;
			
			if(pilihan==2016){
				for(int i=0; i<1; i++){
					cout<<"Jurusan : "<<IT[i].jurusan.IT<<" Jumlah yang lulus adalah "<<IT[i+1].jurusan.jumlah_kelulusan_IT2<<"\n";
					cout<<"Jurusan : "<<MI[i].jurusan.MI<<" Jumlah yang lulus adalah "<<MI[i+1].jurusan.jumlah_kelulusan_MI2<<"\n";		
					cout<<"Jurusan : "<<TK[i].jurusan.TK<<" Jumlah yang lulus adalah "<<TK[i+1].jurusan.jumlah_kelulusan_TK2<<"\n";
					cout<<"Jurusan : "<<MM[i].jurusan.MM<<" Jumlah yang lulus adalah "<<MM[i+1].jurusan.jumlah_kelulusan_MM2<<"\n";
					cout<<"Jurusan : "<<TM[i].jurusan.TM<<" Jumlah yang lulus adalah "<<TM[i+1].jurusan.jumlah_kelulusan_TM2<<"\n";
				}
			}else if(pilihan==2017){
				for(int i=0; i<1; i++){
					cout<<"Jurusan : "<<IT[i].jurusan.IT<<" Jumlah yang lulus adalah "<<IT[i+2].jurusan.jumlah_kelulusan_IT2<<"\n";
					cout<<"Jurusan : "<<MI[i].jurusan.MI<<" Jumlah yang lulus adalah "<<MI[i+2].jurusan.jumlah_kelulusan_MI2<<"\n";		
					cout<<"Jurusan : "<<TK[i].jurusan.TK<<" Jumlah yang lulus adalah "<<TK[i+2].jurusan.jumlah_kelulusan_TK2<<"\n";
					cout<<"Jurusan : "<<MM[i].jurusan.MM<<" Jumlah yang lulus adalah "<<MM[i+2].jurusan.jumlah_kelulusan_MM2<<"\n";
					cout<<"Jurusan : "<<TM[i].jurusan.TM<<" Jumlah yang lulus adalah "<<TM[i+2].jurusan.jumlah_kelulusan_TM2<<"\n";
				}
			}else if(pilihan==2018){
				for(int i=0; i<1; i++){
					cout<<"Jurusan : "<<IT[i].jurusan.IT<<" Jumlah yang lulus adalah "<<IT[i+3].jurusan.jumlah_kelulusan_IT2<<"\n";
					cout<<"Jurusan : "<<MI[i].jurusan.MI<<" Jumlah yang lulus adalah "<<MI[i+3].jurusan.jumlah_kelulusan_MI2<<"\n";		
					cout<<"Jurusan : "<<TK[i].jurusan.TK<<" Jumlah yang lulus adalah "<<TK[i+3].jurusan.jumlah_kelulusan_TK2<<"\n";
					cout<<"Jurusan : "<<MM[i].jurusan.MM<<" Jumlah yang lulus adalah "<<MM[i+3].jurusan.jumlah_kelulusan_MM2<<"\n";
					cout<<"Jurusan : "<<TM[i].jurusan.TM<<" Jumlah yang lulus adalah "<<TM[i+3].jurusan.jumlah_kelulusan_TM2<<"\n";
				}
			}else if(pilihan==2019){
				for(int i=0; i<1; i++){
					cout<<"Jurusan : "<<IT[i].jurusan.IT<<" Jumlah yang lulus adalah "<<IT[i+4].jurusan.jumlah_kelulusan_IT2<<"\n";
					cout<<"Jurusan : "<<MI[i].jurusan.MI<<" Jumlah yang lulus adalah "<<MI[i+4].jurusan.jumlah_kelulusan_MI2<<"\n";		
					cout<<"Jurusan : "<<TK[i].jurusan.TK<<" Jumlah yang lulus adalah "<<TK[i+4].jurusan.jumlah_kelulusan_TK2<<"\n";
					cout<<"Jurusan : "<<MM[i].jurusan.MM<<" Jumlah yang lulus adalah "<<MM[i+4].jurusan.jumlah_kelulusan_MM2<<"\n";
					cout<<"Jurusan : "<<TM[i].jurusan.TM<<" Jumlah yang lulus adalah "<<TM[i+4].jurusan.jumlah_kelulusan_TM2<<"\n";
				}
			}
			
			cout<<"Apakah anda ingin mengulang : ";
			cin>>pengulangan;
			
	}while(pengulangan=="y"||pengulangan=="Y");
	cin.get();
	system("cls");
	return 0;
}


