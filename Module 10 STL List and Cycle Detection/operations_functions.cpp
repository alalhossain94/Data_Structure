#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={20, 30, 40, 10, 50, 10, 10};
    // myList.remove(10);
    // sort(myList.begin(),myList.end); //age avabe kortam but akn error dibe
    // myList.sort(); // chot theke boro
    // myList.sort(greater<int>()); // boro theke choto
    // myList.unique(); //sorted thakle korte pare noile age sort kore nite hobe
    myList.reverse();
    for(int val:myList)
    {
        cout<<val<<endl;
    }

    return 0;
}