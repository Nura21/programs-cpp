#include <iostream>
#include <string>
using namespace std;
class DenganConstructor{
	public :
		string data;
		
		DenganConstructor(const char* data){
			DenganConstructor::data=data;
		}
		
		void show(){
			cout<<"Ini"<<DenganConstructor::data<<endl;
		}
	
	
};

class  TanpaConstructor{
	public :
		string data;
		
		void show(){
			cout<<"Ini"<<TanpaConstructor::data<<endl;
		}
		
	
};

int main(){
	//1. cara membuat object dengan constructor
	TanpaConstructor object1;
	object1.data="object1";
	object1.show();
	
	
	
	//2 cara membuat object dengan constructor
	DenganConstructor object2=DenganConstructor("object2");
	object2.show();
	
	
	//3 cara lain membuat object dengan constructor
	DenganConstructor object3("object3");
	object3.show();
	
	
	//4. cara lain membuat object pada heap memory
	DenganConstructor* object4=new DenganConstructor("object4");
	(*object4).show(); //cara dereference
	 object4->show();   //arrow operator,mapping function
	 cout<<object4->data<<endl;
	
	string data=object4->data;
	cout<<data<<endl;
	
	//5. cara lain membuat object dengan constructor 
	DenganConstructor* object5;
	object5=new DenganConstructor("object5");
	object5->show();
	
	
	
		return 0;
}