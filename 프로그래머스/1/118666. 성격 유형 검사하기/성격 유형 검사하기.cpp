#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    vector<std::string> types = { "RT","CF","JM","AN" };
    vector<int> scoremap{ -3,-2,-1,0,1,2,3 };
    unordered_map<char, int> score;

    for(int i =0;i<survey.size();i++)
    {
        if (choices[i] < 4) {
            score[survey[i][0]] += 4 - choices[i];
        }
        else if (choices[i] > 4) {
            score[survey[i][1]] += choices[i] - 4;
        }
    }

    for (const string& type : types) {
        if (score[type[0]] >= score[type[1]]) {
            answer += type[0];
        }
        else {
            answer += type[1];
        }
    
    }
    cout << answer << endl;

    return answer;


}