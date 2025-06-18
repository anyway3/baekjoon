#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int>an;
    vector<int>aa;
    for (int i = 0; i < score.size(); i++) {


        int j = 0;
            for(; j < an.size(); j++) {
                if (an[j] < score[i])break;
            }
            an.insert(an.begin() + j, score[i]);



                if (an.size() > k) {
                    an.pop_back();
                }


        aa.push_back(*min_element(an.begin(), an.end()));

    }



    return aa;
}