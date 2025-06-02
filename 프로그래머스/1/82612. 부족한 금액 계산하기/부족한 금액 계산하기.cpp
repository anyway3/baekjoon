using namespace std;
#include <cmath>

long long solution(int price, int money, int count)
{
     int n =1;
    long long money1=money;
while(count>=n){
    money1 = money1 - (price*n);
    n++;
    
}
    if(money1<0){return abs(money1);}
    else{
        money1= 0 ;
        return money1;
    }
}
/*
구현 해야 하는것
1 놀이기구 다회차
2 탈때마다 이용료 n번만큼 증가
3 탈때마다 자금 -n*이용료
4 총 탈수 있는 횟수

*/