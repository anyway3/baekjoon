#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
	int n = t.size();
	int m = p.size();
	int answer=0;
	for (int i = 0; i < n-(m-1);i++) {
		long long nn = stoll(t.substr(i, m));
		long long mm = stoll(p);
		if(nn<=mm){
			answer++;
		}
	}
    return answer;
}