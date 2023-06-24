#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>myList(n);
    // list<int>myList2={1,2,3,4,5}; // avabe intialize kora jai
    // int a[5]={10,20,30,40,50};
    // vector<int> v={100,200,300};
    // list<int>myList(10,5); // Size diye kora jai avabe
    // list<int>myList(myList2); //  onno list copy koreu kora jai
    // list<int>myList(a,a+5); // array diyeu kora jai shurur r shesher pointer diye
    // list<int>myList(v.begin(), v.end()); // vector diyeu kora jai
    // for(auto it=myList.begin(); it !=myList.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    // shortcut ----->
    for(int val: myList)
    {
        cout<<val<<endl;
    }
    return 0;
}