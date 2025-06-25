#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> scores(3, 0);
    vector<int> num1 = { 1, 2, 3, 4, 5 };
    vector<int> num2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> num3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == num1[i % num1.size()]) scores[0]++;
        if (answers[i] == num2[i % num2.size()]) scores[1]++;
        if (answers[i] == num3[i % num3.size()]) scores[2]++;
    }

    int maxScore = max({scores[0], scores[1], scores[2]});
    vector<int> result;
    for (int i = 0; i < 3; i++) {
        if (scores[i] == maxScore)
            result.push_back(i + 1);
    }

    return result;
}