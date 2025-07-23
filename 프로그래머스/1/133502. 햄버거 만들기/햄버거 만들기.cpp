#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int>temp;
    for (int i = 0; i < ingredient.size(); i++)
    {
        temp.push_back(ingredient[i]);

        int size = temp.size();

        if (
            size >= 4 && temp[size - 4] == 1 && temp[size - 3] == 2
            && temp[size - 2] == 3 && temp[size - 1] == 1
            )
        {
            temp.pop_back();
            temp.pop_back();
            temp.pop_back();
            temp.pop_back();

            answer++;
        }
    }



    return answer;
}