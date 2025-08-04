#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> values;
    stringstream ss(s);
    int num;
    while (ss >> num)
    {
        values.push_back(num);
    }

    sort(values.begin(), values.end());

    answer = answer + std::to_string(values[0]);
    answer = answer + " ";
    answer = answer + std::to_string(values.back());

    return answer;
}