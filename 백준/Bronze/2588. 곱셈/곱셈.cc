#include <iostream>
#include <string>

int main(){
	int a;
	int b;

	std::cin >> a >> b;

	int c_1=b%10;
	int c_2=(b%100)-c_1;
	int c_3=b-(b%100);
	//b의 각 자리수의 값을 구하기 위해서 나머지 연산을 사용한다.


	int cf_1 = c_1 * a;
	int cf_2 = (c_2 * a);
	int cf_3 = c_3 * a;
	//b의 각 자리수와 a를 곱한다.


	int cm_1 = cf_2 / 10;
	int cm_2 = cf_3 / 100;

	std::cout << cf_1 << std::endl;
	std::cout << cm_1 << std::endl;
	std::cout << cm_2 << std::endl;
	std::cout << cf_1 + cf_2 + cf_3 << std::endl;
}