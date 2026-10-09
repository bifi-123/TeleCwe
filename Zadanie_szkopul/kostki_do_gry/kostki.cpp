#include <iostream>

int main()
{
	int k1, j1, k2, j2, k3, j3;
	std::cin >> k1 >> j1 >> k2 >> j2 >> k3 >> j3;
	
	int kt = k1 + k2 + k3;
	int jt = j1 + j2 + j3;
	
	if (kt == jt){
		std::cout << "REMIS";
	}
	else if (kt < jt) {
		std::cout << "JANEK";
	}
	else{
		std::cout << "KASPER";
	}
	
}
