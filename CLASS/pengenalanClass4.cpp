#include <iostream>
#include <string>
using namespace std;

//data member
class ClassTypes{
	public :
		string dataStr;
		double dataDouble;
		double m_dataDouble;
		
		ClassTypes(const char* dataStr,double dataDouble){
			//menggunakan namespace dari class
			ClassTypes:dataStr=dataStr;
			
			//menggunakan this
			this->dataDouble=dataDouble;
			this->dataStr=dataStr;
			
			//menggunakan penamaan
			m_dataDouble=dataDouble;
			
			
		}
};
//member function
namespace otong{
	class Player{
		public : 
		string name;
		double power;
		int sehat;
		
		Player(const char* name,double power){
			//Player::setName(name);
			this->setName(name);
			this->setPower(power);
			
		}
		
		void setName(const char* name){
			this->name=name;//disini data name yg punya class memiliki data name
							//dari data name yg ada dimiliki parameter construct
							//lalu si data name yg ada dimiliki construct melempar data
							//ke si setName di setName,si parameternya memiliki data name dari construct
							//data name yang dimiliki class sekarang = data name yang dimiliki oleh
							//parameter si setName
							
		}
		
		void setPower(double power){
			this->power=power;
		}
		
		void setHealth(int);
		
		
	};

}

int main(){

	ClassTypes* object1=new ClassTypes("object 1",0.05);
	cout<<object1->dataDouble<<endl;
	cout<<object1->dataStr<<endl;
	cout<<object1->m_dataDouble<<endl;

	otong::Player* player1=new otong::Player("ucup",100);
	cout<<player1->name<<endl;//jadi yg di cout tetep data name yg punya class
	cout<<player1->power<<endl;
	player1->setHealth(10);
	cout<<player1->sehat<<endl;
	return 0;

}

void otong::Player::setHealth(int x){
	
	this->sehat=x;
	
}