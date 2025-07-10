#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int b = x;
    int a = 0;
    while (b > 0)
    {
        a = a + b % 10;
        b = b / 10;

    }
    if (x % a == 0)
    {
        answer = true;
    }
    return answer;
}