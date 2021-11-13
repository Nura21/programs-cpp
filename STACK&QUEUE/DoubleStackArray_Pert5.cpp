//header
#include "stdio.h"
#include <iostream>
#define MAX 10
#define true 1
#define false 0
using namespace std;

//inisialisasi
char stack[MAX];
int top1, top2;
int dataMax=5;
int dataPush1=1;
int dataPush2=1;
int dataPop1=1;
int dataPop2=1;

//prototipe
void init(void);
void push(char data, int nomorstack);
char pop(int nomorstack);
void clear(int nomorstack);
int full(void);
int empty(int nomorstack);
void baca();

//main
int main(){
    char data;
    int pilih, nomorstack;
    init();
    
    do{

        printf("Contoh program double stack");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Clear");
        printf("\n4. Baca");
        printf("\n5. Selesai…");
        printf("\nPilihan anda  : \n");

        scanf("%i",&pilih);
        if(dataPush1 < dataMax && dataPop1 != dataMax){
            pilih=1;
            cout<<"\nData Push1 ke-"<<dataPush1<<"\n";
            cout<<"\nData Push2 ke-"<<dataPush2<<"\n";
        }else if(pilih == 2 && dataPush2 != dataMax){
            pilih=1;
            cout<<"\nData Push1 ke-"<<dataPush1<<"\n";
            cout<<"\nData Push2 ke-"<<dataPush2<<"\n";
        }else if(pilih == 2 && (dataPush1 > 3 && dataPush2 > 3)){
            pilih=2;
            cout<<"\nData Pop1 ke-"<<dataPop1<<"\n";
            cout<<"\nData Pop2 ke-"<<dataPop2<<"\n";
        }else if(pilih == 1 && (dataPush1 > 3 && dataPush2 > 3)){
            pilih=2;
            cout<<"\nData Pop1 ke-"<<dataPop1<<"\n";
            cout<<"\nData Pop2 ke-"<<dataPop2<<"\n";
        }

        switch(pilih){

            case 1: 
                printf("Push\n");
                printf("Masukkan datanya :\n"); scanf("%s",&data);
                printf("Mau dimasukkan ke stack berapa ? 1 atau 2 ? :\n");
                scanf("%i",&nomorstack);
                if( dataPush1 < dataMax && dataPush2 != dataMax){
                    nomorstack = 1;
                    cout<<"Data Push"<<nomorstack<<" ke-"<<dataPush1<<"\n";
                }else if( dataPush1 > 4 && dataPush2 < dataMax){
                    nomorstack = 2;
                    cout<<"Data Push"<<nomorstack<<" ke-"<<dataPush2<<"\n";
                }

                push(data, nomorstack);
            break;

            case 2: 
                printf("Pop\n");
                printf("Masukkan nomor stack\n");
                scanf("%i",&nomorstack);
                if( dataPop1 < dataMax && dataPop2 != dataMax){
                    nomorstack = 1;
                    cout<<"Data Pop"<<nomorstack<<" ke-"<<dataPop1<<"\n";
                }else if( dataPop1 > 4 && dataPop2 < dataMax){
                    nomorstack = 2;
                    cout<<"Data Pop"<<nomorstack<<" ke-"<<dataPop2<<"\n";
                }
                data=pop(nomorstack);
                printf("\nData yang dikeluarkan adalah %d ", data);
                printf("\n");
            break;

            case 3: 
                printf("Clear\n");
                printf("Nomor Stack yang akan dikosongkan \n");
                scanf("%i",&nomorstack);
            
                clear(nomorstack);
            break;

            case 4: 
                printf("Baca\n");
                baca();
            break;

            case 5: 
                printf("Exit");
            break;
            
            default: 
                printf("Pilihan yang anda masukkan tidak ada");
            break;
        }

    }while(pilih!=5);
    
    getchar();
}

//init
void init(){
    top1=0;
    top2=MAX+1;
}

//PUSH
void push(char data, int nomorstack){
    if(full()!=true){
        switch(nomorstack){

            case 1: 
                top1++;
                stack[top1]=data;
                dataPush1++;
            break;

            case 2: 
                top2--;
                stack[top2]=data;
                dataPush2++;
            break;
            
            default: printf("\nNomor stack salah");
            break;
        }
    }else
        printf("\nStack penuh");
    
    getchar();
    }

//POP
char pop(int nomorstack){
    char data;
        if(empty(nomorstack)!=true){
            switch(nomorstack){

                case 1: 
                    data=stack[top1];
                    top1--;
                    dataPop1++;
                    return data;
                break;

                case 2: 
                    data=stack[top2];
                    top2++;
                    dataPop2++;
                    return data;
                break;
                
                default: printf("\nNomor stack salah");
                    break;
            }
        }
        else printf("\nStack masih kosong");
        
        getchar();
        
        return 0;
}
//cek full
int full(void){
    if(top1+1>=top2){
        return true;
    }
    else return false;
}

//cek empty
int empty(int nomorstack){

    switch(nomorstack){
        case 1: 
            if(top1==0) return true;
            else return false;
        break;

        case 2: 
            if(top2==MAX+1) return true;
            else return false;
        break;
        default: printf("nomor stack salah");
        break;
    }
}

//clearing
void clear(int nomorstack){
    
    switch(nomorstack){
        case 1: top1=0;
        break;

        case 2: top2=MAX+1;
        break;

        default: printf("Nomor stack salah");
        break;
    }
}

//read
void baca(){
    int i;
        printf("Baca isi stack pertama \n");
        
        for(i=1; i<=top1; i++){
            printf("  %c ",stack[i]);
            printf("\n");
        }
            printf("Isi stack kedua\n");
        for(i=MAX; i>=top2; i--){
            printf("  %c ",stack[i]);
            printf("\n");
        }

    getchar();
}