#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int re;
    int na;
    while (n >= a)
    {
        re = (n / a) * b;
        na = n % a;
        n = re + na;

        answer = answer + re;
    }
    cout << answer;
    return answer;
}
