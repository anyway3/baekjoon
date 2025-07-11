#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int xarr[10] = {};
    int yarr[10] = {};

    for (char a : X)
    {
        xarr[a - '0']++;
    }
    for (char a : Y)
    {
        yarr[a - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        int a = min(xarr[i], yarr[i]);
        answer += string(a, '0' + i);
    }

    if (answer.empty())
    {
        return "-1";
    }
    sort(answer.begin(), answer.end(), greater<char>());

    if (answer[0] == '0')
    {
        return"0";
    }
    return answer;
}