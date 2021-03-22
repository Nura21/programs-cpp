#ifndef __MESIN
#define __MESIN //gunanya ifndef atau end if define,biar kalo include "namafileini" banyak/berkali kali ga akan error
#include <iostream>
class MESIN{
	//pergunakan enkapsulasi(pengamanan data)
	//enkapsulasi adalah dimana suatu atribut ataupun function yang mana
	//itu menurut kita adalah atribut yg seharusnya diamankan
	//sehingga untuk pengaksesan atribut tersebut diperlukan function
	//cara ini dinamakan setter and getter
	
	public :
		int pilih;
		int angka1,angka2;
		void pemilihan();
		int pemilihan2(int);

	private :
		void pertambahan(int,int);
		void pengurangan(int,int);
		void perkalian(int,int);
		void pembagian(int,int);
};

#endif