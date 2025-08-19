#include <string>
#include <vector>
#include<set>
using namespace std;

int solution(vector<int> elements) {
    set<int> sums;

    vector<int> arr2(elements.begin(), elements.end());
    arr2.insert(arr2.end(), elements.begin(), elements.end());
    for (int i = 0; i < elements.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < elements.size(); j++)
        {
            sum += arr2[i + j];
            sums.insert(sum);
        }
    }

    return sums.size();
}