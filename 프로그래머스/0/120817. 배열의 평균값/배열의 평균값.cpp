#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int sum=0;
    
    for(int i = 0; i < numbers.size() ; i++){
        sum=sum+numbers[i];
    }
    answer=(double)sum/numbers.size();
    return answer;
}