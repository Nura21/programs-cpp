#include <iostream>
using namespace std;
int main(){
    int pilih;
    cout<<"Masukkan pilihan 1/2 : ";
    cin>>pilih;
        switch(pilih){
            case 1 :
                cout<<"\nHay ini case 1";
            break; 

            case 2 :
                cout<<"Hay ini case 2";
                cout<<endl<<endl;
                cout<<"\t\nMasukkan pilihan ke 2  1/2/3: ";
                cin>>pilih;
                    switch(pilih){
                        case 1:
                            cout<<"\nHay ini case 2.1"; 
                        break;

                        case 2:
                            cout<<"\nHay ini case 2.2";
                        break;

                        case 3:
                            cout<<"\nHay ini case 2.3";
                            cout<<"\t\nMasukkan pilihan ke 3 1/2/3:";
                            cin>>pilih;
                                switch(pilih){
                                    case 1 :
                                        cout<<"Hay ini case 3.1";
                                    break;

                                    case 2 :
                                        cout<<"Hay ini case 3.2";
                                    break;
                                    case 3:
                                        cout<<"\nHay ini case 3.3";
                                        cout<<"\t\nMasukkan pilihan ke 4 1/2:";
                                        cin>>pilih;
                                        switch(pilih){
                                            case 1 :
                                            cout<<"Hay ini case 4.1";
                                            break;

                                            case 2 :
                                            cout<<"Hay ini case 4.2";
                                            break;
                                            default:
                                                cout<<"\nHai anda salah pilih di dalam nested switch 3";
                                        }
                                    break;    
                                    default:
                                    cout<<"\nHai anda salah pilih di dalam nested switch 2";
                                }
                        break;
                        default:
                            cout<<"\nHai anda salah pilih di dalam nested switch";
                    }
            break;

            default:
            cout<<"\nHai anda salah pilih";
        }

}