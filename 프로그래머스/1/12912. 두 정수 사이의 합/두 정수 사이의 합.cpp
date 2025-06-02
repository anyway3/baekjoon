#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a==b){
        answer=a;
        return answer;
    }
    else if(a<b){
    for (int i =a; i<=b;i++){
        answer=answer+i;
    }
    }
    
    else {
    for (int i =b; i<=a;i++){
        answer=answer+i;
    }
    }
    
    
    return answer;
}