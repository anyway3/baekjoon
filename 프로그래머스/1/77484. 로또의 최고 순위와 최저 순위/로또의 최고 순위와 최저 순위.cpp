#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int rank[7] = { 6, 6, 5, 4, 3, 2, 1 };
    vector<int> answer;
    
    int Count = 0;
    int ZeroCount = 0;
    for (int i = 0; i < lottos.size(); i++)
    {

        for (int j = 0; j < lottos.size(); j++)
        {
            if (win_nums[i] == lottos[j])
            {
                Count++;
            }
        }

        if (lottos[i] == 0)
        {
            ZeroCount++;
        }

    }
    answer.push_back(rank[Count + ZeroCount]);
    answer.push_back(rank[Count]);
    return answer;
}