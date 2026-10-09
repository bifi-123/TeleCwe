#include <iostream>

int main()
{
	long long n, m, k;
	std::cin >> n >> m >> k;
	if (k == m or k == n or k % n == 0 and k/n <= m-1 or k % m == 0 and k/m <= n-1) {
		std::cout << "TAK";
	}
	else{
		std::cout << "NIE";
	}
	
	
}