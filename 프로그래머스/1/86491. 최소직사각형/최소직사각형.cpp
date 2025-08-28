#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int xmax=0;
    int ymax=0;
    for (auto& row : sizes) {
        sort(row.begin(), row.end());
    }
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > xmax)
        {
            xmax = sizes[i][0];
        }
        if (sizes[i][1] > ymax)
        {
            ymax = sizes[i][1];
        }
    }
    answer = xmax * ymax;

    return answer;
}