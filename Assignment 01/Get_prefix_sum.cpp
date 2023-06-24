#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
    }
    long long int pre[n];
    pre[0]=v[0];
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        pre[i]=sum;
    }
    for(int i=n-1; i>=0;i--)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}