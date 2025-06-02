#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size()==1){
        arr[0]=-1;
        return arr;
    }
    else{
        auto min=min_element(arr.begin(),arr.end());
        arr.erase(min);
        return arr;
    }
}