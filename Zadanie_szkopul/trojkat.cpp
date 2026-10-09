

#include <iostream>

int main()
{
	int a, b, c;
	int naj;
	std::cin >> a >> b >> c;
	if (a >= b and a >= c){
		naj = a;
	}
	else if (b >= a and b >= c) {
		naj = b;
	}
	else {
		naj = c;
	}
	if (naj == a) {
		if (b + c > a) {
			std::cout << "TAK";
		}
		else {
			std::cout << "NIE";
		}
	}
	else if (naj == b) {
		if (a + c > b) {
			std::cout << "TAK";
		}
		else {
			std::cout << "NIE";
		}
	}
	else if (naj == c) {
		if (a + b > c) {
			std::cout << "TAK";
		}
		else {
			std::cout << "NIE";
		}
	
	}

}


