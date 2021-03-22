#include <iostream>
using namespace std;
int main(){
	int k=1;
	char a[5]={'r','a','t','b','q'};
	char temp[k];
		for(int i=0; i<5; i++){
			cout<<a[i];
		}
		cout<<endl<<endl;
		
		
		for(int i=0; i<5; i++){
			for(int j=i+1; j<5; j++){
				if(a[i]>a[j]){
					temp[k]=a[i];
					a[i]=a[j];
					a[j]=temp[k];
				}
			
			}
		}
		
		
		for(int i=0; i<5; i++){
			cout<<a[i]<<" ";
		}
	
}