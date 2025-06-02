#include <string>
#include <vector>

using namespace std;
string a ;
string solution(vector<string> seoul) {
    for(int i =0;i<seoul.size();i++){
        if(seoul[i]=="Kim"){
            a=to_string(i);
        }
    }
    string answer = "김서방은 "+a+"에 있다";
    return answer;
}