#include <string>
#include <vector>
#include <stack>
using namespace std;





bool Check(string str)
{
    stack<char>st;

    for (char c : str)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty()) { return false; }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
            {
                return false;
            }
        }

    }
    return st.empty();
}


int solution(string s)
{
    int size = s.size();
    if (size % 2 != 0) { return 0;}

    string ss = s + s;

    int answer = 0;
    for (int i = 0; i < size; i++) {
        if (Check(ss.substr(i, size))) answer++;
    }


    return answer;
}
