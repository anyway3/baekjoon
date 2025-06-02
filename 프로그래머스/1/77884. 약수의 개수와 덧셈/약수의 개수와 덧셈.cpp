#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int a= left ; a<=right; a++){
        int count =0;
        for(int i=1; i<=a; i++){
            if(a%i==0){
              count=count+1;  
            }
        }
        if(count%2==0){
            answer=answer+a;
        }
        else {
            answer=answer-a;
        }
    }
    return answer;
}