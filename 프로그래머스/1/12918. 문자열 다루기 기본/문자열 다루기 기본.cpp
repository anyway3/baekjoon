#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()==4||s.size()==6){
        
        for(char c: s){
            
            if(!isdigit(c)){
                answer=false;
                break;
                          }
            
                      }
        
                                }
    else{
        answer=false;
    }
    return answer;
}