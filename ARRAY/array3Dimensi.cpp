#include <iostream>
using namespace std;
int main(){

	int array[2][3][4]={   {  {1,2,2,2},{1,2,2,2},{1,1,1,1}  },  {  {1,1,1,1},{1,1,1,1},{1,1,1,1} }  };
 
	
	
		for(int i=0; i<2; i++){
			
			for(int j=0; j<3; j++){
				cout<<"[";//letak kurung untuk prinsip menaro kurung krawal sama seperti 2 dimensi
				for(int k=0; k<4; k++){
					
					cout<<array[i][j][k];
				}
				cout<<"]";//letak kurung untuk prinsip menaro kurung krawal sama seperti 2 dimensi
				cout<<endl;
			}
		}







		


}