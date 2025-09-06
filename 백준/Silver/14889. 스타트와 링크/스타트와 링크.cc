#include <iostream>
#include <string>
#include <vector>

using namespace std;

//점수 저장용 전역 변수
int minability;
vector<vector<int>> ability;
vector<bool> isStartTeam;
int N;

void solution(int index, int startCount)
{

    if (startCount > N / 2) return;

    if (index == N)  // index가 끝까지 왔으면
    {
        if (startCount == N / 2)
        {
            int startSum = 0;
            int linkSum = 0;

            for (int i = 0; i < N; i++)
            {
                for (int j = i + 1; j < N; j++)
                {
                    if (isStartTeam[i] && isStartTeam[j])
                        startSum += ability[i][j] + ability[j][i];
                    else if (!isStartTeam[i] && !isStartTeam[j])
                        linkSum += ability[i][j] + ability[j][i];
                }
            }

            int value = abs(startSum - linkSum);
            if (minability > value) minability = value;
        }
        return;
    }
    
    isStartTeam[index] = true;
    solution(index + 1, startCount + 1);

    isStartTeam[index] = false;
    solution(index + 1, startCount);
}







int main() {


    cin >> N;

    ability.assign(N, vector<int>(N, 0));
    isStartTeam.assign(N, false);
    minability = 1e9;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) {
            cin >> ability[i][j];
        }
    }

    solution(0,0);
    cout << minability << "\n";

}