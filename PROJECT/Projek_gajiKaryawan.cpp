/*
Susun program untuk menginput data karyawan, antara lain :
Kode Jabatan
Nama Karyawan
Jumlah Anak
Waktu Lembur
*/
#include <iostream>
#include <cstring>
using namespace std;
struct Total_Gaji{
	int Gaji_Pokok;
	int Tunjangan;
	int Uang_Lembur;
	int Total_Gaji_semua;
};
struct Data_Karyawan{
	int Kode_Jabatan,Jumlah_anak,Waktu_Lembur;
	string Nama_Karyawan;
	Total_Gaji Gaji;
};
Data_Karyawan Karyawan[2][1][1];
int masukkan_data();
int main(){
	masukkan_data();
	return 0;
}
int masukkan_data(){
	int total_karyawan;
	string pilihan;
	cout<<"\tMasukkan Data Karyawan"<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<1; j++){
			for(int k=0; k<1; k++){
				cout<<"Masukkan Kode Jabatan : ";
				cin>>Karyawan[i][j][k].Kode_Jabatan;
				cout<<endl;
				
				cout<<"Masukkan Nama Karyawan : ";
				cin>>Karyawan[i][j][k].Nama_Karyawan;
				cout<<endl;
				fflush(stdin);
				
				cout<<"Masukkan Jumlah Anak : ";
				cin>>Karyawan[i][j][k].Jumlah_anak;
				cout<<endl;
				
				cout<<"Masukkan Waktu Lembur : ";
				cin>>Karyawan[i][j][k].Waktu_Lembur;
				cout<<" Jam";
				cout<<endl;
				
				/*
			Kemudian program secara otomatis akan mencetak data karyawan, antara lain :
				Nama Karyawan
				Jabatan
				Gaji Pokok
				Tunjangan
				Uang Lembur
				Total Gaji
				Dengan ketentuan sebagai berikut:
				1. Kode Jabatan
					- 001 = JABATAN : BOSSNYA, GAJI POKOK : 10000000
					- 002 = JABATAN : ANAK BUAH 1, GAJI POKOK : 50000000
					- 003 = JABATAN : ANAK BUAH 2, GAJI POKOK : 25000000
				2. Jumlah Anak
					- 0 = TUNJANGAN : 500000
					- 1-3 = TUNJANGAN : 1000000 / ANAK
					- >3 = TUNJANGAN : 1500000 / ANAK
				3. Uang Lembur = 100000/JAM
		*/
			
			cout<<"Nama : "<<Karyawan[i][j][k].Nama_Karyawan<<endl;
			if(Karyawan[i][j][k].Kode_Jabatan==001){
				cout<<"Jabatan : BOSS"<<endl;
				Karyawan[i][j][k].Gaji.Gaji_Pokok=10000000;
				cout<<"Gaji Pokok : "<<Karyawan[i][j][k].Gaji.Gaji_Pokok<<endl;
			}else if(Karyawan[i][j][k].Kode_Jabatan==002){
				cout<<"Jabatan : ANAK BUAH 1"<<endl;
				Karyawan[i][j][k].Gaji.Gaji_Pokok=50000000;
				cout<<"Gaji Pokok : "<<Karyawan[i][j][k].Gaji.Gaji_Pokok<<endl;
			}else{
				cout<<"Jabatan : ANAK BUAH 2"<<endl;
				Karyawan[i][j][k].Gaji.Gaji_Pokok=25000000;
				cout<<"Gaji Pokok : "<<Karyawan[i][j][k].Gaji.Gaji_Pokok<<endl;
			}
			
			if(Karyawan[i][j][k].Jumlah_anak==0){
				Karyawan[i][j][k].Gaji.Tunjangan=Karyawan[i][j][k].Jumlah_anak+500000;
				cout<<"Tunjangan : "<<Karyawan[i][j][k].Gaji.Tunjangan<<endl;
			}else if(Karyawan[i][j][k].Jumlah_anak>0 && Karyawan[i][j][k].Jumlah_anak<=3){
				Karyawan[i][j][k].Gaji.Tunjangan=Karyawan[i][j][k].Jumlah_anak*1000000;
				cout<<"Tunjangan : "<<Karyawan[i][j][k].Gaji.Tunjangan<<endl;
			}else{
				Karyawan[i][j][k].Gaji.Tunjangan=Karyawan[i][j][k].Jumlah_anak*1500000;
				cout<<"Tunjangan : "<<Karyawan[i][j][k].Gaji.Tunjangan<<endl;
			}
			
				Karyawan[i][j][k].Gaji.Uang_Lembur=Karyawan[i][j][k].Waktu_Lembur*100000;
				cout<<"Uang Lembur : "<<Karyawan[i][j][k].Gaji.Uang_Lembur<<endl;
				
				Karyawan[i][j][k].Gaji.Total_Gaji_semua=Karyawan[i][j][k].Gaji.Uang_Lembur+Karyawan[i][j][k].Gaji.Tunjangan+Karyawan[i][j][k].Gaji.Gaji_Pokok;
				
				cout<<"Total Gaji : "<<Karyawan[i][j][k].Gaji.Total_Gaji_semua<<endl;
				
				cin.get();
				
				cout<<endl<<endl;
				total_karyawan++;
				cout<<"Total Karyawan :"<<total_karyawan<<endl;
				cout<<"Apakah anda ingin menambah data terakhir :";
				cin>>pilihan;
				
					if(pilihan!="y" || pilihan!="Y"){
						exit(0);
					}else{
						system("cls");
					}
				
				
				
			}
		}
	}
		
		return total_karyawan;
	
}








