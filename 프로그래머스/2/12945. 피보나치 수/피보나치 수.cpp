#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n <= 2)
    {
        int a = 1;
        return a;
    }

    int a=1;
    int a1=1;
    int b ;
    for (int i = 3; i <= n; i++)
    {
        b = (a + a1) % 1234567;;
        a = a1;
        a1 = b;

    }
    return b;
}