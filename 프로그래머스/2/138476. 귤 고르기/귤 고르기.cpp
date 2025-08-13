#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    vector<int>counts;
    unordered_map<int, int>value;

    for (int c : tangerine)
    {
        value[c]++;
    }
    for (auto pair : value)
    {
        counts.push_back(pair.second);
    }

    sort(counts.begin(), counts.end(),greater<int>());


    for (int c : counts)
    {
        if (k <= 0)break;
        k -= c;
        answer++;
    }

    return answer;
}