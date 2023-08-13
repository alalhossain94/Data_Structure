#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int j=0; j<N; j++)
        {
            cin>>A[j];
        }
        sort(A.begin(), A.end(), greater<int>());
        A.erase(unique(A.begin(), A.end()), A.end());
        for(auto it=A.begin(); it!=A.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    } 
    return 0;
}