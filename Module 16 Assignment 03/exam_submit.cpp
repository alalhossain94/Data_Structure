#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        stack<char> st;

        for (char c : colors) {
            if (!st.empty() && st.top() == c) {
                st.pop(); // Vanish same color
            } else if (!st.empty()) {
                char top = st.top();
                if ((top == 'R' && c == 'B') || (top == 'B' && c == 'R')) {
                    st.pop(); // Vanish red and blue
                    st.push('P'); // Add purple
                } else if ((top == 'R' && c == 'G') || (top == 'G' && c == 'R')) {
                    st.pop(); // Vanish red and green
                    st.push('Y'); // Add yellow
                } else if ((top == 'B' && c == 'G') || (top == 'G' && c == 'B')) {
                    st.pop(); // Vanish blue and green
                    st.push('C'); // Add cyan
                } else {
                    st.push(c); // Add color to the stack
                }
            } else {
                st.push(c); // Add color to the stack
            }
        }

        string finalColors;
        while (!st.empty()) {
            finalColors = st.top() + finalColors; // Append colors in correct order
            st.pop();
        }

        cout << finalColors << endl;
    }

    return 0;
}
