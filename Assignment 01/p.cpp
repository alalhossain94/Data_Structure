#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int size = 7; // Size of the pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i == size - j - 1) {
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
