#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char first = s[0];
    int nop = 0;
    int yes = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == first)
        {
            yes++;
        }
        else
        {
            nop++;
        }
        if (nop == yes)
        {
            answer++;

            if (i + 1 < s.size()) {
                first = s[i + 1];
            }
            yes = 0;
            nop = 0;
        }
    }
    if (yes != 0 || nop != 0)
    {
        answer++;
    }

    return answer;
}