#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    string aa;
    for (int ii = 0; ii < a; ii++) {
        aa = aa + '*';
    }
    for (int i = 0; i < b; i++) {
		cout << aa << endl;
    }
    return 0;
}