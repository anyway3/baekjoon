#include <string>

int solution(int number, int limit, int power)
{
    int answer = 0;
    for (int i = 1; i <= number; i++)
    {
        int count = 0;

        for (int j = 1; j * j<= i; j++)
        {
            if (i % j * j==0)
            {
                if (i == j * j)
                {
                    count += 1;
                }
                else
                {
                    count += 2;
                }

            }
        }

        if (count > limit)
        {
            answer = answer + power;
        }
        else
        {
            answer = answer + count;
        }

    }
    return answer;
}

