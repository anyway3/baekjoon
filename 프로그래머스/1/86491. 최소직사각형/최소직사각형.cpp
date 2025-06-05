#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<vector<int>> sizes) {
    int answer = 0;
	int x = 0;
	int y = 0;
    for (int i = 0; i < sizes.size(); i++) {
        sort(sizes[i].begin(), sizes[i].end());
    }

    for (int i = 0; i < sizes.size();i++) {
        for (int ii = 0; ii < sizes[i].size(); ii++) {
            if (ii == 0 && x < sizes[i][ii]) {
				x = sizes[i][ii];

            }
            if (ii == 1 && y < sizes[i][ii]) {
                y = sizes[i][ii];
            }
        }
    }
	answer = x * y;
        return answer;
}