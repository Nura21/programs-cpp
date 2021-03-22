#include <iostream>
#include <string>
#include "CLASS_MULTIFILE_UTAMA2.h"
Player::Player(const char* name){
	//Player::name=name;   bisa begini
	this->name=name;
}

void Player::display(){
	std::cout<<"Nama Player : "<<this->name<<std::endl;
}

std::string Player::getName(){
	return this->name;
}

void Player::setName(const char* name){
	this->name=name;	
}