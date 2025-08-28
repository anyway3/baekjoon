#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer(3,0);
    vector<int> result;

    vector<int> check1{ 1, 2, 3, 4, 5 };
    vector<int> check2{ 2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> check3{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == check1[i % check1.size()]) { answer[0]++; }
        if (answers[i] == check2[i % check2.size()]) { answer[1]++; }
        if (answers[i] == check3[i % check3.size()]) { answer[2]++; }
    }

    int maxScore = max({ answer[0], answer[1], answer[2] });

    for (int i = 0; i < 3; i++)
    {
        if (maxScore==answer[i])
        {
            result.push_back(i + 1);
        }
    }
    return result;
}