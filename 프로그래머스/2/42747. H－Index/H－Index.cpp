#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());

    for (int i = 0; i < citations.size(); i++)
    {
        int cd = i + 1;
        if (citations[i] >= cd)
        {
            answer = cd;
        }
        else
        {
            break;
        }
    }
    return answer;
}