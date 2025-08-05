#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string s) {

    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
        });

    bool check = true;
    for(char& c :s)
    {
        if (c == ' ')
        {
            check = true;
        }
        else if(check)
        {
            c = toupper(c);
            check = false;
        }
    }
    return s;
}