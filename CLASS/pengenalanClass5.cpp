//prototipe
#include <iostream>
#include <string>
using namespace std;
class Player{
	public :
		string name;
		//constructor
		Player(const char*);
		void display();
		string getName();
		void setName(const char*);
};

int main(){
	Player* playerObject=new Player("Marni");//untuk construct
	playerObject->display();
	
	//beda data
	cout<<"get name : "<<playerObject->getName()<<endl;//hanya berlaku untuk fungsi tipe non void
	
	
	//beda data
	cout<<"rubah nama : "<<endl;
	playerObject->setName("Isabella");
	playerObject->display();
	
}

Player::Player(const char* name){
	//Player::name=name;   bisa begini
	this->name=name;
}

void Player::display(){
	cout<<"Nama Player : "<<this->name<<endl;
}

string Player::getName(){
	return this->name;
}

void Player::setName(const char* name){
	this->name=name;	
}


