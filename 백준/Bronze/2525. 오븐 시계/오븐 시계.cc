#include <iostream>

int main(){
	int h;
	int m;
	int t;

	std::cin >> h >> m;
	std::cin >> t;
	int tt = t + m;

	if (tt>= 60) {
		h = h + tt / 60;
		m = tt %60;
			if (h >= 24) {
				h = h % 24;
				}
			std::cout << h << " " << m << std::endl;


	}
	else {
		std::cout << h << " " << tt << std::endl;
	}
	

}