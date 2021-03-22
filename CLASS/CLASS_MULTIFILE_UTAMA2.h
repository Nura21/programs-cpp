//deklarasi class
#include <string>
class Player{
	public :
		std::string name;
		//constructor
		Player(const char*);
		void display();
		std::string getName();
		void setName(const char*);
};