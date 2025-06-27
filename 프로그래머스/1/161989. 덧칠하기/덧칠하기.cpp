#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int count = 0;
    for (int i = 0; i < section.size(); i++) 
    {
        if (section[i] > count) 
        {
            answer++;
            count = section[i] + m - 1;
        }
    }

    return answer;
}