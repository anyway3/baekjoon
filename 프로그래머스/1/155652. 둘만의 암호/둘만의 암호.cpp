#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    bool skar[26]{ false };


    for (char cc : skip)
    {
        skar[cc - 'a'] = true;
    }

    for (char c : s)
    {
        int a=0;
        char b = c;
        while (a < index)
        {
            b = (b == 'z') ? 'a' : b + 1;
            if (!skar[b - 'a'])
            {
                a++;
            }
        }
        answer += b;

    }

    return answer;
}