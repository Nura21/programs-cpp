#include <iostream>
using namespace std;
class Ulang{
    public :
        int perulangan=0;

        Ulang(int perulangan){
            Ulang::perulangan=perulangan;
        }

        void wail(){
            int i=0;
            while(i<this->perulangan){
                cout<<"Hello world"<<endl;
                i++;
            }
        }
};
int main(){
    Ulang i=Ulang(10);
    i.wail();
}