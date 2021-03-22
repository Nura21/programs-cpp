#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string data[8]={"suka","aku","sama","kamu","dulu","sampai","dari","sekarang"};
	string temp;
	//tampilkan
		for(int i=0; i<8; i++){
			cout<<data[i];
		}
		cout<<endl<<endl;
		
		
			for(int i=0; i<8; i++){
				for(int j=i+1; j<8; j++){
					if(data[i]>data[j]){
						temp=data[i];
						data[i]=data[j];
						data[j]=temp;
					}
				}
			}
			
			for(int i=0; i<8; i++){
				cout<<data[i]<<" ";
			}
			
			temp="kutaro";
			cout<<temp[0];

}
