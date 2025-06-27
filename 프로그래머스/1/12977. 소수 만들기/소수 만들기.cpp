#include <vector>
#include <iostream>
using namespace std;



bool Find(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    for(int i =0; i<nums.size()-2;i++)
    {

        for(int j=i+1; j<nums.size()-1; j++)
        {

            for(int k= j+1; k<nums.size();k++)
            {

                int n = nums[i] + nums[j] + nums[k];

                bool vlaue = Find(n);
                if (vlaue == true) {
                    answer++;
                }
            }

        }
    }
    cout <<"만들수 있는 소수 개수" << answer << endl;
    return answer;
}