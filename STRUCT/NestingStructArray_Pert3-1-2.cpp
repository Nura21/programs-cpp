#include <iostream>
#include <string>
using namespace std;

//NESTED STRUCT
struct alamat{
    string nama_gedung;
    string nama_jalan;
    string no_rumah;
    string no_rtrw;
    string nama_desakelurahan;
    string nama_kecamatan;
    string nama_kotakabupaten;
    string provinsi;
    string kodepos;
};

struct mhs{
    string nama;
    string umur;
    string jenis_kelamin;
    string ttl;//tempat tanggal lahir
    string nomor_telepon;
    alamat detail;

};

//STRUCT
struct mhs2{
    string nama;
    string umur;
    string jenis_kelamin;
    string ttl;//tempat tanggal lahir
    string nomor_telepon;

};
struct alamat2{
    string nama_gedung;
    string nama_jalan;
    string no_rumah;
    string no_rtrw;
    string nama_desakelurahan;
    string nama_kecamatan;
    string nama_kotakabupaten;
    string provinsi;
    string kodepos;
};

//NESTED STRUCT
mhs obj1;
mhs obj2;
mhs obj3;
void input_data();
void tampilkan();

//STRUCT
mhs2 obj2_1;
alamat2 obj2alamat2_1;
mhs2 obj2_2;
alamat2 obj2alamat2_2;
mhs2 obj2_3;
alamat2 obj2alamat2_3;
void input_data2();
void tampilkan2();

int main(){
    int pilih;
    cout<<"\tPROGRAM STRUCT & NESTING STRUCT\n";
    cout<<"Masukkan pilihan [1. Nested Struct 2. Struct] : ";
    cin>>pilih;
    
        if(pilih==1){
            fflush(stdin);
            input_data();
            cin.get();
            system("cls");
        }else if(pilih==2){
            fflush(stdin);
            input_data2();
            cin.get();
            system("cls");
        }
}


void input_data(){
    int i=1;
    while(i<=3){
        if(i==1){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            cin>>obj1.nama;
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj1.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            cin>>obj1.jenis_kelamin;
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj1.detail.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj1.detail.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj1.detail.kodepos;
            fflush(stdin);
        }else if(i==2){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.nama);
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj2.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.jenis_kelamin);
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2.detail.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj2.detail.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj2.detail.kodepos;
            fflush(stdin);
        }else if(i==3){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.nama);
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj3.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.jenis_kelamin);
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj3.detail.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj3.detail.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj3.detail.kodepos;
            fflush(stdin);
        }
        i++;
    }
    tampilkan();
}

void tampilkan(){
    int i=1;
    while(i<=3){
        if(i==1){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj1.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj1.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj1.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj1.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj1.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj1.detail.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj1.detail.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj1.detail.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj1.detail.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj1.detail.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj1.detail.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj1.detail.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj1.detail.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj1.detail.kodepos;
        }else if(i==2){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj2.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj2.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj2.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj2.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj2.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj2.detail.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj2.detail.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj2.detail.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj2.detail.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj2.detail.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj2.detail.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj2.detail.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj2.detail.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj2.detail.kodepos;
        }else if(i==3){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj3.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj3.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj3.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj3.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj3.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj3.detail.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj3.detail.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj3.detail.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj3.detail.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj3.detail.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj3.detail.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj3.detail.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj3.detail.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj3.detail.kodepos;
        }
        i++;
    }
}



void input_data2(){
    int i=1;
    while(i<=3){
        if(i==1){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_1.nama);
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj2_1.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_1.jenis_kelamin);
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_1.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_1.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_1.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj2alamat2_1.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj2alamat2_1.kodepos;
            fflush(stdin);
        }else if(i==2){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_2.nama);
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj2_2.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_2.jenis_kelamin);
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_2.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_2.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_2.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj2alamat2_2.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj2alamat2_2.kodepos;
            fflush(stdin);
        }else if(i==3){
            fflush(stdin);
            fflush(stdin);
            cout<<"\nMasukkan nama mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_3.nama);
            fflush(stdin);
            cout<<"\nMasukkan umur mahasiswa ke-"<<i<<" : ";
            cin>>obj2_3.umur;
            fflush(stdin);
            cout<<"\nMasukkan jenis kelamin mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_3.jenis_kelamin);
            fflush(stdin);
            cout<<"\nMasukkan ttl mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_3.ttl);
            fflush(stdin);
            cout<<"\nMasukkan nomor telepon mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2_3.nomor_telepon);
            fflush(stdin);
            cout<<"\nMasukkan nama daerah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.nama_gedung);
            fflush(stdin);
            cout<<"\nMasukkan nama jalan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.nama_jalan);
            fflush(stdin);
            cout<<"\nMasukkan nomor rumah mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.no_rumah);
            fflush(stdin);
            cout<<"\nMasukkan nomor rt/rw mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.no_rtrw);
            fflush(stdin);
            cout<<"\nMasukkan nama desa mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.nama_desakelurahan);
            fflush(stdin);
            cout<<"\nMasukkan nama kecamatan mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.nama_kecamatan);
            fflush(stdin);
            cout<<"\nMasukkan nama kota/kabupaten mahasiswa ke-"<<i<<" : ";
            getline(cin,obj2alamat2_3.nama_kotakabupaten);
            fflush(stdin);
            cout<<"\nMasukkan nama provinsi mahasiswa ke-"<<i<<" : ";
            cin>>obj2alamat2_3.provinsi;
            fflush(stdin);
            cout<<"\nMasukkan nomor kode pos mahasiswa ke"<<i<<" : ";
            cin>>obj2alamat2_3.kodepos;
            fflush(stdin);
        }
        i++;
    }
    tampilkan2();
}

void tampilkan2(){
    int i=1;
    while(i<=3){
        if(i==1){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj2_1.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj2_1.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj2_1.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj2_1.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj2_1.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj2alamat2_1.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj2alamat2_1.kodepos;
        }else if(i==2){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj2_2.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj2_2.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj2_2.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj2_2.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj2_2.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj2alamat2_2.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj2alamat2_2.kodepos;
        }else if(i==3){
            cout<<"\nNama mahasiswa ke-"<<i<<" : "<<obj2_3.nama;
            cout<<"\nUmur mahasiswa ke-"<<i<<" : "<<obj2_3.umur;
            cout<<"\nJenis kelamin mahasiswa ke-"<<i<<" : "<<obj2_3.jenis_kelamin;
            cout<<"\nTtl mahasiswa ke-"<<i<<" : "<<obj2_3.ttl;
            cout<<"\nNomor telepon mahasiswa ke-"<<i<<" : "<<obj2_3.nomor_telepon;
            cout<<"\nNama daerah mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.nama_gedung;
            cout<<"\nNama jalan mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.nama_jalan;
            cout<<"\nNomor rumah mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.no_rumah;
            cout<<"\nNomor rt/rw mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.no_rtrw;
            cout<<"\nNama desa mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.nama_desakelurahan;
            cout<<"\nNama kecamatan mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.nama_kecamatan;
            cout<<"\nNama kota/kabupaten mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.nama_kotakabupaten;
            cout<<"\nNama provinsi mahasiswa ke-"<<i<<" : "<<obj2alamat2_3.provinsi;
            cout<<"\nNomor kode pos mahasiswa ke"<<i<<" : "<<obj2alamat2_3.kodepos;
        }
        i++;
    }
}