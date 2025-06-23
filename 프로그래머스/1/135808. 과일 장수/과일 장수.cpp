#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end(), greater<int>());
    int box = (score.size() / m)*m;
    int counter=0;
    int answer = score[0];
    for (int i = 1; i <=box; i++) {

        if (answer > score[i-1]) {
            answer = score[i-1];
        }
        if (i % m == 0) {
            counter = counter + (answer * m);
        }
    }

    return counter;
}