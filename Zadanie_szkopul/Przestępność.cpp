#include <iostream>
//#include <pch.h>

int main() {
	int r;
	//std::cout << "Podaj rok: \n";
	std::cin >> r;

	if (r % 4 == 0 && r % 100 != 0 || r % 400 == 0) {
		std::cout << "TAK\n";
	}
	else {
		std::cout << "NIE\n";
	}
	
}
	
	

	
	
