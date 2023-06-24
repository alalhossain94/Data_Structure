#include<bits/stdc++.h>
using namespace std;

vector<int> concatenateArrays(vector<int> A,vector<int>& B) 
{
    vector<int> C;

    for (int i : B) 
    {
        C.push_back(i);
    }

    for (int i : A) 
    {
        C.push_back(i);
    }

    return C;
}

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> B[i];
    }

    vector<int> C = concatenateArrays(A, B);

    for (int i : C) 
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
