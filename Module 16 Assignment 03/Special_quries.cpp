#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    queue<string> q;
    while(Q--)
    {
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
            string nm;
            cin>>nm;
            q.push(nm);
        }
        else if(cmd==1)
        {
            if(!q.empty())
            {
                string front=q.front();
                q.pop();
                cout<<front<<endl;
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}
