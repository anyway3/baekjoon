#include <string>
#include <vector>

using namespace std;
vector<int> solution(string s) {
    vector<int> answer;
    string aa = "";
    for (int i = 0; i < s.size(); i++) {
        auto pos = aa.find(s[i]);
        if (pos !=string::npos) {
            int index = static_cast<int>(pos);
            answer.push_back(i - index);
            aa.replace(pos, 1," ");
            aa = aa + s[i];
        }
        else {
            answer.push_back(-1);
            aa = aa + s[i];



        }
    }
    return answer;
}