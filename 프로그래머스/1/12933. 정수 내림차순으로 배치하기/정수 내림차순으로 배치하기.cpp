#include <string>
#include <vector>
#include <algorithm>

using namespace std;



long long solution(long long n) {
  long long answer = 0;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    sort(v.begin(), v.end(),greater<int>());
    for(int i =0; i<v.size(); i++){
        answer = answer*10+v[i];
    }
    return answer;
}