#include <iostream>

int main()
{
    int A, B;
	std::cin >> A >> B;
	if (A > 0 and B > 0) {
		std::cout << "I";
	}
	else if (A < 0 and B > 0) {
		std::cout << "II";
	}
	else if (A < 0 and B < 0) {
		std::cout << "III";
	}
	else if (A > 0 and B < 0) {
		std::cout << "IV";
	}
	else if (A == 0 and B != 0){
		std::cout << "OY";
	}
	else if (A != 0 and B == 0) {
		std::cout << "OX";
	}
	else if (A == 0 and B == 0) {
		std::cout << "0";
	}
}