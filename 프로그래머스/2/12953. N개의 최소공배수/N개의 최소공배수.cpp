#include <string>
#include <vector>

using namespace std;



int gcd(int a, int b) {

    while (b != 0)
    {
        int val = a % b;
        a = b;
        b = val;
    }
    return a;
}


int solution(vector<int> arr) {
    int answer =arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        int getgcd = gcd(answer, arr[i]);

        answer = (answer * arr[i]) / getgcd;
    }
    return answer;
}

