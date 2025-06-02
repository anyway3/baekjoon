#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    sort(numbers.begin(),numbers.end());
    for(int i =0; i<numbers.size(); i++){
        for(int ii =0; ii<10; ii++){
            if(numbers[i]==ii){
                answer=answer-ii;
                break;
            }

        }
    }
    return answer;
}