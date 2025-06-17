#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (true) {
        if (n / a >0) {
            answer = answer + ((n / a)*b);
            n = ((n / a)*b)+(n % a);
        }
        else if (n<a) {
            break;
        }
    }

    return answer;
}