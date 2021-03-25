#include <iostream>
using namespace std;
int main(){
    int bil;
    cout<<"Menampilkan deret bilangan prima 1-25";
    cout<<endl;

        for(int i=1; i<=25; i++){
            bil=0;
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    bil+=1;
                }
            }
            if(bil==2){
                cout<<i<<" adalah bilangan prima";
                cout<<endl;
            }
        }
}

/*
    Referensi : https://kelasprogrammer.com/program-c-menentukan-bilangan-prima/
    Penjelasan program
    Jadi disini i sebagai bilangan berapa saja yang akan ditampilkan
        Lalu ada inisialisasi bil=0

        lalu ada j sebagai angka berapa saja yang akan dibagi dengan catatan,angka yang dibagi harus lebih kecil dari si pembagi
        jadi semisal i=4 ,maka angka yang dibagi adalah 1234

        Jika 4 dibagi 1 sisa 0
            maka bil+=1
        jika 4 dibagi 2 sisa 0
            maka bil+=1
        jika 4 dibagi 3 sisa 0
            nyatanya 4 dibagi 3 tidak bersisa 0
        Jika 4 dibagi 4 sisa 0
            maka bil+=1
        
        Sehingga bil sekarang bernilai 3

        Kemudian di cek,jika bil ==2 maka angka pembagi -> 4 adalah bilangan prima
        
        Mengapa bil==2 tidak bil==3 atau bil==1
        Jika kita throwback ke belakang,
            Sebenarnya angka bilangan prima itu ada 2 angka yang dapat dibagi,yang pertama bilangan itu sendiri dan bilangan 1
            Jadi angka bilangan prima dapat dibagi dengan bilangan itu sendiri dan bilangan 1
            Makanya kenapa bil==2
        
    
    Jika disini i==2 
        Maka mudah saja
        j<=i 
        Yang berarti angka yang akan dibagi adalah angka 1 dan 2 ,yang mana nanti akan bersisa 0
        Sehingga dengan mudahnya bil akan di dapat berupa 2,dan kemudian bil akan dicocokan jika cocok = 2 maka akan ditampilkan sebagai bilangan prima

    
    Jika disini i==5
        Maka mudah saja
        j<=i
        maka angka 12345 akan menjadi angka yang dapat dibagi oleh 5
        Didapat angka 1 dan 5 saja yang mendapatkan sisa bernilai 0,angka 234 akan bersisa bukan 0,untuk 5 dibagi 2 akan bersisa 1
        untuk 5 dibagi 3 akan bersisa 2,untuk 5 dibagi 4 akan bersisa 1
*/