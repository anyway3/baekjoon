#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> numWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    vector<string> indexes = { "0","1","2","3","4","5","6","7","8","9" };
    int answer = 0;

    for (string num : numWords) {



        while (true) {
            if (s.find(num) != string::npos) {
                s.replace(s.find(num), num.length(), indexes[answer]);
            }
            if( s.find(num) == string::npos) {
                break;
			}
        };
    
		answer++;
    }
    answer = stoi(s);
    return answer;
}