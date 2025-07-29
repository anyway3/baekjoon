#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> score;
    for (int i = 0; i < players.size(); i++)
    {
        score[players[i]] =i ;
    }

    for (string name : callings)
    {
        int sc = score[name];
        if (sc > 0) {
            swap(players[sc], players[sc - 1]);

            score[players[sc]] = sc;
            score[players[sc - 1]] = sc - 1;
        }
    }
    return players;
}