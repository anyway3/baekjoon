#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    multimap<std::string, string> mmap;

    map<string, int> idget;

    map<string, int> mail;

    //유니크 처리
    sort(report.begin(), report.end());
    auto last = unique(report.begin(), report.end());
    report.erase(last, report.end());

    for (string id : id_list)
    {
        idget[id] = 0;
        mail[id] = 0;
    }



  

    for (string line :report)
    {
        istringstream  iss(line);
        string key;
        string value;

        if (iss >> key >> value)
        {
            mmap.insert({ key, value });
        }
        else {

        }

    }
    for (const auto& pair : mmap) {
        string reported_user = pair.second;
        idget[reported_user]++;
    }
    for (const auto& pair : mmap)
    {
        string reportuser = pair.first;
        string reported = pair.second;

        if (idget[reported] >= k) {
            mail[reportuser]++;
        }
    }

    for (string id : id_list) {
        answer.push_back(mail[id]);
    }
    return answer;
}