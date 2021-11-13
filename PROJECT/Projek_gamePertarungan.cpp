#include <iostream>
#include <stdlib.h> //BERGUNA UNTUK FUNGSI rand()
using namespace std;
//int healthGlobal1,healthGlobal2;
class Game_Pertarungan{     //abstract class
    //BAYANGAN BAGAIMANA NANTINYA SUATU PROGRAM MENJADI
    public :
        int player(int attack,int armor,int darah){
            return 0;
        }

        int player2(int attack2,int armor2,int darah2){
            return 0;
        }

        int pertarungan(int darah,int darah2){
           /* if(darah>darah2){
                return darah;
            }else{
                return darah2;
            }
            */
            return 0;
        }  
};

class Player:public Game_Pertarungan{
    public://ATRIBUT CLASS
    int weapon,armor,health;
    //int weapon2,armor2,health2;

    //FUNGSI FUNGSI CLASS
        int weaponPlayer(int weapon);
        int armorPlayer(int armor);
        int healthPlayer(int health);
        int fightCondition(int player1[],int player2[]);
        int fightStart(int player1[],int player2[]);

};

int main(){
    //INISIALISASI DEKLARASI CLASS AND OBJECT
    cout<<"\t--------------------------\n";
    cout<<"\t|GAME PERTARUNGAN 2 OBJEK|\n";
    cout<<"\t--------------------------";
    Player Me;
    Player Computer;
    Player Fight;

    //Dekalarasi Array
    int dataPlayerMe[3];
    int dataPlayerComputer[3];
    //INPUT DATA
    for(int i=0; i<3; i++){
        if(i==0){
            dataPlayerMe[i]=Me.weaponPlayer(10);
            dataPlayerComputer[i]=Computer.weaponPlayer(10);
            //tadi weaponComputer 8
        }else if(i==1){
            dataPlayerMe[i]=Me.armorPlayer(50);
            dataPlayerComputer[i]=Computer.armorPlayer(50);
        }else if(i==2){
            dataPlayerMe[i]=Me.healthPlayer(100);
            //tadi healthMe 180
            dataPlayerComputer[i]=Computer.healthPlayer(100);
        }
    }
    cout<<"\n\n\n<----PENGISIAN POWER masing-masing OBJEK SELESAI!---->\n\n";
    //Melempar Data Array
    Fight.fightCondition(dataPlayerMe,dataPlayerComputer);
    
}

//APAPUN YANG MENGGUNAKAN this->variabel,berarti variabel tersebut milik CLASS
//parameter parameter yang ada di dalam fungsi,sebagai nilai untuk variabel CLASS ASLI

int Player::weaponPlayer(int weapon){
    this->weapon=weapon;
    cout<<"\n<--------PENYIAPAN SENJATA LEVEL--------->"<<this->weapon;
    return this->weapon;
}

int Player::armorPlayer(int armor){
    this->armor=armor;
    cout<<"\n<--------PENYIAPAN ARMOR LEVEL--------->"<<this->armor;
    return this->armor;
}

int Player::healthPlayer(int health){
    this->health=health;
    cout<<"\n<--------TINGKAT TENAGA--------->"<<this->health<<"%";
    return this->health;
}

int Player::fightCondition(int player1[],int player2[]){
    //PEMBUKTIAN
    {
    cout<<"\n\t--------------------";
    cout<<"\n\t|PENGENALAN KARAKTER|";
    cout<<"\n\t---------------------\n";
        for(int i =0; i<3; i++){
            cout<<"<--------Data Me Player : "<<player1[i]<<"--------->\n";
        }
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<"<--------Data Computer Player : "<<player2[j]<<"---------->\n";
        }
        cout<<endl;
    }
    cout<<"\n<----------------------------------------------------------------------------------------------------->\n\n";
    cout<<"\n\n\t----------------------";
    cout<<"\n\t|PERTARUNGAN DIMULAI!|";
    cout<<"\n\t----------------------";
    cout<<"\n-------------------------------------------------------------------";
    fightStart(player1,player2);
    return 1;
}

