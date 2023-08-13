#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int i=0; i<T; i++)
    {
        string s;
        getline(cin,s);
        map<string, int> mp;
        string word;
        string mostRepeatedWord;
        int max=0;
        stringstream ss(s);
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>max)
            {
                max=mp[word];
                mostRepeatedWord=word;
            }
        }
        cout<<mostRepeatedWord<<" "<<max<<endl;
    }
    return 0;
}
