#include <iostream>
#include <string>

int main(){
	int a;
	std::cin >> a;
	if (a%4==0 && a%100 !=0 || a%400==0 ) {
		std::cout << 1 << std::endl;
	}
	else {
		std::cout << 0 << std::endl;
	}

}