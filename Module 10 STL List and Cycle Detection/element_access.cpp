#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,20,30,40,50,};
    // cout<<myList.front(); // prothom val dibe 
    // cout<<myList.back(); //shesher val dibe
    cout<< *next(myList.begin(),3)<<endl; //dereference kore nite hobe noile error dibe .ora vitor access korte dei na

    return 0;
}