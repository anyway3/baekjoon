#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> termsday;

    int year = stoi(today.substr(0, 4));
    int month = stoi(today.substr(5, 2));
    int day = stoi(today.substr(8, 2));

    int totalDays = year * 12 * 28 + (month - 1) * 28 + day;


    for (int i = 0; i < terms.size(); i++)
    {
        char last = terms[i].front();
        terms[i].erase(terms[i].begin(), terms[i].begin()+2);
        int plusmonth=stoi(terms[i]);
        termsday[last] = plusmonth;

    }


    for (int i = 0; i < privacies.size(); i++)
    {
        char last = privacies[i].back();
        privacies[i].pop_back();
        privacies[i].pop_back();
        int year2 = stoi(privacies[i].substr(0, 4));
        int month2 = stoi(privacies[i].substr(5, 2));
        int day2 = stoi(privacies[i].substr(8, 2));
        int totalDays2 = year2 * 12 * 28 + (month2 - 1) * 28 + day2 + termsday[last] * 28 - 1;
        if (totalDays2 < totalDays)
        {
            answer.push_back(i+1);
        }


    }

    return answer;
}