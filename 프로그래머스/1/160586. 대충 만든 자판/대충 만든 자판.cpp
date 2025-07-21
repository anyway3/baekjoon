#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer(targets.size(),0);
    unordered_map<char, int> keys;
    for (const string& s : keymap)
    {
        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            int ps = i + 1;
            if (keys.find(a) == keys.end() || ps <keys[a])
            {
                keys[a] = ps;
            }
        }
    }

    int a = 0;
    for (const string s : targets)
    {
        bool can = true;
        int b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            if (keys.find(a) != keys.end())
            {

                b = b + keys[a];
            }
            else
            {
                can = false;
                break;
            }
        }
        answer[a] = can ? b : -1;
        a++;
    }

    return answer;
}