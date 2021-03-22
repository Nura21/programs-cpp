#include <iostream>
using namespace std;
struct orang{
	
	double umur;
	
};
orang Manusia[2][2][3];
int main(){
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				cout<<"Umur orang indeks ke-"<<i<<j<<k<<" :";
				cin>>Manusia[i][j][k].umur;
				cout<<endl;
			}
		}
	}
	
	
		for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				cout<<"Umur orang indeks ke-"<<i<<j<<k<<" :"<<Manusia[i][j][k].umur<<endl;
			}
		}
	}
	
	
	
}