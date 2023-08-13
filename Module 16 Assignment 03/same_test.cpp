#include<bits/stdc++.h>
using namespace std;
int main()
 {
    stack<int> stack_A;
    queue<int> queue_B;
    int N,M;
    cin>>N>>M;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        stack_A.push(x);
    }
    for(int i=0; i<M; i++)
    {
        int x;
        cin>>x;
        queue_B.push(x);
    }

    while (!stack_A.empty() && !queue_B.empty()) {
        int top_A = stack_A.top();
        stack_A.pop();

        int front_B = queue_B.front();
        queue_B.pop();

        if (top_A != front_B) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (!stack_A.empty() || !queue_B.empty()) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}
