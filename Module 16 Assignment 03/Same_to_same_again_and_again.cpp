#include<bits/stdc++.h>
using namespace std;
int main()
 {
    stack<int> st;
    queue<int> q;
    int N,M;
    cin>>N>>M;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0; i<M; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!st.empty() && !q.empty())
    {
        int top = st.top();
        st.pop();
        int front= q.front();
        q.pop();
        if(top != front)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(!st.empty() || !q.empty())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0; 
}
