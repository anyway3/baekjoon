#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n);
    int c;
    for(int i = 0; i<n; i++){
        c=c+x;
        answer[i]=c;

    }
    
    return answer;
}