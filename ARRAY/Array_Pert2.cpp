#include <iostream>
using namespace std;
int main(){

    int A[2][3][5];
    //&A[1][2][3] = 1000H;
    
    //Jumlah elemen JAWABAN NO 1
    size_t elemen1 = sizeof(A) / sizeof(int);
    int elemen2 = sizeof(A)/sizeof(int);
    
    //Jumlah byte dalam array JAWABAN NO 2 
    size_t byte = sizeof(A);


    cout<<"\nElemen 1 : "<<elemen1<<" \nElemen2 : "<<elemen2<<" \nByte : "<<byte<<"\n";
}