int Player::fightStart(int player1[],int player2[]){
    //cout<<"\nSTART\n!"<<endl;
    
    string wordMePlayer,wordComputerPlayer;
    
    int random=1+(rand()%4);
        if(random<=2){
            cout<<"\nMe Player terserang oleh Computer Player dengan power sebesar "<<player2[0]<<"!!!";
            player1[2] = player1[2]-player2[0];
        }else if(random>2){
            cout<<"\nComputer Player terserang oleh Me Player dengan power sebesar "<<player1[0]<<"!!!";
            player2[2] = player2[2]-player1[0];
            
        }else{
            cout<<endl;
            cout<<"KEDUA ARMOR BERKURANG ! Dikarenakan tekanan dari masing-masing kekuatan!\n";
            player1[1] = player1[1]-1;
            player2[1] = player2[1]-1;
        }

        if(player1[2]>0 || player2[2]>0){
            fightStart(player1,player2);
        }else{
            cout<<"\n-------------------------------------------------------------------";
            cout<<"\nAktifkan kekuatan tersembunyi untuk ME PLAYER ?: ";
            cin>>wordMePlayer;
            cout<<"\nAktifkan kekuatan tersembunyi untuk COMPUTER PLAYER ?: ";
            cin>>wordComputerPlayer;
            if((wordMePlayer=="y" || wordMePlayer=="Y") && (wordComputerPlayer!="y" || wordComputerPlayer!="Y")){
                cout<<"\nME PLAYER MENGERAHKAN SELURUH KEMAMPUANNYA!";
                player1[2]=30;
                if(player1[2]>player2[2]){
                    cout<<"\nME PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player1[2]<<" dan tenaga lawan "<<player2[2];
                    return player1[2];
                }else{
                    cout<<"\nCOMPUTER PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player2[2]<<" dan tenaga lawan "<<player1[2];
                    return player2[2];
                }
            }else if((wordMePlayer!="y" || wordMePlayer!="Y") && (wordComputerPlayer=="y" || wordComputerPlayer=="Y")){
                cout<<"\nCOMPUTER PLAYER MENGERAHKAN SELURUH KEMAMPUANNYA!";
                player2[2]=30;
                if(player1[2]>player2[2]){
                    cout<<"\nME PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player1[2]<<" dan tenaga lawan "<<player2[2];
                    return player1[2];
                }else{
                    cout<<"\nCOMPUTER PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player2[2]<<" dan tenaga lawan "<<player1[2];
                    return player2[2];
                }
            }else{
                if(player1[2]>player2[2]){
                    cout<<"\nME PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player1[2]<<" dan tenaga lawan "<<player2[2];
                    return player1[2];
                }else{
                    cout<<"\nCOMPUTER PLAYER PEMENANGNYA!"<<" Dengan sisa tenaga "<<player2[2]<<" dan tenaga lawan "<<player1[2];
                    return player2[2];
                }
            }
        }
        return 1;
}

/*
REFERENSI : GITHUB 
Part Class
pengenalanClass1-5,COnstructor,Dengan atau Tanpa Constructor
Part WEB
LATIHAN DADU C++
FUNGSI RAND(),SRAND()
*/






    // //PERULANGAN
    // do{
    //     random=rand()%4;
    //         if(random==1){
    //             cout<<"\nPukulan kedua Lawan meleset! Armor berkurang";
    //             player1[1]-=1;
    //             player2[1]-=1;
    //         }else if(random==2){
    //             cout<<"\nDisisi sana sang Pemain Me Player terserang oleh Computer Player!!!";
    //             ////Health player1 dikurangin besar attack player2
    //             player1[2]-=player2[0];
    //             cout<<"\nDarah Me Player : "<<player1[2];
    //             healthGlobal1=player1[2];
    //                 // if(player1[2]<0 && player1[2]> -15){
    //                 //     healthGlobal1=player1[2];
    //                 //     cout<<"\n\n\nPemenangnya adalah Computer Player! Dengan sisa tenaga Me Player "<<healthGlobal1;
    //                 //     break;
    //                 // }
    //         }else if(random==3){
    //             cout<<"\nPukulan kedua Lawan meleset! Armor berkurang";
    //             player1[1]-=1;
    //             player2[1]-=1;
    //         }else if(random==4){
    //             cout<<"\nDisisi sana sang Pemain Computer Player terserang oleh Me Player!!!";
    //             //Health player2 dikurangin besar attack player1
    //             player2[2]-=player1[0];
    //             cout<<"\nDarah Computer Player : "<<player2[2];
    //             healthGlobal2=player2[2];    
    //                 // if(player2[2]<0 && player2[2]> -15){
    //                 //         healthGlobal2=player2[2];
    //                 //         cout<<"\n\n\nPemenangnya adalah Computer Player! Dengan sisa tenaga Me Player "<<healthGlobal2;
    //                 //         break;
    //                 // }
    //         }else{
    //             cout<<random;
    //             cout<<"\n\nTerpental!";
    //         }

    //         if(healthGlobal1<0 || healthGlobal2<0){
    //             random=rand()%4;
    //             if(random>100){
    //                 healthGlobal1+=random+100;
    //                 cout<<"\n\n!KEKUATAN TERPENDAM ME PLAYER BANGKIT!";
    //                 if(healthGlobal2 < healthGlobal1){
    //                     cout<<"\n\nPEMENANGNYA ADALAH ME PLAYER dengan Sisa Tenaga : "<<healthGlobal1<<" dan darah musuh :"<<healthGlobal2;
    //                     break;
    //                 }else if(healthGlobal1 < healthGlobal2){
    //                     cout<<"\n\nPEMENANGNYA ADALAH COMPUTER PLAYER dengan Sisa Tenaga : "<<healthGlobal2<<" dan darah musuh :"<<healthGlobal1;
    //                     break;
    //                 }
    //             }else{
    //                 healthGlobal2+=random;
    //                 cout<<"\n\n!KEKUATAN TERPENDAM COMPUTER PLAYER BANGKIT!";
    //                 if(healthGlobal2 < healthGlobal1){
    //                     cout<<"\n\nPEMENANGNYA ADALAH ME PLAYER dengan Sisa Tenaga : "<<healthGlobal1<<" dan darah musuh :"<<healthGlobal2;
    //                     break;
    //                 }else if(healthGlobal1 < healthGlobal2){
    //                     cout<<"\n\nPEMENANGNYA ADALAH COMPUTER PLAYER dengan Sisa Tenaga : "<<healthGlobal2<<" dan darah musuh :"<<healthGlobal1;
    //                     break;
    //                 }
    //             }
                
    //         }
    // }while(player1[2]>0 || player2[2]>0);