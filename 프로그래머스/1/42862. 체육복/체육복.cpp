#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    sort(lost.begin(), lost.end(), greater<int>());
    sort(reserve.begin(), reserve.end(), greater<int>());


    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size();j++)
        {
            if (lost[i] == reserve[j])
            {
                lost[i] = -1;
                reserve[j] = -1;
                answer++;

                break;
            }
        }
    }


    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] - reserve[j] == 1 ||reserve[j]-lost[i]==1)
            {
                reserve[j] = -1;
                answer++;
                break;
            }
        }
    }


    return answer;
}