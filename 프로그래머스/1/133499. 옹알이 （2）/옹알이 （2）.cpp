#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> nop{ "ayaaya", "yeye", "woowoo", "mama" };
    vector<string> yes{ "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling.size(); i++)
    {
        bool check = true;

        // 연속된 단어 있는지 확인
        for (int j = 0; j < nop.size(); j++)
        {
            if (babbling[i].find(nop[j]) != string::npos)
            {
                check = false;
                break;
            }
        }
        if (!check) continue;

        // 허용된 단어 반복 제거
        for (int j = 0; j < yes.size(); j++)
        {
            size_t pos;
            while ((pos = babbling[i].find(yes[j])) != string::npos)
            {
                babbling[i].replace(pos, yes[j].length(), " ");
            }
        }

        // 공백 제거 후 빈 문자열인지 확인
        babbling[i].erase(remove(babbling[i].begin(), babbling[i].end(), ' '), babbling[i].end());
        if (babbling[i].empty()) {
            answer++;
        }
    }

    return answer;
}