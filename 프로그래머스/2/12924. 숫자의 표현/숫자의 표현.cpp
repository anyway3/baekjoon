#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int left = 0;
    int right = 0;
    int sum=0;

    while (right<=n)
    {
        if (sum<n)
        {
            right++;
            sum = sum + right;
        }
        else if (sum > n)
        {
            sum = sum - left;
            left++;
        }
        else {
            answer++;
            right++;
            sum = sum + right;
        }


    }
    return answer;
}