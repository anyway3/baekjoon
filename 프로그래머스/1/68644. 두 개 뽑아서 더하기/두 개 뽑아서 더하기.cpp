#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = 1; j < numbers.size(); j++) {
            int add = numbers[0] + numbers[j];
            auto dd = find(answer.begin(), answer.end(), add);
            if (dd== answer.end()) {
                answer.push_back(add);
            }

        }

        int add = numbers.front();
        numbers.erase(numbers.begin());
        numbers.push_back(add);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
