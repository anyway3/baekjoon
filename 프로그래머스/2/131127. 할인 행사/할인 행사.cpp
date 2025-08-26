#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    if (discount.size() < 10) { return 0; }
    
    int answer = 0;

    unordered_map<string, int>sales;
    unordered_map<string, int>wants;

    for (int i = 0; i < want.size(); i++)
    {
        wants[want[i]]= number[i];
    }


    for (int i = 0; i < 10; i++) {
        sales[discount[i]]++;
    }
    if (sales == wants) answer++;


    for (int j = 10; j < discount.size(); j++)
    {
        sales[discount[j - 10]]--;

        if (sales[discount[j - 10]] == 0) {
            sales.erase(discount[j - 10]);
        }

        sales[discount[j]]++;

        if (wants == sales)
        {
            answer ++;
        }

    }
    return answer;
}