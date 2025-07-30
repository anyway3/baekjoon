#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer{};
    
    int y;
    int x;


    for (int i = 0; i < park.size(); i++)
    {
        size_t pos = park[i].find("S");

        if (pos != string::npos)
        {
            y = i;
            x = static_cast<int>(pos);
            break;
        }
    }

    for (int i = 0; i < routes.size(); i++)
    {
        char direction = routes[i][0];
        routes[i].erase(routes[i].begin(), routes[i].begin() + 2);
        int value = stoi(routes[i]);
        int newX = x;
        int newY = y;
        bool blocked = false;

        if (direction == 'E') {
            newX += value;
        }
        else if (direction == 'W') {
            newX -= value;
        }
        else if (direction == 'S') {
            newY += value;
        }
        else if (direction == 'N') {
            newY -= value;
        }



        if (newX < 0 || newX >= park[0].size() || newY < 0 || newY >= park.size()) {
            continue;
        }

        if (direction == 'E' || direction == 'W')
        {
            int EWDir = (direction == 'E') ? 1 : -1;
            for (int i = 1; i <= value; i++)
            {
                if (park[y][x+EWDir*i] == 'X')
                {
                    blocked = true;
                    break;
                }
            }
        }
        else
        {
            int EWDir = (direction == 'S') ? 1 : -1;
            for (int i = 1; i <= value; i++)
            {
                if (park[y+EWDir*i][x] == 'X')
                {
                    blocked = true;
                    break;
                }
            }
        }
        if (!blocked) {
            x = newX;
            y = newY;
        }
    }



    answer.push_back(y);
    answer.push_back(x);

    return answer;
}