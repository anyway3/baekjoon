#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    string val ="";
    int count = 1;
    int answer = 0;

    while (n > 0) {
        val = val + to_string(n % 3);
        n = n / 3;
    }
    for (int i = val.size()-1; 0<= i; i--) {
		answer += (val[i] - '0') * count;
		count *= 3;
    }
    return answer;
}