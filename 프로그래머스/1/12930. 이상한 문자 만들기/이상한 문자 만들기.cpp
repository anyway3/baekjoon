#include <string>
#include <vector>
#include <cctype>
using namespace std;
string solution(string s) {
    int aa = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            aa = 0;
            continue;
        }

        if (aa % 2 == 0) {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }
        aa = aa + 1;

    }
    return s;
}