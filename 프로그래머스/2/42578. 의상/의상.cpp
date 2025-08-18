#include <string>
#include <vector>
#include <map>
using namespace std;


using namespace std;

int solution(vector<vector<string>> clothes)
{
	map<string, int> cloth;
	int answer = 1;

	for (int i = 0; i < clothes.size(); i++)
	{
		cloth[clothes[i][1]]++;
	}

	for (const auto& pair : cloth)
	{
		answer *= (pair.second + 1);
	}
	return answer - 1;

}