#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long num1=num;
    if(num==1){
        return 0;
    }
    for(int i =1; i<=500;i++){
        (num1 % 2 == 0) ? num1 = num1 / 2 : num1 = num1 * 3 + 1;
        

         if(i==500){
            return -1;
        }
        else if(num1==1){
        return i;
        }
    }
    
}