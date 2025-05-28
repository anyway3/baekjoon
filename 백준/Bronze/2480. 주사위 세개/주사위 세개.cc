#include <iostream>
#include <algorithm>
int main(){
	int h;
	int m;
	int t;
	std::cin >> h >> m >> t;

	if (h == m&& m== t) {
		std::cout << 10000 + m * 1000;
	}
	else if (m == t || t == h) {
		
		std::cout << 1000 + t * 100;
	}
	else if (h == m) {
		std::cout << 1000 + h * 100;
	}
	else {
		std::cout << std::max({ t,h,m }) * 100;

	}
}