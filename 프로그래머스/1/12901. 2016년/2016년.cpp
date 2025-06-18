#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string days[7] = { "FRI","SAT","SUN","MON","TUE","WED","THU"};
    int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    int day = b-1;
    for (int i = 0; i < a-1; i++) {
        day = day + month[i];
    }
    day = (day % 7);
    string answer;
    answer= days[day];

    return answer;
}