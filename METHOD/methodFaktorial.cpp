/*
MAKE A FACTROAIL WITH RECURSION FUNCTION
1. THOSE ARE 3 FUNCTION'S POINT OF IT
2. INPUT
3. PROCESS
4. VALUE
5. PRIMARY(MAIN FUNCTION)


HOW TO GET THE VALUE OF FACTORIAL IN PROCESS
1. USE THE FIRST FUNCITON TO INPUT A NUMBER THAT WILL BE USE IN INPUT'S FUNCTION
2. SECOND,USE THE PROCESS FUNCITON :
	1. 5 IN
	2. Minus 1,get the value
	3. do it again

*/
#include <iostream>
using namespace std;
int inputan();
int process(int a);
int hasil(int a);
int main(){
	
	inputan();
	
}
int inputan(){
	int input,hasil;
	cout<<"Masukkan angka faktorial:";
	cin>>input;
	hasil=process(input);
	cout<<"Hasilnya adalah "<<hasil;
	return hasil;
}

int process(int a){
	if(a==1){
		return a;
	}else{
		return a*process(a-1);
	}
}

















