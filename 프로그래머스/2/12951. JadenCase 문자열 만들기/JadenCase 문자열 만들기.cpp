#include <string>
#include <cctype>

using namespace std;



string solution(string s) {
    if (!s.empty() && !isdigit(s[0])) {
        s[0] = toupper(s[0]);
    }

    for (int i = 1; i < s.size(); i++) {
        if (isspace(s[i-1]) && !isspace(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}