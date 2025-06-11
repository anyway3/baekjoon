#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<string> solution(vector<string> strings, int n) {
    int nn = strings.size()-1;
    bool swapped;
    for (int i = 0; i < nn;i++) {
        swapped = false;
        for (int j = 0; j < nn - i; j++) {
            if (strings[j][n] > strings[j + 1][n]) {
                swap(strings[j], strings[j + 1]);
                swapped = true;
            }
            else if (strings[j][n] == strings[j + 1][n]&&strings[j]>strings[j+1]) {
                swap(strings[j], strings[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }

    }
        return strings;
}