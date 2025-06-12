#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer2;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> answer1 = {};
        int aa = 0;
        int a =commands[i][0]-1;
        int b = commands[i][1]-1;
        int c = commands[i][2]-1;
        for (int j = a; j <= b; j++) {
            answer1.push_back(array[j]);
            }
        sort(answer1.begin(), answer1.end());
        answer2.push_back(answer1[c]);
        }

    return answer2;

    }