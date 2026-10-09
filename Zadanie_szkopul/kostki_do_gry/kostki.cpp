#include <iostream>

int main()
{
	int k1, j1, k2, j2, k3, j3;		//zadeklarowanie zmiennych każdego rzutu
	std::cin >> k1 >> j1 >> k2 >> j2 >> k3 >> j3;	//cin - możliwość inputu z klawiatury
	
	int kt = k1 + k2 + k3;	//(opcjonalne) stworzenie zmiennej która sumuje rzuty kostką
	int jt = j1 + j2 + j3;	// -||-
	
	if (kt == jt){
		std::cout << "REMIS";			//jeśli sumy są takie same jest REMIS
	}						
		
	else if (kt < jt) {
		std::cout << "JANEK";			//jeśłi suma Janka jest większa JANEK
	}
		
	else{
		std::cout << "KASPER";			//jeśłi suma Kaspra jest większa KASPER
	}
	
}
