#include <iostream>
using namespace std;
class Hero
{
public:
	int darah, power, pertahanan, skill;
	int menyerang(int a)
	{
		int hasil;
		a = 1;
		hasil = a;
		return hasil;
	}
};
int main()
{
	Hero Sparkman, Burstinatrix;

	Sparkman.darah = 100;
	Sparkman.power = 16;
	Sparkman.pertahanan = 14;
	Sparkman.skill = 1;

	Burstinatrix.darah = 100;
	Burstinatrix.power = 12;
	Burstinatrix.pertahanan = 10;
	Burstinatrix.skill = 1;

	cout << "Darah  : " << Sparkman.darah << endl;
	cout << "Tenaga :" << Sparkman.power << endl;
	cout << "Pertahan :" << Sparkman.pertahanan << endl;
	cout << "Skill :" << Sparkman.skill << endl
		 << endl;

	Burstinatrix.darah -= Sparkman.menyerang(Sparkman.darah);
	cout << "Darah  : " << Burstinatrix.darah << endl;
	cout << "Tenaga :" << Burstinatrix.power << endl;
	cout << "Pertahan :" << Burstinatrix.pertahanan << endl;
	cout << "Skill :" << Burstinatrix.skill << endl;
}
