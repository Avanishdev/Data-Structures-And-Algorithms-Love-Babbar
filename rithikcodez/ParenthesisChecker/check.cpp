#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "(){[]()}";
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            // open
            st.push(s[i]);
        }
        else
        {
            if(st.empty()){
                cout << "Not valid" << endl;
                return 0;
            }
            else{
                char c=st.top();
                if((s[i]==')'&&c=='(')
                    ||(s[i]=='}'&&c=='{')
                    ||(s[i]==']'&&c=='[')){
                    st.pop();
                }
            }
        }
    }
    if (!st.empty())
    {
        cout << "Not valid" << endl;
        return 0;
    }
    return 1;
}