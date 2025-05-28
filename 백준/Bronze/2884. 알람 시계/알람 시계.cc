#include <iostream>

int main(){
	int h;
	int m;
	std::cin >> h >> m;

	int a = m - 45;
	if (a < 0) {
		h = h - 1;
		if (h < 0) {
			h = 23;
		}
		m = 60 + a;
		std::cout << h << " " << m << std::endl;
	}
	else {
				m = a;
				std::cout << h << " " << m << std::endl;
	}
}