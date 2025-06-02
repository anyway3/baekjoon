#include <string>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer =0;
    long long a = sqrtl(n);
    if(n==a*a){
        answer=(a+1)*(a+1);
        return answer;
    }
    else{
        answer=-1;
        return answer;

    }
}