#include <string>
#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;
string a;
string solution(vector<string> seoul) {
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    int a = static_cast<int>(it - seoul.begin());

    string answer = "김서방은 " + to_string(a) + "에 있다";
    return answer;
}