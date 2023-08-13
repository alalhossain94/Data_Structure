#include <bits/stdc++.h>

using namespace std;




// int main() {
//     int T;
//     std::cin >> T;

//     for (int t = 0; t < T; ++t) {
//         int N;
//         std::cin >> N;

//         std::vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             std::cin >> A[i];
//         }

//         std::map<int, int> countMap;
//         int maxCount = 0;
//         int mostFrequentNumber = A[0];

//         for (int num : A) {
//             countMap[num]++;
//             if (countMap[num] > maxCount || (countMap[num] == maxCount && num > mostFrequentNumber)) {
//                 maxCount = countMap[num];
//                 mostFrequentNumber = num;
//             }
//         }

//         std::cout << mostFrequentNumber << " " << maxCount << std::endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        map<int,int> mp;
        int mx=0;
        int mostRepeatedNumber=A[0];
        for (int i = 0; i < N; i++) 
        {
            int indexVal=A[i];
            mp[indexVal]++;
            if(mp[indexVal] > mx)
            {
                mx=mp[indexVal];
            }
            else if(mp[indexVal] == mx && indexVal > mostRepeatedNumber)
            {
                mostRepeatedNumber=indexVal;
            }
        }
        cout<<mostRepeatedNumber<<" "<<mx<<endl;
    }
    return 0;
}
