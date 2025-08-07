#include <string>
#include <vector>
#include<cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> value;
    int val = brown + yellow;
    for (int i = 1; i <= sqrt(val); i++)
    {
        if (val % i == 0)
        {
            value.push_back(i);
            value.push_back(val / i);
        }
    }

    for (int i = 0; i < value.size(); i+=2)
    {
        int x = value[i] - 2;
        int y = value[i + 1] - 2;
        if (x * y == yellow)
        {
            answer.push_back(value[i+1]);
            answer.push_back(value[i]);
        }
    }
    return answer;
}