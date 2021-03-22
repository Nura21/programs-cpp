//prototipe
#include <iostream>
#include <string>
#include "CLASS_MULTIFILE_UTAMA2.h"
using namespace std;


int main(){
	Player* playerObject=new Player("Marni");
	playerObject->display();
	
	//beda data
	cout<<"get name : "<<playerObject->getName()<<endl;//hanya berlaku untuk fungsi tipe non void
	
	
	//beda data
	cout<<"rubah nama : "<<endl;
	playerObject->setName("Isabella");
	playerObject->display();
	
}


