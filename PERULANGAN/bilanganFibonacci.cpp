#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c;
    int i=1;
        while(i<20){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            i++;
        }
}