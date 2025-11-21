#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int transcount=0;
    int zerocount=0;

    while (s != "1")
    {
        transcount++;

        int len = s.length();

        s.erase(remove(s.begin(), s.end(), '0'), s.end());

        int aflen = s.length();
        zerocount += (len - aflen);



        int num = aflen;
        s = "";
        while (num > 0) {
            s = (num % 2 == 0 ? "0" : "1") + s;
            num /= 2;
        }

    }
    answer.push_back(transcount);
    answer.push_back(zerocount);

    return answer;
}