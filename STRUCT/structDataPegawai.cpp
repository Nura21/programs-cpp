#include <iostream>
#include <cstring>
using namespace std;
struct TANGGAL{
	
	int Tanggal,Bulan,Tahun;
	
};
struct TINGGAL{
	
	string Jalan,Kota;
	double Kode_Pos;
};
struct BIODATA{
	
	long double NIP;
	string Nama,Jabatan,Agama,Unit_Kerja;
	TANGGAL Tanggal_Lahir,Tanggal_Mulai_Kerja;
	TINGGAL Alamat;
};

BIODATA Pegawai[2];


int main(){

	for(int i=0; i<2; i++){
		
		cout<<"\tData Pegawai ke-"<<i+1<<endl<<endl;
		
		cout<<"Masukkan NIP                 :";
		cin>>Pegawai[i].NIP;
		cout<<endl;
		fflush(stdin);
		cout<<"Masukkan Nama                :";
		getline(cin,Pegawai[i].Nama);
		cout<<endl;
		fflush(stdin);
		cout<<"Masukkan Alamat              :";
		getline(cin,Pegawai[i].Alamat.Jalan);
		cout<<endl;
		fflush(stdin);
		cout<<"Masukkan Kode pos            :";
		cin>>Pegawai[i].Alamat.Kode_Pos;
		fflush(stdin);
		cout<<"Masukkan Kota                :";
		getline(cin,Pegawai[i].Alamat.Kota);
		cout<<endl;
		fflush(stdin);
		cout<<"Masukkan Jabatan             :";
		cin>>Pegawai[i].Jabatan;
		cout<<endl;
		fflush(stdin);
		cout<<"Masukkan Agama               :";
		cin>>Pegawai[i].Agama;
		cout<<endl;
		
		cout<<"Masukkan Tanggal Lahir       :";
		cin>>Pegawai[i].Tanggal_Lahir.Tanggal;
		cout<<"Masukkan Bulan Lahir         :";
		cin>>Pegawai[i].Tanggal_Lahir.Bulan;
		cout<<"Masukkan Tahun Lahir         :";
		cin>>Pegawai[i].Tanggal_Lahir.Tahun;
		cout<<endl;
		
		cout<<"Masukkan Tanggal Mulai Kerja :";
		cin>>Pegawai[i].Tanggal_Mulai_Kerja.Tanggal;
		cout<<"Masukkan Bulan Mulai Kerja   :";
		cin>>Pegawai[i].Tanggal_Mulai_Kerja.Bulan;
		cout<<"Masukkan Tahun Mulai Kerja   :";
		cin>>Pegawai[i].Tanggal_Mulai_Kerja.Tahun;
		cout<<endl;
		
		fflush(stdin);
		cout<<"Masukkan Unit Kerja          :";
		cin>>Pegawai[i].Unit_Kerja;
		system("cls");
	}
	
	
	for(int i=0; i<2; i++){
		cout<<"\tData Pegawai ke-"<<i+1<<endl<<endl;
	
		cout<<"NIP                 :"<<Pegawai[i].NIP<<endl;
		cout<<"Nama                :"<<Pegawai[i].Nama<<endl;
		cout<<"Alamat              :"<<Pegawai[i].Alamat.Jalan<<endl;
		cout<<"Kode pos            :"<<Pegawai[i].Alamat.Kode_Pos<<endl;
		cout<<"Kota                :"<<Pegawai[i].Alamat.Kota<<endl;
		cout<<"Jabatan             :"<<Pegawai[i].Jabatan<<endl;
		cout<<"Agama               :"<<Pegawai[i].Agama<<endl;
		cout<<"Tanggal Lahir       :"<<Pegawai[i].Tanggal_Lahir.Tanggal<<"-"<<Pegawai[i].Tanggal_Lahir.Bulan<<"-"<<Pegawai[i].Tanggal_Lahir.Tahun<<endl;
		cout<<"Tanggal Mulai Kerja :"<<Pegawai[i].Tanggal_Mulai_Kerja.Tanggal<<"-"<<Pegawai[i].Tanggal_Mulai_Kerja.Bulan<<"-"<<Pegawai[i].Tanggal_Mulai_Kerja.Tahun<<endl;
		cout<<"Unit Kerja          :"<<Pegawai[i].Unit_Kerja<<endl;
		
		cout<<endl<<endl;
	}
	
	
	
	cin.get();
	return 0;
	

}