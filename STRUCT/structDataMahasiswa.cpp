#include <iostream>
using namespace std;
/*
    name
    umur
    jenis kelamin
    tempat tanggal lahir
    alamat rumah
    no telepon
    nama ayah 
    nama ibu
    no ortu
    pekerjaan ayah
    pekerjaan ibu
*/
//bikin struct di dalam struct,pendaftaran mahasiswa
struct daftarortu{
    string nama_ayah;
    string nama_ibu;
    string no_telepon_bapak;
    string no_telepon_ibu;
    string pekerjaan_ayah;
    string pekerjaan_ibu;
};

struct data_mahasiswa{
    string nama;
    int umur;
    string jenis_kelamin;
    string ttl;//tempat tanggal lahir
    string alamat_rumah;
    string nomor_telepon;
    daftarortu file;

};


data_mahasiswa mahasiswa_object[1];
void input_data();
void input_data_orangtua();
void tampilkan();

int main(){
    input_data();
    input_data_orangtua();
    cin.get();
    system("cls");
    tampilkan();
}

void input_data(){
    cout<<"\t\tPENDAFTARAN MAHASISWA BARU\n";
    cout<<endl;
    for(int i=0; i<1; i++){
        cout<<"Masukkan Nama Mahasiswa : ";
        getline(cin,mahasiswa_object[i].nama);
        fflush(stdin);
        
        cout<<"\nMasukkan Umur Mahasiswa : ";
        cin>>mahasiswa_object[i].umur;
        
        fflush(stdin);
        
        cout<<"\nMasukkan Jenis Kelamin :";
        cin>>mahasiswa_object[i].jenis_kelamin;
        
        fflush(stdin);
        
        cout<<"\nMasukkan Tempat Tanggal Lahir : ";
        getline(cin,mahasiswa_object[i].ttl);
        
        fflush(stdin);
        
        cout<<"\nMasukkan Alamat Rumah Mahasiswa : ";
        getline(cin,mahasiswa_object[i].alamat_rumah);
        
        fflush(stdin);
        
        cout<<"\nMasukkan No. Telepon Mahasiswa : ";
        cin>>mahasiswa_object[i].nomor_telepon;
        
    }
    //cin.ignore();
    //system("PAUSE");
    //system("cls");
}

void input_data_orangtua(){
    /*
        string nama_ayah;
        string nama_ibu;
        string no_telepon_bapak;
        string no_telepon_ibu;
        string pekerjaan_ayah;
        string pekerjaan_ibu;
    */
        cout<<"\n\t\tDATA ORANG TUA";
        for(int i=0; i<1; i++){
            fflush(stdin);
            cout<<"\nMasukkan Nama Bapak : ";
            getline(cin,mahasiswa_object[i].file.nama_ayah);
            fflush(stdin);
            cout<<"\nMasukkan Nama Ibu : ";
            getline(cin,mahasiswa_object[i].file.nama_ibu);
            fflush(stdin);
            cout<<"\nMasukkan No. Telepon Bapak : ";
            cin>>mahasiswa_object[i].file.no_telepon_bapak;
            fflush(stdin);
            cout<<"\nMasukkan No. Telepon Ibu : ";
            cin>>mahasiswa_object[i].file.nama_ibu;
            fflush(stdin);
            cout<<"\nMasukkan Pekerjaan Ayah : ";
            cin>>mahasiswa_object[i].file.pekerjaan_ayah;
            fflush(stdin);
            cout<<"\nMasukkan Pekerjaan Ibu : ";
            cin>>mahasiswa_object[i].file.pekerjaan_ibu;
            fflush(stdin);
        }
        
}

void tampilkan(){
    for(int i=0; i<1; i++){
        cout<<"===============================================";
        cout<<"\n||Nama Mahasiswa : "<<mahasiswa_object[i].nama;
        fflush(stdin);
        cout<<"\n||Umur Mahasiswa : "<<mahasiswa_object[i].umur;
        fflush(stdin);
        cout<<"\n||Jenis Kelamin :"<<mahasiswa_object[i].jenis_kelamin;
        fflush(stdin);
        cout<<"\n||Tempat Tanggal Lahir : "<<mahasiswa_object[i].ttl;
        fflush(stdin);
        cout<<"\n||Masukkan Alamat Rumah Mahasiswa : "<<mahasiswa_object[i].alamat_rumah;
        fflush(stdin);
        cout<<"\n||No. Telepon Mahasiswa : "<<mahasiswa_object[i].nomor_telepon;
        cout<<"\n===============================================";

        cout<<"\n||Nama Bapak : "<<mahasiswa_object[i].file.nama_ayah;
        fflush(stdin);
        cout<<"\n||Nama Ibu : "<<mahasiswa_object[i].file.nama_ibu;
        fflush(stdin);
        cout<<"\n||No. Telepon Bapak : "<<mahasiswa_object[i].file.no_telepon_bapak;
        fflush(stdin);
        cout<<"\n||No. Telepon Ibu : "<<mahasiswa_object[i].file.nama_ibu;
        fflush(stdin);
        cout<<"\n||Pekerjaan Ayah : "<<mahasiswa_object[i].file.pekerjaan_ayah;
        fflush(stdin);
        cout<<"\n||Pekerjaan Ibu : "<<mahasiswa_object[i].file.pekerjaan_ibu;
        fflush(stdin);
        cout<<"\n===============================================";

    }

}

