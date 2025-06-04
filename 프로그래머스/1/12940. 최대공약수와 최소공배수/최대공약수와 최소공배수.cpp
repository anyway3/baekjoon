#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    for (int i = n; i > 0; i--) {
        if (n % i == 0 && m % i == 0) {
			answer.push_back(i);
            break;
        }
    }
    int val1 = n;
    int val2 = m;
    while (true) {
        if (val1 == val2) {
            answer.push_back(val1);
			break;
        }
		(val1 > val2) ? val2 = val2 +m: val1 = val1 +n;
    }
    return answer;
}