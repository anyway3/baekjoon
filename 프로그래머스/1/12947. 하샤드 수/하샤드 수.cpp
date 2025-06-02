#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int>num;
    int val=0;
    int xx =x;
    while(xx>0){
        num.push_back(xx%10);
        xx=xx/10;
    }
    for(int i=0; i<num.size();i++){
        val=val+num[i];
    }
    if(x%val==0){
    return answer;
    }
    else{
        answer=false;
        return answer;

    }
}