#include<bits/stdc++.h>
using namespace std;
string is_string_valid(string S) {
    stack<char> st;

    for (char c : S) 
    {
        if (!st.empty() && (c == 'A' && st.top() == 'B') )
        {
            st.pop();
        } 
        else if (!st.empty() &&(c == 'B' && st.top() == 'A'))
        {
            st.pop();
        }
        else {
            st.push(c);
        }
    }

    if (st.empty()) 
    {
        return "YES";
    } 
    else 
    {
        return "NO";
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        string result = is_string_valid(S);
        cout << result << endl;
    }

    return 0;
}
