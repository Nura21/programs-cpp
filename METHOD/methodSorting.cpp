#include <iostream>
using namespace std;
int main(){
    int array[5]={7,9,10,5,3};
    int data;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            /*if(array[i]<array[j]){
                data=array[i];
                array[i]=array[j];
                array[j]=data;
            }
            */
           if(array[i]>array[j]){
                data=array[i];
                array[i]=array[j];
                array[j]=data;
            }
        }
    }
    cout<<endl<<endl;

    for(int i=0; i<5; i++){
        cout<<array[i];
    }
}