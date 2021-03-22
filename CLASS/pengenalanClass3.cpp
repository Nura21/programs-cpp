#include <iostream>
using namespace std;
class mahasiswa{
    /*
        nama
        umur
        alamat
    */

    //enkapsulasi
    private :
        string nama;
        int umur;
        string alamat;

    public :
        void pendaftaran();
        int penyimpanan(string,int,string);
        void tampilkan();    

};

int main(){
    mahasiswa mhs;
    mhs.pendaftaran();
    mhs.tampilkan();

    //array
        string array["justin"];
        string ubah
}

void mahasiswa::pendaftaran(){
    string nama;
    int umur;
    string alamat;

    cout<<"Masukkan Nama : ";
    cin>>nama;

    cout<<endl;

    cout<<"Masukkan Umur : ";
    cin>>umur;

    cout<<endl;

    cout<<"Masukkan Alamat : ";
    cin>>alamat;

    penyimpanan(nama,umur,alamat);
}

int mahasiswa::penyimpanan(string nama,int umur,string alamat){
    this->nama=nama;
    this->umur=umur;
    this->alamat=alamat;
    return 1;
}

void mahasiswa::tampilkan(){
    cout<<"Nama : "<<this->nama;
    cout<<"Umur : "<<this->umur;
    cout<<"Alamat : "<<this->alamat;
}