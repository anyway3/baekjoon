#include <iostream>
#include <iomanip>
int main() {
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << std::setprecision(10) << double(a) / double(b) << std::endl;
}